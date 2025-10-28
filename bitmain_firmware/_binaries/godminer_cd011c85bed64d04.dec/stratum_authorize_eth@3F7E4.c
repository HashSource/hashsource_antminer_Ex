int __fastcall stratum_authorize_eth(int a1, _DWORD *a2)
{
  int v4; // r0
  char *v5; // r11
  const char *v6; // r10
  size_t v7; // r6
  size_t v8; // r0
  char *v9; // r9
  int v10; // r10
  void *v12; // r6
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r5
  int v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r11
  int v19; // r0
  int v20; // r0
  int v21; // r0
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  int v25; // r0
  int v26; // r0
  int v27; // r0
  const char *v28; // [sp+14h] [bp-1108h]
  _DWORD s[23]; // [sp+1Ch] [bp-1100h] BYREF
  time_t v30[4]; // [sp+118h] [bp-1004h] BYREF
  unsigned __int8 v31; // [sp+12Ah] [bp-FF2h]
  unsigned __int8 v32; // [sp+12Bh] [bp-FF1h]
  unsigned __int8 v33; // [sp+12Ch] [bp-FF0h]
  unsigned __int8 v34; // [sp+12Dh] [bp-FEFh]
  unsigned __int8 v35; // [sp+12Eh] [bp-FEEh]
  unsigned __int8 v36; // [sp+12Fh] [bp-FEDh]

  if ( a2[5] )
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      174,
      60,
      v30);
    v5 = (char *)a2[5];
    goto LABEL_3;
  }
  V_LOCK(a1);
  v13 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    156,
    20,
    v30);
  memset(s, 0, 32);
  v14 = socket(2, 1, 0);
  if ( v14 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v30, "eth0");
    if ( ioctl(v14, 0x8927u, v30) >= 0 )
    {
      sprintf((char *)s, "%02X%02X%02X%02X%02X%02X", v31, v32, v33, v34, v35, v36);
      v5 = _strdup((const char *)s);
      a2[5] = v5;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK(v26);
  v27 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v27);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    165,
    20,
    v30);
  time(v30);
  sprintf((char *)s, "%d", v30[0]);
  v5 = _strdup((const char *)s);
  a2[5] = v5;
LABEL_3:
  v6 = (const char *)a2[3];
  v7 = strlen(v6);
  v28 = (const char *)a2[4];
  v8 = strlen(v28);
  v9 = (char *)malloc(v7 + v8 + 128);
  sprintf(
    v9,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v5,
    v6,
    v28,
    2);
  v10 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
LABEL_4:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v12 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v15 = (_DWORD *)json_loads((int)v12, 0, (char *)s);
  free(v12);
  if ( !v15 )
  {
    V_LOCK(v16);
    v10 = 0;
    v25 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      200,
      100,
      v30);
    free(v9);
    return v10;
  }
  v17 = (_DWORD *)json_object_get(v15, "result");
  v18 = (_DWORD *)json_object_get(v15, "error");
  v19 = json_object_get(v15, "id");
  v20 = json_integer_value(v19);
  if ( v17 && *v17 != 6 && (!v18 || *v18 == 7) )
  {
    a2[522] = 40;
  }
  else
  {
    v10 = 0;
    V_LOCK(v20);
    v21 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      210,
      100,
      v30);
  }
  free(v9);
  if ( v15[1] == -1 )
    return v10;
  v22 = v15 + 1;
  __dmb(0xBu);
  do
  {
    v23 = __ldrex(v22);
    v24 = v23 - 1;
  }
  while ( __strex(v24, v22) );
  if ( v24 )
    return v10;
  json_delete(v15);
  return v10;
}
