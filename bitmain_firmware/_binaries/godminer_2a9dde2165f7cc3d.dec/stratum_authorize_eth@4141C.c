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
  _DWORD *v17; // r11
  _DWORD *v18; // r6
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r0
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r0
  const char *v29; // [sp+2Ch] [bp-1128h]
  int v30; // [sp+30h] [bp-1124h] BYREF
  _DWORD s[23]; // [sp+54h] [bp-1100h] BYREF
  time_t v32[4]; // [sp+150h] [bp-1004h] BYREF
  unsigned __int8 v33; // [sp+162h] [bp-FF2h]
  unsigned __int8 v34; // [sp+163h] [bp-FF1h]
  unsigned __int8 v35; // [sp+164h] [bp-FF0h]
  unsigned __int8 v36; // [sp+165h] [bp-FEFh]
  unsigned __int8 v37; // [sp+166h] [bp-FEEh]
  unsigned __int8 v38; // [sp+167h] [bp-FEDh]

  if ( a2[6] )
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_authorize_eth",
      21,
      379,
      20,
      v32);
    v5 = (char *)a2[6];
    goto LABEL_3;
  }
  V_LOCK(a1);
  v13 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
    167,
    "stratum_authorize_eth",
    21,
    361,
    20,
    v32);
  memset(s, 0, 32);
  v14 = socket(2, 1, 0);
  if ( v14 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v32, "eth0");
    if ( ioctl(v14, 0x8927u, v32) >= 0 )
    {
      sprintf((char *)s, "%02X%02X%02X%02X%02X%02X", v33, v34, v35, v36, v37, v38);
      v5 = _strdup((const char *)s);
      a2[6] = v5;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  V_LOCK(v27);
  v28 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
    167,
    "stratum_authorize_eth",
    21,
    370,
    20,
    v32);
  time(v32);
  sprintf((char *)s, "%d", v32[0]);
  v5 = _strdup((const char *)s);
  a2[6] = v5;
LABEL_3:
  v6 = (const char *)a2[4];
  v7 = strlen(v6);
  v29 = (const char *)a2[5];
  v8 = strlen(v29);
  v9 = (char *)malloc(v7 + v8 + 128);
  sprintf(
    v9,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v5,
    v6,
    v29,
    2);
  v10 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v9);
  if ( !v10 )
  {
LABEL_4:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( !v12 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v12);
  }
  v15 = (_DWORD *)json_loads((int)v12, 0, (char *)s);
  free(v12);
  if ( !v15 )
  {
    V_LOCK(v16);
    v10 = 0;
    v26 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_authorize_eth",
      21,
      404,
      100,
      v32);
    free(v9);
    return v10;
  }
  v17 = (_DWORD *)json_object_get(v15, "result");
  v18 = (_DWORD *)json_object_get(v15, "error");
  v19 = json_object_get(v15, "id");
  v20 = json_integer_value(v19);
  if ( v17 && *v17 != 6 && (!v18 || *v18 == 7) )
  {
    a2[480] = 40;
  }
  else
  {
    V_LOCK(v20);
    v10 = 0;
    V_INT((int)&v30, "poolno");
    v21 = json_array_get(v18, 1u);
    json_string_value(v21);
    v22 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_authorize_eth",
      21,
      415,
      80,
      v32);
  }
  free(v9);
  if ( v15[1] == -1 )
    return v10;
  v23 = v15 + 1;
  __dmb(0xBu);
  do
  {
    v24 = __ldrex(v23);
    v25 = v24 - 1;
  }
  while ( __strex(v25, v23) );
  if ( v25 )
    return v10;
  json_delete(v15);
  return v10;
}
