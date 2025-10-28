bool __fastcall sub_445D8(int a1, pthread_mutex_t *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r10
  _DWORD *v7; // r0
  const char *v8; // r9
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r7
  _DWORD *v15; // r0
  _DWORD *v16; // r6
  size_t v17; // r4
  size_t v18; // r11
  size_t v19; // r0
  _BOOL4 v20; // r4
  int v21; // r0
  const char *kind; // r0
  int v24; // r0
  void *v25; // r0
  char *v26; // r3
  int v27; // r4
  int v28; // r0
  int v29; // lr
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  char *src; // [sp+1Ch] [bp-1128h]
  char *v48; // [sp+20h] [bp-1124h]
  char *s; // [sp+24h] [bp-1120h]
  size_t v50; // [sp+28h] [bp-111Ch]
  size_t v51; // [sp+2Ch] [bp-1118h]
  int v52; // [sp+2Ch] [bp-1118h]
  size_t v53; // [sp+30h] [bp-1114h]
  char v54[260]; // [sp+3Ch] [bp-1108h] BYREF
  _BYTE v55[4100]; // [sp+140h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v11);
  v12 = json_array_get(a3, 4u);
  v48 = (char *)json_string_value(v12);
  v13 = json_array_get(a3, 5u);
  v14 = (const char *)json_string_value(v13);
  v15 = json_array_get(a3, 6u);
  src = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 7u);
  if ( v16 )
    v16 = (_DWORD *)(*json_array_get(a3, 7u) == 5);
  v17 = strlen(v8);
  v53 = strlen(v10);
  v51 = strlen(s);
  v50 = strlen(v48);
  v18 = strlen(v14);
  v19 = strlen(src);
  v20 = v17 + v53 + v51 + v50 + v18 + v19 != 216 || v6 == 0;
  if ( v20 )
  {
    V_LOCK(v19);
    v21 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v21);
    v20 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      34,
      100,
      v55);
    return v20;
  }
  if ( a2 == (pthread_mutex_t *)-448 )
    return v20;
  kind = (const char *)a2[65].__kind;
  if ( kind && !strcmp(kind, v6) )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      41,
      20,
      v55);
  }
  pthread_mutex_lock(a2 + 66);
  v25 = (void *)a2[65].__kind;
  if ( v25 )
  {
    free(v25);
    a2[65].__kind = 0;
  }
  a2[65].__kind = (int)_strdup(v6);
  strncpy(&a2[13].__size[12], v8, 0xCu);
  strncpy(&a2[3].__size[20], v10, 0x44u);
  v26 = strncpy(&a2[14].__size[12], v14, 0x18u);
  v27 = *(_DWORD *)v26;
  v28 = *((_DWORD *)v26 + 2);
  v52 = *((_DWORD *)v26 + 3);
  a2[64].__nusers = *((_DWORD *)v26 + 1);
  a2[64].__spins = v28;
  a2[64].__kind = v27;
  a2[65].__lock = v52;
  v29 = *((_DWORD *)v26 + 5);
  a2[65].__count = *((_DWORD *)v26 + 4);
  a2[65].__owner = v29;
  strncpy((char *)&a2[14], src, 0xCu);
  a2[18].__size[4] = (char)v16;
  if ( v16 )
    *((_QWORD *)&a2[12].__align + 2) = 0;
  snprintf(v54, 0x104u, "%s%s%s%s%s%s%s", v8, v10, s, v48, v14, src, "0000000000000000000000000000000000000000");
  v20 = hex2bin((int)&a2[6].__nusers, (unsigned __int8 *)v54, 128);
  if ( v20 )
  {
    *((_QWORD *)&a2[18].__align + 2) = a2->__lock;
  }
  else
  {
    V_LOCK(0);
    v46 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_notify_zec",
      18,
      59,
      100,
      v55);
  }
  v30 = pthread_mutex_unlock(a2 + 66);
  if ( !opt_protocol )
    return v20;
  V_LOCK(v30);
  v31 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v31);
  v32 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          68,
          20,
          v55);
  V_LOCK(v32);
  v33 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v33);
  v34 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          69,
          20,
          v55);
  V_LOCK(v34);
  v35 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v35);
  v36 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          70,
          20,
          v55);
  V_LOCK(v36);
  v37 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v37);
  v38 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          71,
          20,
          v55);
  V_LOCK(v38);
  v39 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v39);
  v40 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          72,
          20,
          v55);
  V_LOCK(v40);
  v41 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v41);
  v42 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          73,
          20,
          v55);
  V_LOCK(v42);
  v43 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v43);
  v44 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
          163,
          "stratum_notify_zec",
          18,
          74,
          20,
          v55);
  V_LOCK(v44);
  v45 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_zec/frontend_zec.c",
    163,
    "stratum_notify_zec",
    18,
    75,
    20,
    v55);
  return v20;
}
