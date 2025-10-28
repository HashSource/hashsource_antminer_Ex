int __fastcall sub_473AC(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r6
  _DWORD *v7; // r0
  char *v8; // r5
  bool v9; // r4
  int valid; // r8
  size_t v12; // r0
  const char *nusers; // r0
  void *v14; // r0
  int lock; // r2
  size_t v16; // r0
  _BYTE src[288]; // [sp+10h] [bp-1120h] BYREF
  char v18[4096]; // [sp+130h] [bp-1000h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  if ( json_array_get(a3, 2u) )
    v9 = *json_array_get(a3, 2u) == 5;
  else
    v9 = 0;
  if ( !valid_ascii(v6) || (valid = valid_hex(v8)) == 0 )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      30,
      100,
      v18);
    return 0;
  }
  v12 = strlen(v8);
  hex2bin((int)src, (unsigned __int8 *)v8, v12 >> 1);
  if ( a2 == (pthread_mutex_t *)-448 )
    return 0;
  nusers = (const char *)a2[66].__nusers;
  if ( nusers && !strcmp(nusers, v6) )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[66].__nusers, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      37,
      80,
      v18);
  }
  if ( strlen(v6) > 0x3F )
  {
    V_LOCK();
    v16 = strlen(v6);
    logfmt_raw(v18, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v6, v16, 64);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      40,
      80,
      v18);
  }
  pthread_mutex_lock(a2 + 73);
  v14 = (void *)a2[66].__nusers;
  if ( v14 )
  {
    free(v14);
    a2[66].__nusers = 0;
  }
  a2[66].__nusers = (unsigned int)_strdup(v6);
  memcpy(&a2[19], src, 0x11Eu);
  lock = a2->__lock;
  a2[18].__size[4] = v9;
  *((_QWORD *)&a2[18].__align + 2) = lock;
  pthread_mutex_unlock(a2 + 73);
  return valid;
}
