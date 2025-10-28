int __fastcall sub_47530(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r6
  _DWORD *v7; // r0
  char *v8; // r5
  bool v9; // r4
  int valid; // r0
  int v11; // r8
  int v12; // r0
  size_t v14; // r0
  const char *v15; // r0
  size_t v16; // r0
  void *v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r0
  _BYTE src[288]; // [sp+10h] [bp-1120h] BYREF
  _BYTE v22[4096]; // [sp+130h] [bp-1000h] BYREF

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
    v12 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      30,
      100,
      v22);
    return 0;
  }
  v14 = strlen(v8);
  hex2bin((int)src, (unsigned __int8 *)v8, v14 >> 1);
  if ( a2 == (int *)-448 )
    return 0;
  v15 = (const char *)a2[400];
  if ( v15 && !strcmp(v15, v6) )
  {
    V_LOCK(0);
    v20 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      37,
      80,
      v22);
  }
  v16 = strlen(v6);
  if ( v16 > 0x3F )
  {
    V_LOCK(v16);
    strlen(v6);
    v19 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      "stratum_notify_kda",
      18,
      40,
      80,
      v22);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
  v17 = (void *)a2[400];
  if ( v17 )
  {
    free(v17);
    a2[400] = 0;
  }
  a2[400] = (int)_strdup(v6);
  memcpy(a2 + 114, src, 0x11Eu);
  v18 = *a2;
  *((_BYTE *)a2 + 436) = v9;
  *((_QWORD *)a2 + 56) = v18;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
  return v11;
}
