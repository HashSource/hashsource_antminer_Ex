int __fastcall cache_dag_done_check_rvn(int a1, unsigned __int8 a2, int a3)
{
  int v3; // r4
  int v4; // r5
  unsigned int v5; // r0
  _BYTE v10[36]; // [sp+20h] [bp-1024h] BYREF
  int i; // [sp+1020h] [bp-24h]
  int k; // [sp+1024h] [bp-20h]
  unsigned __int8 *v13; // [sp+1028h] [bp-1Ch]
  int v14; // [sp+102Ch] [bp-18h]
  int j; // [sp+1030h] [bp-14h]
  int v16; // [sp+1034h] [bp-10h]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "cache_dag_done_check_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "cache_dag_done_check_rvn",
    24,
    2656,
    40,
    v10);
  v13 = (unsigned __int8 *)malloc(0x1800u);
  v14 = 0;
  v16 = 0;
  while ( 1 )
  {
    v16 = 0;
    sleep(0xAu);
    v14 = sub_1B55EC(a1, 0, a2, v13);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "%s resp_num: %d, work_mode: %d", "cache_dag_done_check_rvn", v14, a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "cache_dag_done_check_rvn",
      24,
      2671,
      40,
      v10);
    if ( a2 == 73 )
      break;
    if ( a2 == 160 )
    {
      if ( a3 == 1 )
      {
        for ( i = 0; i < v14; ++i )
        {
          if ( (sub_1AA37C(*(_DWORD *)&v13[12 * i]) & 3) == 2 )
          {
            V_LOCK();
            logfmt_raw(
              v10,
              0x1000u,
              0,
              "%s chip: %02x, core: %02x cache gen done",
              "cache_dag_done_check_rvn",
              v13[12 * i + 4],
              v13[12 * i + 8]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "cache_dag_done_check_rvn",
              24,
              2688,
              40,
              v10);
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, "%s all core cache gen done", "cache_dag_done_check_rvn");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "cache_dag_done_check_rvn",
              24,
              2689,
              40,
              v10);
            return 0;
          }
        }
      }
      else if ( a3 == 2 )
      {
        for ( j = 0; j < v14; ++j )
        {
          if ( (sub_1AA37C(*(_DWORD *)&v13[12 * j]) & 1) == 1 )
          {
            V_LOCK();
            logfmt_raw(
              v10,
              0x1000u,
              0,
              "%s chip: %02x, core: %02x dag load done",
              "cache_dag_done_check_rvn",
              v13[12 * j + 4],
              v13[12 * j + 8]);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
              171,
              "cache_dag_done_check_rvn",
              24,
              2698,
              40,
              v10);
            if ( ++v16 == 64 )
            {
              V_LOCK();
              logfmt_raw(v10, 0x1000u, 0, "%s all core dag gen done", "cache_dag_done_check_rvn");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
                171,
                "cache_dag_done_check_rvn",
                24,
                2701,
                40,
                v10);
              return 0;
            }
          }
        }
      }
    }
  }
  for ( k = 0; k < v14; ++k )
  {
    if ( (sub_1AA37C(*(_DWORD *)&v13[12 * k]) & 1) != 0 )
    {
      if ( (*(_DWORD *)&v13[12 * k] & 2) != 0 )
      {
        V_LOCK();
        logfmt_raw(
          v10,
          0x1000u,
          0,
          "%s chip: %02x, core: %02x load err",
          "cache_dag_done_check_rvn",
          v13[12 * k + 4],
          v13[12 * k + 8]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
          171,
          "cache_dag_done_check_rvn",
          24,
          2678,
          40,
          v10);
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          v10,
          0x1000u,
          0,
          "%s chip: %02x, core: %02x load done",
          "cache_dag_done_check_rvn",
          v13[12 * k + 4],
          v13[12 * k + 8]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
          171,
          "cache_dag_done_check_rvn",
          24,
          2676,
          40,
          v10);
      }
    }
    else
    {
      V_LOCK();
      v3 = v13[12 * k + 4];
      v4 = v13[12 * k + 8];
      v5 = sub_1AA37C(*(_DWORD *)&v13[12 * k]);
      logfmt_raw(v10, 0x1000u, 0, "%s chip: %02x, core: %02x status %02x", "cache_dag_done_check_rvn", v3, v4, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "cache_dag_done_check_rvn",
        24,
        2681,
        40,
        v10);
    }
  }
  return 0;
}
