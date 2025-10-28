int __fastcall sub_C8434(const json_t *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  const char *v8; // r3
  bool v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v17[16]; // [sp+1Ch] [bp-1010h] BYREF
  const json_t *v18; // [sp+101Ch] [bp-10h]
  json_t *v19; // [sp+1020h] [bp-Ch]
  int v20; // [sp+1024h] [bp-8h]

  v18 = json_object_get(a1, "chain");
  if ( v18 && !*(_DWORD *)v18 )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "chain:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      912,
      20,
      v17);
    v19 = json_object_get(v18, "chain_num");
    if ( v19 && *(_DWORD *)v19 == 3 )
    {
      V_LOCK();
      v2 = json_integer_value((int)v19);
      logfmt_raw(v17, 0x1000u, 0, "chain_num : %d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain",
        12,
        920,
        20,
        v17);
      dword_C27368 = json_integer_value((int)v19);
      v20 = sub_C1D38();
      if ( v20 )
      {
        return v20;
      }
      else
      {
        v19 = json_object_get(v18, "chain_row");
        if ( v19 && *(_DWORD *)v19 == 3 )
        {
          V_LOCK();
          v3 = json_integer_value((int)v19);
          logfmt_raw(v17, 0x1000u, 0, "chain_row: %d", v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_chain",
            12,
            931,
            20,
            v17);
          dword_C2736C = json_integer_value((int)v19);
          v19 = json_object_get(v18, "chain_column");
          if ( v19 && *(_DWORD *)v19 == 3 )
          {
            V_LOCK();
            v4 = json_integer_value((int)v19);
            logfmt_raw(v17, 0x1000u, 0, "chain_column: %d", v4);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_chain",
              12,
              940,
              20,
              v17);
            dword_C27370 = json_integer_value((int)v19);
            v19 = json_object_get(v18, "chain_domain_num");
            if ( v19 && *(_DWORD *)v19 == 3 )
            {
              V_LOCK();
              v5 = json_integer_value((int)v19);
              logfmt_raw(v17, 0x1000u, 0, "chain_domain_num : %d", v5);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_chain",
                12,
                949,
                20,
                v17);
              dword_C27374 = json_integer_value((int)v19);
              v19 = json_object_get(v18, "chain_asic_num");
              if ( v19 && *(_DWORD *)v19 == 3 )
              {
                V_LOCK();
                v6 = json_integer_value((int)v19);
                logfmt_raw(v17, 0x1000u, 0, "chain_asic_num : %d", v6);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_chain",
                  12,
                  958,
                  20,
                  v17);
                dword_C27378 = json_integer_value((int)v19);
                v19 = json_object_get(v18, "domain_asic_num");
                if ( v19 && *(_DWORD *)v19 == 3 )
                {
                  V_LOCK();
                  v7 = json_integer_value((int)v19);
                  logfmt_raw(v17, 0x1000u, 0, "domain_asic_num : %d", v7);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_chain",
                    12,
                    967,
                    20,
                    v17);
                  dword_C2737C = json_integer_value((int)v19);
                  v19 = json_object_get(v18, "pic_mcu_en");
                  if ( v19 && *(_DWORD *)v19 == 5 || v19 && *(_DWORD *)v19 == 6 )
                  {
                    V_LOCK();
                    if ( v19 && *(_DWORD *)v19 == 5 )
                      v8 = "true";
                    else
                      v8 = "false";
                    logfmt_raw(v17, 0x1000u, 0, "pic_mcu_en: %s", v8);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_chain",
                      12,
                      976,
                      20,
                      v17);
                    v9 = v19 && *(_DWORD *)v19 == 5;
                    byte_C27380 = v9;
                    v19 = json_object_get(v18, "sensor_mode");
                    if ( v19 && *(_DWORD *)v19 == 3 )
                    {
                      V_LOCK();
                      v10 = json_integer_value((int)v19);
                      logfmt_raw(v17, 0x1000u, 0, "sensor mode : %d", v10);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_chain",
                        12,
                        985,
                        20,
                        v17);
                      *(_DWORD *)(dword_C27388 + 88) = json_integer_value((int)v19);
                      v19 = json_object_get(v18, "sensor_num");
                      if ( v19 && *(_DWORD *)v19 == 3 )
                      {
                        V_LOCK();
                        v11 = json_integer_value((int)v19);
                        logfmt_raw(v17, 0x1000u, 0, "sensor num : %d", v11);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
                          149,
                          "_parse_chain",
                          12,
                          994,
                          20,
                          v17);
                        *(_DWORD *)(dword_C27388 + 92) = json_integer_value((int)v19);
                        v20 = sub_C1F20();
                        if ( v20 )
                        {
                          return v20;
                        }
                        else
                        {
                          v19 = json_object_get(v18, "max_chip_temp");
                          if ( v19 && *(_DWORD *)v19 == 3 )
                          {
                            V_LOCK();
                            v12 = json_integer_value((int)v19);
                            logfmt_raw(v17, 0x1000u, 0, "max_chip_temp : %d", v12);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              149,
                              "_parse_chain",
                              12,
                              1005,
                              20,
                              v17);
                            *(_DWORD *)(dword_C27388 + 96) = json_integer_value((int)v19);
                            v19 = json_object_get(v18, "max_pcb_temp");
                            if ( v19 && *(_DWORD *)v19 == 3 )
                            {
                              V_LOCK();
                              v13 = json_integer_value((int)v19);
                              logfmt_raw(v17, 0x1000u, 0, "max_pcb_temp : %d", v13);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_chain",
                                12,
                                1014,
                                20,
                                v17);
                              *(_DWORD *)(dword_C27388 + 100) = json_integer_value((int)v19);
                              v19 = json_object_get(v18, "min_pcb_temp");
                              if ( v19 && *(_DWORD *)v19 == 3 )
                              {
                                V_LOCK();
                                v14 = json_integer_value((int)v19);
                                logfmt_raw(v17, 0x1000u, 0, "min_pcb_temp : %d", v14);
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                  149,
                                  "_parse_chain",
                                  12,
                                  1023,
                                  20,
                                  v17);
                                *(_DWORD *)(dword_C27388 + 104) = json_integer_value((int)v19);
                                v19 = json_object_get(v18, "max_uneffective_count");
                                if ( v19 && *(_DWORD *)v19 == 3 )
                                {
                                  V_LOCK();
                                  v15 = json_integer_value((int)v19);
                                  logfmt_raw(v17, 0x1000u, 0, "max_uneffective_count : %d", v15);
                                  V_UNLOCK();
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                    149,
                                    "_parse_chain",
                                    12,
                                    1032,
                                    20,
                                    v17);
                                  *(_DWORD *)(dword_C27388 + 108) = json_integer_value((int)v19);
                                  v20 = sub_C4E44(v18);
                                  if ( v20 )
                                  {
                                    V_LOCK();
                                    logfmt_raw(v17, 0x1000u, 0, "parse asic failed");
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_chain",
                                      12,
                                      1038,
                                      100,
                                      v17);
                                    return -1;
                                  }
                                  else if ( byte_C27380 && (v20 = sub_C6D9C(v18)) != 0 )
                                  {
                                    V_LOCK();
                                    logfmt_raw(v17, 0x1000u, 0, "parse chain pic failed");
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_chain",
                                      12,
                                      1046,
                                      100,
                                      v17);
                                    return -1;
                                  }
                                  else if ( *(_DWORD *)(dword_C27388 + 88) == 3 && (v20 = sub_C6468(v18)) != 0 )
                                  {
                                    V_LOCK();
                                    logfmt_raw(v17, 0x1000u, 0, "parse chain ctrlboard failed");
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_chain",
                                      12,
                                      1055,
                                      100,
                                      v17);
                                    return -1;
                                  }
                                  else if ( (!*(_DWORD *)(dword_C27388 + 88) || *(_DWORD *)(dword_C27388 + 88) == 2)
                                         && (v20 = sub_C7788(v18)) != 0 )
                                  {
                                    V_LOCK();
                                    logfmt_raw(v17, 0x1000u, 0, "parse chain sensor failed");
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_chain",
                                      12,
                                      1065,
                                      100,
                                      v17);
                                    return -1;
                                  }
                                  else
                                  {
                                    v20 = sub_C72F0(v18);
                                    if ( v20 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v17, 0x1000u, 0, "parse chain eeprom failed");
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                        149,
                                        "_parse_chain",
                                        12,
                                        1073,
                                        100,
                                        v17);
                                      return -1;
                                    }
                                    else
                                    {
                                      sub_C200C();
                                      return 0;
                                    }
                                  }
                                }
                                else
                                {
                                  V_LOCK();
                                  logfmt_raw(v17, 0x1000u, 0, "get max_uneffective_count failed");
                                  V_UNLOCK();
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                    149,
                                    "_parse_chain",
                                    12,
                                    1029,
                                    100,
                                    v17);
                                  return -1;
                                }
                              }
                              else
                              {
                                V_LOCK();
                                logfmt_raw(v17, 0x1000u, 0, "get min_pcb_temp failed");
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                  149,
                                  "_parse_chain",
                                  12,
                                  1020,
                                  100,
                                  v17);
                                return -1;
                              }
                            }
                            else
                            {
                              V_LOCK();
                              logfmt_raw(v17, 0x1000u, 0, "get max_pcb_temp failed");
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_chain",
                                12,
                                1011,
                                100,
                                v17);
                              return -1;
                            }
                          }
                          else
                          {
                            V_LOCK();
                            logfmt_raw(v17, 0x1000u, 0, "get max_chip_temp failed");
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              149,
                              "_parse_chain",
                              12,
                              1002,
                              100,
                              v17);
                            return -1;
                          }
                        }
                      }
                      else
                      {
                        V_LOCK();
                        logfmt_raw(v17, 0x1000u, 0, "get sensor num failed");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
                          149,
                          "_parse_chain",
                          12,
                          991,
                          100,
                          v17);
                        return -1;
                      }
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw(v17, 0x1000u, 0, "get sensor_mode failed");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_chain",
                        12,
                        982,
                        100,
                        v17);
                      return -1;
                    }
                  }
                  else
                  {
                    V_LOCK();
                    logfmt_raw(v17, 0x1000u, 0, "get pic_mcu_en failed!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_chain",
                      12,
                      973,
                      100,
                      v17);
                    return -1;
                  }
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v17, 0x1000u, 0, "get domain_asic_num failed");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_chain",
                    12,
                    964,
                    100,
                    v17);
                  return -1;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v17, 0x1000u, 0, "get chain_asic_num failed");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_chain",
                  12,
                  955,
                  100,
                  v17);
                return -1;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v17, 0x1000u, 0, "get chain_domain_num failed");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_chain",
                12,
                946,
                100,
                v17);
              return -1;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v17, 0x1000u, 0, "get chain_column failed");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_chain",
              12,
              937,
              100,
              v17);
            return -1;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v17, 0x1000u, 0, "get chain_row failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_chain",
            12,
            928,
            100,
            v17);
          return -1;
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, "get chain_num failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_chain",
        12,
        917,
        100,
        v17);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "get chain failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_chain",
      12,
      909,
      100,
      v17);
    return -1;
  }
}
