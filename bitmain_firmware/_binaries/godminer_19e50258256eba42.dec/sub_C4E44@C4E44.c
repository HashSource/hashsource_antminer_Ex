int __fastcall sub_C4E44(const json_t *a1)
{
  const char *v2; // r0
  const char *v3; // r0
  const char *v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _BYTE v13[20]; // [sp+18h] [bp-1014h] BYREF
  const json_t *v14; // [sp+1018h] [bp-14h]
  const json_t *v15; // [sp+101Ch] [bp-10h]

  v14 = json_object_get(a1, "asic");
  if ( v14 && !*(_DWORD *)v14 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "asic:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      476,
      20,
      v13);
    v15 = json_object_get(v14, "asic_id");
    if ( v15 && *(_DWORD *)v15 == 2 )
    {
      V_LOCK();
      v2 = json_string_value(v15);
      logfmt_raw(v13, 0x1000u, 0, "asic_id: %s", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_asic",
        11,
        484,
        20,
        v13);
      v15 = json_object_get(v14, "chip_type");
      if ( v15 && *(_DWORD *)v15 == 2 )
      {
        V_LOCK();
        v3 = json_string_value(v15);
        logfmt_raw(v13, 0x1000u, 0, "chip_type : %s", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          492,
          20,
          v13);
        v4 = json_string_value(v15);
        v5 = dword_C27388;
        *(_DWORD *)(v5 + 24) = strtol(v4, 0, 0);
        if ( *(_DWORD *)(dword_C27388 + 24) )
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "chip_type 0x%x", *(_DWORD *)(dword_C27388 + 24));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            500,
            20,
            v13);
          v15 = json_object_get(v14, "cycle_cnt");
          if ( v15 && *(_DWORD *)v15 == 3 )
          {
            V_LOCK();
            v6 = json_integer_value((int)v15);
            logfmt_raw(v13, 0x1000u, 0, "cycle_cnt : %d", v6);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_asic",
              11,
              508,
              20,
              v13);
            *(_DWORD *)(dword_C27388 + 28) = json_integer_value((int)v15);
            v15 = json_object_get(v14, "asic_big_core_num");
            if ( v15 && *(_DWORD *)v15 == 3 )
            {
              V_LOCK();
              v7 = json_integer_value((int)v15);
              logfmt_raw(v13, 0x1000u, 0, "asic_big_core_num: %d", v7);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_asic",
                11,
                517,
                20,
                v13);
              *(_DWORD *)(dword_C27388 + 36) = json_integer_value((int)v15);
              v15 = json_object_get(v14, "asic_little_core_num");
              if ( v15 && *(_DWORD *)v15 == 3 )
              {
                V_LOCK();
                v8 = json_integer_value((int)v15);
                logfmt_raw(v13, 0x1000u, 0, "asic_little_core_num %d", v8);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_asic",
                  11,
                  526,
                  20,
                  v13);
                *(_DWORD *)(dword_C27388 + 40) = json_integer_value((int)v15);
                v15 = json_object_get(v14, "core_little_core_num");
                if ( v15 && *(_DWORD *)v15 == 3 )
                {
                  V_LOCK();
                  v9 = json_integer_value((int)v15);
                  logfmt_raw(v13, 0x1000u, 0, "core_little_core_num: %d", v9);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_asic",
                    11,
                    535,
                    20,
                    v13);
                  *(_DWORD *)(dword_C27388 + 44) = json_integer_value((int)v15);
                  v15 = json_object_get(v14, "asic_domain_num");
                  if ( v15 && *(_DWORD *)v15 == 3 )
                  {
                    V_LOCK();
                    v10 = json_integer_value((int)v15);
                    logfmt_raw(v13, 0x1000u, 0, "asic_domain_num : %d", v10);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_asic",
                      11,
                      544,
                      20,
                      v13);
                    *(_DWORD *)(dword_C27388 + 48) = json_integer_value((int)v15);
                    v15 = json_object_get(v14, "asic_addr_interval");
                    if ( v15 && *(_DWORD *)v15 == 3 )
                    {
                      V_LOCK();
                      v11 = json_integer_value((int)v15);
                      logfmt_raw(v13, 0x1000u, 0, "asic_addr_interval : %d", v11);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_asic",
                        11,
                        553,
                        20,
                        v13);
                      *(_DWORD *)(dword_C27388 + 52) = json_integer_value((int)v15);
                      return 0;
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw(v13, 0x1000u, 0, "get asic_addr_interval failed");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_asic",
                        11,
                        550,
                        100,
                        v13);
                      return -1;
                    }
                  }
                  else
                  {
                    V_LOCK();
                    logfmt_raw(v13, 0x1000u, 0, "get asic_domain_num failed");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_asic",
                      11,
                      541,
                      100,
                      v13);
                    return -1;
                  }
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v13, 0x1000u, 0, "get core_little_core_num failed");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_asic",
                    11,
                    532,
                    100,
                    v13);
                  return -1;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v13, 0x1000u, 0, "get asic_little_core_num failed");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_asic",
                  11,
                  523,
                  100,
                  v13);
                return -1;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v13, 0x1000u, 0, "get asic_big_core_num failed");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_asic",
                11,
                514,
                100,
                v13);
              return -1;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, "get cycle_cnt failed");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_asic",
              11,
              505,
              100,
              v13);
            return -1;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "convert chip_type failed");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_asic",
            11,
            497,
            100,
            v13);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, "get chip_type failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_asic",
          11,
          489,
          100,
          v13);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "get asic_id failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_asic",
        11,
        481,
        100,
        v13);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "get asic failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_asic",
      11,
      473,
      100,
      v13);
    return -1;
  }
}
