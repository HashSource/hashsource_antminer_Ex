int __fastcall sub_3C74C(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  void *count; // r0
  size_t v13; // r7
  void *v14; // r0
  struct __pthread_internal_slist *next; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r7
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r12
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v25);
    v22 = 213;
    v23 = g_zc;
    LOWORD(v24) = 28788;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v26);
    v22 = 218;
    goto LABEL_12;
  }
  if ( v10 - 2 > 0xE )
  {
    V_LOCK(v10);
    v21 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v21);
    v22 = 222;
LABEL_12:
    v23 = g_zc;
    LOWORD(v24) = (unsigned __int16)"stratum_parse_extranonce_dash";
LABEL_13:
    HIWORD(v24) = (unsigned int)"stratum_parse_extranonce_dash" >> 16;
    zlog(
      v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_dash/frontend_dash.c",
      165,
      v24,
      29,
      v22,
      100,
      v28);
    return 0;
  }
  pthread_mutex_lock(a2 + 66);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v13 = strlen(v8) >> 1;
  a2[3].__lock = v13;
  v14 = calloc(1u, v13);
  a2[3].__count = (unsigned int)v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    next = a2[65].__list.__next;
    if ( next )
      free(next);
    v16 = calloc(1u, 0x18u);
    v17 = v16;
    a2[65].__spins = (int)v16;
    if ( v16 )
    {
      a2[3].__owner = v11;
      *v16 = v11;
      memset(v16 + 4, 0, v11);
      v17[4] = 0;
      v18 = pthread_mutex_unlock(a2 + 66);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_dash/frontend_dash.c",
        165,
        "stratum_parse_extranonce_dash",
        29,
        256,
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
      "godminer-new/frontend/frontend_dash/frontend_dash.c",
      165,
      "stratum_parse_extranonce_dash",
      29,
      231,
      100,
      v28);
    pthread_mutex_unlock(a2 + 66);
    return 0;
  }
}
