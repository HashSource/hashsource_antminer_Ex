int __fastcall stratum_authorize_kas(int a1, _DWORD *a2, void *a3)
{
  int v3; // r6
  _DWORD *v6; // r11
  int v8; // r8
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r8
  const char *v13; // r9
  size_t v14; // r5
  size_t v15; // r0
  char *v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v22; // r0
  int v24; // r0
  int v25; // r0
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v29; // r0
  _DWORD *v30; // [sp+2Ch] [bp-1130h]
  _BYTE v31[36]; // [sp+38h] [bp-1124h] BYREF
  char v32[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v33[4100]; // [sp+158h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[4];
    v13 = (const char *)a2[5];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[9], 30);
    if ( !v8 )
    {
      V_LOCK(0);
      v29 = logfmt_raw((int)v33, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_kas/frontend_kas.c",
        167,
        "stratum_authorize_kas",
        21,
        139,
        100,
        v33);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_3;
    }
    v17 = (*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    a3 = (void *)v17;
    if ( v17 )
      break;
    free(v16);
    if ( !v6 )
      return 0;
LABEL_3:
    if ( v6[1] != -1 )
    {
      v8 = 0;
LABEL_5:
      v9 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( !v11 )
        json_delete(v6);
      if ( v8 )
        return v8;
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  v6 = (_DWORD *)json_loads(v17, 0, v32);
  free(a3);
  if ( !v6 )
  {
    V_LOCK(v18);
    v24 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kas/frontend_kas.c",
      167,
      "stratum_authorize_kas",
      21,
      153,
      100,
      v33);
    free(v16);
    goto LABEL_10;
  }
  v19 = json_object_get(v6, "id");
  json_integer_value(v19);
  v20 = (_DWORD *)json_object_get(v6, "error");
  v30 = v20;
  if ( !v20 || *v20 == 7 )
    goto LABEL_22;
  V_LOCK(v20);
  V_INT((int)v31, "poolno");
  v21 = json_array_get(v30, 1u);
  json_string_value(v21);
  v22 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_kas/frontend_kas.c",
    167,
    "stratum_authorize_kas",
    21,
    163,
    80,
    v33);
  if ( !v3
    || (v16 = (char *)json_dumps(v30, 3),
        V_LOCK(v16),
        v25 = logfmt_raw((int)v33, 0x1000u),
        V_UNLOCK(v25),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          167,
          "stratum_authorize_kas",
          21,
          170,
          100,
          v33),
        v16) )
  {
    v8 = 0;
LABEL_22:
    free(v16);
    if ( v6[1] != -1 )
      goto LABEL_5;
    if ( v8 )
      return v8;
    goto LABEL_10;
  }
  if ( v6[1] != -1 )
  {
    v26 = v6 + 1;
    __dmb(0xBu);
    do
    {
      v27 = __ldrex(v26);
      v28 = v27 - 1;
    }
    while ( __strex(v28, v26) );
    if ( !v28 )
      json_delete(v6);
  }
  return 0;
}
