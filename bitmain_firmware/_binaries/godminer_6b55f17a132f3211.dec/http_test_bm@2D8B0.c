int __fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  char *v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r0
  char *v11; // r0
  char *v12; // r0
  int v13; // r0
  int theory_hashrate; // r0
  int v15; // r0
  int miner_qualified_hashrate; // r0
  int v17; // r0
  int v18; // r0
  char *v19; // r0
  char *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  size_t v24; // r5
  size_t v25; // r0
  FILE *v26; // r0
  FILE *v27; // r6
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // lr
  int v32; // r12
  int v33; // r0
  int v34; // r0
  int v35; // r0
  FILE *v36; // r0
  FILE *v37; // r6
  int v38; // r0
  int v39; // r0
  int v40; // [sp+14h] [bp-1020h] BYREF
  int v41; // [sp+18h] [bp-101Ch] BYREF
  char s[4]; // [sp+1Ch] [bp-1018h] BYREF
  int v43; // [sp+20h] [bp-1014h]
  int v44; // [sp+24h] [bp-1010h]
  int v45; // [sp+28h] [bp-100Ch]
  __int16 v46; // [sp+2Ch] [bp-1008h]
  _BYTE v47[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v40 = -1;
  v41 = -1;
  v6 = strstr((const char *)(a1 + 4), "/rate");
  v7 = (int)v6;
  if ( v6 )
  {
    V_LOCK(v6);
    v7 = 0;
    v15 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/http_test.c",
      138,
      "http_test_bm",
      12,
      347,
      20,
      v47);
    miner_qualified_hashrate = get_miner_qualified_hashrate();
    sub_2D270(a2, a3, miner_qualified_hashrate);
    return v7;
  }
  if ( strstr(v4, "/test") )
  {
    v8 = _isoc99_sscanf(v4, "/test.%d.%d", &v40, &v41);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/http_test.c",
      138,
      "http_test_bm",
      12,
      354,
      20,
      v47);
    if ( v40 != 523 )
    {
      sprintf(a2, "OK get test=%d", v40);
      return 0;
    }
    get_miner_info(a2);
    return v7;
  }
  v11 = strstr(v4, "/ideal_rate");
  v7 = (int)v11;
  if ( !v11 )
  {
    v12 = strstr(v4, "/max_rate");
    if ( v12 )
    {
      V_LOCK(v12);
      v13 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/http_test.c",
        138,
        "http_test_bm",
        12,
        374,
        20,
        v47);
      theory_hashrate = get_theory_hashrate();
      sub_2D270(a2, a3, 102 * theory_hashrate / 100);
      return v7;
    }
    v19 = strstr(v4, "/miner_status");
    if ( v19 )
    {
      V_LOCK(v19);
      v7 = 0;
      v22 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/http_test.c",
        138,
        "http_test_bm",
        12,
        380,
        20,
        v47);
      return v7;
    }
    v20 = strstr(v4, "/productName");
    if ( v20 )
    {
      v7 = 0;
      V_LOCK(v20);
      strlen(g_miner_type);
      v21 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/http_test.c",
        138,
        "http_test_bm",
        12,
        385,
        20,
        v47);
      strcpy(a2, g_miner_type);
      return v7;
    }
    v7 = strncmp(v4, "/get_sn", 7u);
    if ( !v7 )
    {
      *(_DWORD *)s = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      V_LOCK(0);
      v35 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v35);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/http_test.c",
        138,
        "http_test_bm",
        12,
        393,
        20,
        v47);
      v36 = (FILE *)fopen64(g_miner_sn_file_path, "r");
      v37 = v36;
      if ( v36 && (fread(s, 0x11u, 1u, v36), fclose(v37), s[0]) )
        snprintf(a2, 0x12u, "%s", s);
      else
        strcpy(a2, "no miner sn stored on board");
      return v7;
    }
    v7 = strncmp(v4, "/set_sn", 7u);
    if ( v7 )
      return -1;
    V_LOCK(0);
    v23 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/http_test.c",
      138,
      "http_test_bm",
      12,
      423,
      20,
      v47);
    *(_DWORD *)s = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    if ( _isoc99_sscanf(v4, "/set_sn:%s", s) != 1 )
      goto LABEL_23;
    v24 = strlen(&g_miner_sn);
    v25 = strlen(s);
    if ( v24 == 17
      && (unsigned int)(unsigned __int8)g_miner_sn - 65 <= 0x19
      && (v25 != 17 || (unsigned int)(unsigned __int8)s[0] - 65 > 0x19) )
    {
      v38 = snprintf(a2, 0x64u, "update miner sn %s ok(without writing file)", s);
      V_LOCK(v38);
      v39 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v39);
      v30 = g_zc;
      v31 = 60;
      v32 = 457;
      goto LABEL_22;
    }
    v26 = (FILE *)fopen64(g_miner_sn_file_path, "w");
    v27 = v26;
    if ( v26 )
    {
      fputs(s, v26);
      fclose(v27);
      strncpy(&g_miner_sn, s, 0x11u);
      v28 = snprintf(a2, 0x32u, "write miner sn %s to file ok", &g_miner_sn);
      V_LOCK(v28);
      v29 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v29);
      v30 = g_zc;
      v31 = 60;
      v32 = 449;
    }
    else
    {
LABEL_23:
      v33 = snprintf(a2, 0x32u, "set miner sn %s failed", s);
      V_LOCK(v33);
      v34 = logfmt_raw((int)v47, 0x1000u);
      V_UNLOCK(v34);
      v30 = g_zc;
      v31 = 80;
      v32 = 464;
    }
LABEL_22:
    zlog(
      v30,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/http_test.c",
      138,
      "http_test_bm",
      12,
      v32,
      v31,
      v47);
    return v7;
  }
  V_LOCK(v11);
  v17 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/http_test.c",
    138,
    "http_test_bm",
    12,
    368,
    20,
    v47);
  v18 = get_theory_hashrate();
  sub_2D270(a2, a3, v18);
  return 0;
}
