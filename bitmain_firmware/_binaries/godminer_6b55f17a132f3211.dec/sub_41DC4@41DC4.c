int __fastcall sub_41DC4(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
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
  size_t v18; // r5
  void *count; // r0
  size_t v20; // r9
  void *v21; // r0
  struct __pthread_internal_slist *next; // r0
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v10);
    v11 = 100;
    v12 = 142;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v14) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      162,
      v14,
      28,
      v12,
      v11,
      v28);
    return 0;
  }
  v16 = json_array_get(a3, a4 + 1);
  v17 = json_integer_value((int)v16);
  v18 = v17;
  if ( v17 - 2 > 0xE )
  {
    V_LOCK(v17);
    v26 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v26);
    v11 = 60;
    v12 = 147;
    v13 = g_zc;
    LOWORD(v14) = 32420;
    goto LABEL_4;
  }
  pthread_mutex_lock(a2 + 66);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v20 = strlen(v9) >> 1;
  a2[3].__lock = v20;
  v21 = calloc(1u, v20);
  a2[3].__count = (unsigned int)v21;
  if ( v21 )
  {
    hex2bin((int)v21, (unsigned __int8 *)v9, v20);
    next = a2[65].__list.__next;
    a2[3].__owner = v18;
    if ( next )
      free(next);
    v23 = calloc(1u, 0x14u);
    a2[65].__spins = (int)v23;
    if ( v23 )
    {
      *v23 = v18;
      memset(v23 + 1, 0, v18);
      v24 = pthread_mutex_unlock(a2 + 66);
      V_LOCK(v24);
      v25 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        162,
        "stratum_parse_extranonce_ltc",
        28,
        182,
        20,
        v28);
      return 1;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      162,
      "stratum_parse_extranonce_ltc",
      28,
      156,
      100,
      v28);
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
}
