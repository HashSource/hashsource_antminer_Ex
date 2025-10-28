int __fastcall stratum_authorize_eth(int a1, _DWORD *a2)
{
  char *v4; // r11
  const char *v5; // r10
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r9
  int v9; // r10
  void *v11; // r6
  int v12; // r0
  double *v13; // r5
  _DWORD *v14; // r6
  _DWORD *v15; // r11
  int v16; // r0
  int v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  const char *v21; // [sp+14h] [bp-1108h]
  int v22; // [sp+14h] [bp-1108h]
  _DWORD s[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v24[160]; // [sp+78h] [bp-10A4h] BYREF
  time_t v25[4]; // [sp+118h] [bp-1004h] BYREF
  unsigned __int8 v26; // [sp+12Ah] [bp-FF2h]
  unsigned __int8 v27; // [sp+12Bh] [bp-FF1h]
  unsigned __int8 v28; // [sp+12Ch] [bp-FF0h]
  unsigned __int8 v29; // [sp+12Dh] [bp-FEFh]
  unsigned __int8 v30; // [sp+12Eh] [bp-FEEh]
  unsigned __int8 v31; // [sp+12Fh] [bp-FEDh]

  if ( a2[5] )
  {
    V_LOCK();
    logfmt_raw((char *)v25, 0x1000u, 0, "Will Use Worker Name!->'%s'\r\n", a2[5]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      174,
      60,
      v25);
    v4 = (char *)a2[5];
    goto LABEL_3;
  }
  V_LOCK();
  logfmt_raw((char *)v25, 0x1000u, 0, "Didn't Set Worker Name, Will Use MacAddr!\r\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    156,
    20,
    v25);
  memset(s, 0, 32);
  v12 = socket(2, 1, 0);
  if ( v12 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v25, "eth0");
    if ( ioctl(v12, 0x8927u, v25) >= 0 )
    {
      sprintf((char *)s, "%02X%02X%02X%02X%02X%02X", v26, v27, v28, v29, v30, v31);
      v4 = _strdup((const char *)s);
      a2[5] = v4;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK();
  logfmt_raw((char *)v25, 0x1000u, 0, "Get Mac Failed, Will Use Current Time!\r\n");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    165,
    20,
    v25);
  time(v25);
  sprintf((char *)s, "%d", v25[0]);
  v4 = _strdup((const char *)s);
  a2[5] = v4;
LABEL_3:
  v5 = (const char *)a2[3];
  v6 = strlen(v5);
  v21 = (const char *)a2[4];
  v7 = strlen(v21);
  v8 = (char *)malloc(v6 + v7 + 128);
  sprintf(
    v8,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v4,
    v5,
    v21,
    2);
  v9 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v8);
  if ( !v9 )
  {
LABEL_4:
    free(v8);
    return v9;
  }
  while ( 1 )
  {
    v11 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v11 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v11);
  }
  v13 = json_loads((int)v11, 0, (char *)s);
  free(v11);
  if ( !v13 )
  {
    V_LOCK();
    v9 = 0;
    logfmt_raw((char *)v25, 0x1000u, 0, "JSON decode failed(%d): %s", s[0], v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      200,
      100,
      v25);
    free(v8);
    return v9;
  }
  v14 = (_DWORD *)json_object_get(v13, "result");
  v15 = (_DWORD *)json_object_get(v13, "error");
  v16 = json_object_get(v13, "id");
  v17 = json_integer_value(v16);
  if ( v14 && *v14 != 6 && (!v15 || *v15 == 7) )
  {
    a2[520] = 40;
  }
  else
  {
    v22 = v17;
    v9 = 0;
    V_LOCK();
    logfmt_raw((char *)v25, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      210,
      100,
      v25);
  }
  free(v8);
  if ( *((_DWORD *)v13 + 1) == -1 )
    return v9;
  v18 = (unsigned int *)v13 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v9;
  json_delete(v13);
  return v9;
}
