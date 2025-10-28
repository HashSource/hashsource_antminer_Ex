char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r4
  char *v6; // r8
  int theory_hashrate; // r3
  int v8; // r2
  int v10; // r0
  int v11; // r0
  FILE *v12; // r3
  int v13; // [sp+14h] [bp-1020h] BYREF
  int v14; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v15[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v16; // [sp+2Ch] [bp-1008h]
  char v17[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v13 = -1;
  v14 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  if ( v6 )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      224,
      20,
      v17);
    switch ( opt_algo )
    {
      case 7:
        goto LABEL_10;
      case 6:
        theory_hashrate = sub_2D560();
        break;
      case 5:
LABEL_10:
        theory_hashrate = get_theory_hashrate();
        break;
      default:
        theory_hashrate = 98 * get_theory_hashrate() / 100;
        break;
    }
    v8 = 1130;
    v6 = 0;
    if ( opt_algo != 2 )
      v8 = theory_hashrate;
    sub_2D4B0(a2, a3, v8);
    return v6;
  }
  if ( strstr(v4, "/test") )
  {
    _isoc99_sscanf(v4, "/test.%d.%d", &v13, &v14);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get test = %d", v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      244,
      20,
      v17);
    if ( v13 == 523 )
    {
      get_miner_info(a2);
      return v6;
    }
    sprintf(a2, "OK get test=%d", v13);
    return 0;
  }
  else
  {
    v6 = strstr(v4, "/ideal_rate");
    if ( !v6 )
    {
      if ( strstr(v4, "/max_rate") )
      {
        V_LOCK();
        logfmt_raw(v17, 0x1000u, 0, "cmd : get max rate");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/http_test.c",
          132,
          "http_test_bm",
          12,
          264,
          20,
          v17);
        v10 = get_theory_hashrate();
        sub_2D4B0(a2, a3, 102 * v10 / 100);
      }
      else if ( strstr(v4, "/miner_status") )
      {
        V_LOCK();
        v6 = 0;
        logfmt_raw(v17, 0x1000u, 0, "cmd : get miner status");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/http_test.c",
          132,
          "http_test_bm",
          12,
          270,
          20,
          v17);
      }
      else if ( strstr(v4, "/productName") )
      {
        V_LOCK();
        v6 = 0;
        logfmt_raw(v17, 0x1000u, 0, "cmd : get miner type");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/http_test.c",
          132,
          "http_test_bm",
          12,
          275,
          20,
          v17);
        snprintf(a2, 0x100u, "%s", g_miner_type);
      }
      else
      {
        v6 = (char *)strncmp(v4, "/get_sn", 7u);
        if ( v6 )
        {
          v6 = (char *)strncmp(v4, "/set_sn", 7u);
          if ( v6 )
          {
            return (char *)-1;
          }
          else
          {
            V_LOCK();
            logfmt_raw(v17, 0x1000u, 0, "cmd : set miner sn, doesn't spport");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/http_test.c",
              132,
              "http_test_bm",
              12,
              356,
              60,
              v17);
            snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
          }
        }
        else
        {
          memset(v15, 0, sizeof(v15));
          v16 = 0;
          V_LOCK();
          logfmt_raw(v17, 0x1000u, 0, "cmd : get miner sn");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/http_test.c",
            132,
            "http_test_bm",
            12,
            283,
            20,
            v17);
          v12 = (FILE *)fopen64(g_miner_sn_file_path, "r");
          if ( v12 && (fread(v15, 0x11u, 1u, v12), LOBYTE(v15[0])) )
            snprintf(a2, 0x12u, "%s", (const char *)v15);
          else
            strcpy(a2, "no miner sn stored on board");
        }
      }
      return v6;
    }
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "cmd : get ideal rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      258,
      20,
      v17);
    v11 = get_theory_hashrate();
    sub_2D4B0(a2, a3, v11);
    return 0;
  }
}
