int __fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r4
  char *v6; // r0
  int v7; // r8
  int v8; // r0
  int miner_qualified_hashrate; // r3
  int v10; // r2
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  char *v15; // r0
  int v16; // r0
  int theory_hashrate; // r0
  int v18; // r0
  int v19; // r0
  char *v20; // r0
  char *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  FILE *v26; // r3
  int v27; // [sp+14h] [bp-1020h] BYREF
  int v28; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v29[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v30; // [sp+2Ch] [bp-1008h]
  _BYTE v31[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v27 = -1;
  v28 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  v7 = (int)v6;
  if ( v6 )
  {
    V_LOCK(v6);
    v8 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      316,
      20,
      v31);
    switch ( opt_algo )
    {
      case 7:
        goto LABEL_10;
      case 6:
        miner_qualified_hashrate = get_miner_qualified_hashrate();
        break;
      case 5:
LABEL_10:
        miner_qualified_hashrate = get_theory_hashrate();
        break;
      default:
        miner_qualified_hashrate = 98 * get_theory_hashrate() / 100;
        break;
    }
    v10 = 1130;
    v7 = 0;
    if ( opt_algo != 2 )
      v10 = miner_qualified_hashrate;
    sub_2DA80(a2, a3, v10);
    return v7;
  }
  if ( strstr(v4, "/test") )
  {
    v12 = _isoc99_sscanf(v4, "/test.%d.%d", &v27, &v28);
    V_LOCK(v12);
    v13 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      344,
      20,
      v31);
    if ( v27 == 523 )
    {
      get_miner_info(a2);
      return v7;
    }
    sprintf(a2, "OK get test=%d", v27);
    return 0;
  }
  else
  {
    v14 = strstr(v4, "/ideal_rate");
    v7 = (int)v14;
    if ( !v14 )
    {
      v15 = strstr(v4, "/max_rate");
      if ( v15 )
      {
        V_LOCK(v15);
        v16 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/http_test.c",
          132,
          "http_test_bm",
          12,
          364,
          20,
          v31);
        theory_hashrate = get_theory_hashrate();
        sub_2DA80(a2, a3, 102 * theory_hashrate / 100);
      }
      else
      {
        v20 = strstr(v4, "/miner_status");
        if ( v20 )
        {
          V_LOCK(v20);
          v7 = 0;
          v23 = logfmt_raw((int)v31, 0x1000u);
          V_UNLOCK(v23);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/http_test.c",
            132,
            "http_test_bm",
            12,
            370,
            20,
            v31);
        }
        else
        {
          v21 = strstr(v4, "/productName");
          if ( v21 )
          {
            V_LOCK(v21);
            v7 = 0;
            v22 = logfmt_raw((int)v31, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/http_test.c",
              132,
              "http_test_bm",
              12,
              375,
              20,
              v31);
            snprintf(a2, 0x100u, "%s", g_miner_type);
          }
          else
          {
            v7 = strncmp(v4, "/get_sn", 7u);
            if ( v7 )
            {
              v7 = strncmp(v4, "/set_sn", 7u);
              if ( v7 )
              {
                return -1;
              }
              else
              {
                V_LOCK(0);
                v24 = logfmt_raw((int)v31, 0x1000u);
                V_UNLOCK(v24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/http_test.c",
                  132,
                  "http_test_bm",
                  12,
                  456,
                  60,
                  v31);
                snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
              }
            }
            else
            {
              memset(v29, 0, sizeof(v29));
              v30 = 0;
              V_LOCK(0);
              v25 = logfmt_raw((int)v31, 0x1000u);
              V_UNLOCK(v25);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/http_test.c",
                132,
                "http_test_bm",
                12,
                383,
                20,
                v31);
              v26 = (FILE *)fopen64(g_miner_sn_file_path, "r");
              if ( v26 && (fread(v29, 0x11u, 1u, v26), LOBYTE(v29[0])) )
                snprintf(a2, 0x12u, "%s", (const char *)v29);
              else
                strcpy(a2, "no miner sn stored on board");
            }
          }
        }
      }
      return v7;
    }
    V_LOCK(v14);
    v18 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      358,
      20,
      v31);
    v19 = get_theory_hashrate();
    sub_2DA80(a2, a3, v19);
    return 0;
  }
}
