int __fastcall sub_3CE18(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r0
  int v13; // r0
  int v14; // r12
  int v15; // r0
  int v16; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  void *v21; // r0
  size_t v22; // r6
  void *v23; // r0
  void *v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  _BYTE v29[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v18);
    v14 = 73;
    v15 = g_zc;
    LOWORD(v16) = 12784;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v19);
    v14 = 78;
    goto LABEL_6;
  }
  if ( v10 - 4 > 0xB )
  {
    V_LOCK(v10);
    v20 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v20);
    v14 = 82;
    goto LABEL_6;
  }
  v12 = v10 + (strlen(v8) >> 1);
  if ( v12 != 16 )
  {
    V_LOCK(v12);
    strlen(v8);
    v13 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v13);
    v14 = 86;
LABEL_6:
    v15 = g_zc;
    LOWORD(v16) = (unsigned __int16)"stratum_parse_extranonce_ckb";
LABEL_7:
    HIWORD(v16) = (unsigned int)"stratum_parse_extranonce_ckb" >> 16;
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      167,
      v16,
      28,
      v14,
      100,
      v29);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v21 = *(void **)(a2 + 80);
  if ( v21 )
  {
    free(v21);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v22 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v22;
  v23 = calloc(1u, v22);
  *(_DWORD *)(a2 + 80) = v23;
  if ( v23 )
  {
    hex2bin((int)v23, (unsigned __int8 *)v8, v22);
    memcpy((void *)(a2 + 496), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v24 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v11;
    if ( v24 )
      free(v24);
    v25 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v25;
    if ( v25 )
    {
      *v25 = v11;
      memset(v25 + 1, 0, v11);
      v26 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v26);
      v27 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v27);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
        167,
        "stratum_parse_extranonce_ckb",
        28,
        121,
        20,
        v29);
      return 1;
    }
    else
    {
      printf(aInvalidPointer, "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      167,
      "stratum_parse_extranonce_ckb",
      28,
      95,
      100,
      v29);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
