int __fastcall sub_47A18(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  int v10; // r0
  int v11; // lr
  int v12; // r12
  int v13; // r0
  int v14; // r3
  _DWORD *v16; // r0
  size_t v17; // r0
  size_t v18; // r6
  size_t v19; // r10
  void *v20; // r0
  size_t v21; // r7
  void *v22; // r0
  void *v23; // r0
  void *v24; // r4
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r12
  int v30; // r0
  _BYTE v31[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v10);
    v11 = 100;
    v12 = 144;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v14) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ltc/frontend_ltc.c",
      157,
      v14,
      28,
      v12,
      v11,
      v31);
    return 0;
  }
  v16 = json_array_get(a3, a4 + 1);
  v17 = json_integer_value((int)v16);
  v18 = v17;
  v19 = v17;
  if ( v17 - 2 > 0xE )
  {
    V_LOCK(v17);
    v27 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v27);
    v11 = 60;
    v12 = 149;
    v13 = g_zc;
    LOWORD(v14) = 15040;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v20 = *(void **)(a2 + 76);
  if ( v20 )
  {
    free(v20);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v21 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 72) = v21;
  v22 = calloc(1u, v21);
  *(_DWORD *)(a2 + 76) = v22;
  if ( v22 )
  {
    hex2bin((int)v22, (unsigned __int8 *)v9, v21);
    v23 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v18;
    *(_DWORD *)(a2 + 80) = v18;
    if ( v23 )
    {
      free(v23);
      v19 = *(_DWORD *)(a2 + 1604);
    }
    v24 = calloc(1u, v19);
    *(_DWORD *)(a2 + 1608) = v24;
    if ( v24 )
    {
      v25 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v25);
      v26 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_parse_extranonce_ltc",
        28,
        175,
        20,
        v31);
      return 1;
    }
    V_LOCK(0);
    v30 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v30);
    v29 = 168;
  }
  else
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v28);
    v29 = 158;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_ltc/frontend_ltc.c",
    157,
    "stratum_parse_extranonce_ltc",
    28,
    v29,
    100,
    v31);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  return 0;
}
