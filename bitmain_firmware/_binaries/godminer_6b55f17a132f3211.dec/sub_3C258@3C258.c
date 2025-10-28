int __fastcall sub_3C258(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r5
  _DWORD *v9; // r0
  unsigned int v10; // r9
  unsigned int v11; // r11
  char *v12; // r8
  _DWORD *v13; // r0
  bool v14; // r10
  size_t v15; // r0
  _BOOL4 v16; // r4
  int v17; // r0
  _DWORD *v19; // r0
  size_t v20; // r0
  const char *kind; // r0
  size_t v22; // r0
  void *v23; // r4
  int v24; // r0
  unsigned int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  unsigned int v30; // r3
  int v31; // r1
  unsigned int v32; // r2
  int v33; // r3
  unsigned int v34; // r1
  int v35; // r2
  int v36; // r3
  int lock; // r2
  int v38; // r0
  int v39; // r0
  _DWORD v40[8]; // [sp+10h] [bp-1044h] BYREF
  _DWORD v41[8]; // [sp+30h] [bp-1024h] BYREF
  _BYTE v42[4100]; // [sp+50h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  if ( json_array_get(a3, 3u) && *json_array_get(a3, 3u) == 2 )
  {
    v19 = json_array_get(a3, 3u);
    v11 = 4;
    v12 = (char *)json_string_value(v19);
  }
  else
  {
    v11 = 3;
    v12 = 0;
  }
  v13 = json_array_get(a3, v11);
  v14 = (char)v13;
  if ( v13 )
    v14 = *json_array_get(a3, v11) == 5;
  v15 = v8 == 0;
  if ( v6 )
    v16 = v8 == 0;
  else
    v16 = 1;
  if ( v16 || (v15 = strlen(v8), v15 != 64) )
  {
    V_LOCK(v15);
    v17 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      163,
      "stratum_notify_ckb",
      18,
      30,
      100,
      v42);
    return 0;
  }
  hex2bin((int)v40, (unsigned __int8 *)v8, 32);
  if ( v12 )
  {
    v20 = strlen(v12);
    hex2bin((int)v41, (unsigned __int8 *)v12, v20 >> 1);
  }
  if ( a2 == (pthread_mutex_t *)-448 )
    return 0;
  kind = (const char *)a2[65].__kind;
  if ( kind && !strcmp(kind, v6) )
  {
    V_LOCK(0);
    v39 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      163,
      "stratum_notify_ckb",
      18,
      41,
      20,
      v42);
  }
  v22 = strlen(v6);
  if ( v22 > 0x1F )
  {
    V_LOCK(v22);
    strlen(v6);
    v38 = logfmt_raw((int)v42, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      163,
      "stratum_notify_ckb",
      18,
      44,
      100,
      v42);
  }
  pthread_mutex_lock(a2 + 66);
  v23 = (void *)a2[65].__kind;
  a2[65].__kind = (int)_strdup(v6);
  if ( v23 )
    free(v23);
  v24 = v40[0];
  v25 = v40[1];
  v26 = v40[2];
  v27 = v40[3];
  a2[63].__nusers = v10;
  a2[68].__count = v10;
  a2[19].__lock = v24;
  a2[19].__count = v25;
  a2[19].__owner = v26;
  a2[19].__kind = v27;
  v28 = v40[5];
  v29 = v40[6];
  v30 = v40[7];
  a2[19].__nusers = v40[4];
  a2[19].__spins = v28;
  a2[20].__lock = v29;
  a2[20].__count = v30;
  if ( v12 )
  {
    v31 = v41[1];
    v32 = v41[2];
    v33 = v41[3];
    a2[3].__spins = v41[0];
    a2[4].__lock = v31;
    a2[4].__count = v32;
    a2[4].__owner = v33;
    v34 = v41[5];
    v35 = v41[6];
    v36 = v41[7];
    a2[4].__kind = v41[4];
    a2[4].__nusers = v34;
    a2[4].__spins = v35;
    a2[5].__lock = v36;
  }
  lock = a2->__lock;
  a2[18].__size[4] = v14;
  *((_QWORD *)&a2[18].__align + 2) = lock;
  pthread_mutex_unlock(a2 + 66);
  return 1;
}
