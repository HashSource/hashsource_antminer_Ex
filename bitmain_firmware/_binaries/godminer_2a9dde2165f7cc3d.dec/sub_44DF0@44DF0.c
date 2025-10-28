int __fastcall sub_44DF0(int a1, int *a2, _DWORD *a3)
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
  void *v15; // r9
  size_t v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r0
  _BYTE src[288]; // [sp+10h] [bp-1124h] BYREF
  _BYTE v21[4100]; // [sp+130h] [bp-1004h] BYREF

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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      167,
      "stratum_notify_kda",
      18,
      28,
      100,
      v21);
    return 0;
  }
  v14 = strlen(v8);
  hex2bin((int)src, (unsigned __int8 *)v8, v14 >> 1);
  if ( a2 == (int *)-456 )
    return 0;
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  v15 = (void *)a2[395];
  if ( !v15 )
  {
    v16 = strlen(v6);
    if ( v16 <= 0x3F )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( !strcmp((const char *)a2[395], v6) )
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      167,
      "stratum_notify_kda",
      18,
      36,
      80,
      v21);
    v16 = strlen(v6);
    if ( v16 <= 0x3F )
    {
LABEL_16:
      v15 = (void *)a2[395];
      if ( !v15 )
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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      167,
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
  free(v15);
  a2[395] = 0;
LABEL_13:
  a2[395] = (int)_strdup(v6);
  memcpy(a2 + 116, src, 0x11Eu);
  v17 = *a2;
  *((_BYTE *)a2 + 444) = v9;
  *((_QWORD *)a2 + 57) = v17;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
  return v11;
}
