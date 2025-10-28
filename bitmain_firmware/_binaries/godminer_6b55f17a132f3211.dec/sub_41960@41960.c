int __fastcall sub_41960(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r5
  bool v9; // r4
  int valid; // r0
  int v11; // r6
  int v12; // r0
  size_t v14; // r0
  void *kind; // r5
  size_t v16; // r0
  int lock; // r2
  int v18; // r0
  int v19; // r0
  _BYTE src[288]; // [sp+18h] [bp-1124h] BYREF
  _BYTE v21[4100]; // [sp+138h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  if ( json_array_get(a3, 2u) )
    v9 = *json_array_get(a3, 2u) == 5;
  else
    v9 = 0;
  valid = valid_ascii(v6);
  if ( !valid || (valid = valid_hex(v8), (v11 = valid) == 0) )
  {
    V_LOCK(valid);
    v12 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_kda/frontend_kda.c",
      163,
      "stratum_notify_kda",
      18,
      28,
      100,
      v21);
    return 0;
  }
  v14 = strlen(v8);
  hex2bin((int)src, (unsigned __int8 *)v8, v14 >> 1);
  if ( a2 == (pthread_mutex_t *)-448 )
    return 0;
  pthread_mutex_lock(a2 + 66);
  kind = (void *)a2[65].__kind;
  if ( !kind )
  {
    v16 = strlen(v6);
    if ( v16 <= 0x3F )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( !strcmp((const char *)a2[65].__kind, v6) )
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_kda/frontend_kda.c",
      163,
      "stratum_notify_kda",
      18,
      36,
      80,
      v21);
    v16 = strlen(v6);
    if ( v16 <= 0x3F )
    {
LABEL_16:
      kind = (void *)a2[65].__kind;
      if ( !kind )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_15:
    V_LOCK(v16);
    strlen(v6);
    v18 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_kda/frontend_kda.c",
      163,
      "stratum_notify_kda",
      18,
      39,
      80,
      v21);
    goto LABEL_16;
  }
  v16 = strlen(v6);
  if ( v16 > 0x3F )
    goto LABEL_15;
LABEL_12:
  free(kind);
  a2[65].__kind = 0;
LABEL_13:
  a2[65].__kind = (int)_strdup(v6);
  memcpy(&a2[19], src, 0x11Eu);
  lock = a2->__lock;
  a2[18].__size[4] = v9;
  *((_QWORD *)&a2[18].__align + 2) = lock;
  pthread_mutex_unlock(a2 + 66);
  return v11;
}
