int __fastcall sub_C343C(const json_t *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  __int64 v12; // r0
  double v13; // r0
  float v14; // s15
  int v15; // r0
  __int64 v16; // r0
  double v17; // r0
  float v18; // s15
  int v19; // r0
  __int64 v20; // r0
  double v21; // r0
  float v22; // s15
  int v23; // r0
  __int64 v24; // r0
  double v25; // r0
  float v26; // s15
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  size_t v33; // r0
  _DWORD v35[1026]; // [sp+1Ch] [bp-1028h] BYREF
  const json_t *v36; // [sp+1024h] [bp-20h]
  size_t nmemb; // [sp+1028h] [bp-1Ch]
  size_t i; // [sp+102Ch] [bp-18h]
  const json_t *v39; // [sp+1030h] [bp-14h]
  json_t *v40; // [sp+1034h] [bp-10h]

  v35[1024] = 0;
  v35[1025] = 0;
  v39 = json_object_get(a1, "fan");
  if ( v39 && !*(_DWORD *)v39 )
  {
    v40 = json_object_get(v39, "fan_control_mode");
    if ( v40 && *(_DWORD *)v40 == 3 )
    {
      V_LOCK();
      v2 = json_integer_value((int)v40);
      logfmt_raw(v35, 0x1000u, 0, "fan_control_mode: %d", v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_fan",
        10,
        298,
        20,
        v35);
      dword_C2738C = json_integer_value((int)v40);
      v40 = json_object_get(v39, "pwm_percent_min");
      if ( v40 && *(_DWORD *)v40 == 3 )
      {
        V_LOCK();
        v3 = json_integer_value((int)v40);
        logfmt_raw(v35, 0x1000u, 0, "pwm_percent_min: %d", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_fan",
          10,
          307,
          20,
          v35);
        dword_C27390 = json_integer_value((int)v40);
        v40 = json_object_get(v39, "pwm_percent_max");
        if ( v40 && *(_DWORD *)v40 == 3 )
        {
          V_LOCK();
          v4 = json_integer_value((int)v40);
          logfmt_raw(v35, 0x1000u, 0, "pwm_percent_max: %d", v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_fan",
            10,
            316,
            20,
            v35);
          dword_C27394 = json_integer_value((int)v40);
          v40 = json_object_get(v39, "full_speed_temp_type");
          if ( v40 && *(_DWORD *)v40 == 3 )
          {
            V_LOCK();
            v5 = json_integer_value((int)v40);
            logfmt_raw(v35, 0x1000u, 0, "full_speed_temp_type: %d", v5);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_fan",
              10,
              325,
              20,
              v35);
            dword_C27398 = json_integer_value((int)v40);
            v40 = json_object_get(v39, "full_speed_temp");
            if ( v40 && *(_DWORD *)v40 == 3 )
            {
              V_LOCK();
              v6 = json_integer_value((int)v40);
              logfmt_raw(v35, 0x1000u, 0, "full_speed_temp: %d", v6);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_fan",
                10,
                334,
                20,
                v35);
              dword_C2739C = json_integer_value((int)v40);
              v40 = json_object_get(v39, "target_temp_type");
              if ( v40 && *(_DWORD *)v40 == 3 )
              {
                V_LOCK();
                v7 = json_integer_value((int)v40);
                logfmt_raw(v35, 0x1000u, 0, "target_temp_type: %d", v7);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_fan",
                  10,
                  343,
                  20,
                  v35);
                dword_C273A0 = json_integer_value((int)v40);
                v40 = json_object_get(v39, "target_temp");
                if ( v40 && *(_DWORD *)v40 == 3 )
                {
                  V_LOCK();
                  v8 = json_integer_value((int)v40);
                  logfmt_raw(v35, 0x1000u, 0, "target_temp: %d", v8);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_fan",
                    10,
                    352,
                    20,
                    v35);
                  dword_C273A4 = json_integer_value((int)v40);
                  v40 = json_object_get(v39, "initial_interval");
                  if ( v40 && *(_DWORD *)v40 == 3 )
                  {
                    V_LOCK();
                    v9 = json_integer_value((int)v40);
                    logfmt_raw(v35, 0x1000u, 0, "initial_interval: %d", v9);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_fan",
                      10,
                      361,
                      20,
                      v35);
                    dword_C273A8 = json_integer_value((int)v40);
                    v40 = json_object_get(v39, "interval");
                    if ( v40 && *(_DWORD *)v40 == 3 )
                    {
                      V_LOCK();
                      v10 = json_integer_value((int)v40);
                      logfmt_raw(v35, 0x1000u, 0, "interval: %d", v10);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_fan",
                        10,
                        370,
                        20,
                        v35);
                      dword_C273AC = json_integer_value((int)v40);
                      v40 = json_object_get(v39, "startup_Kp");
                      if ( v40 && *(_DWORD *)v40 == 3 )
                      {
                        V_LOCK();
                        v11 = json_integer_value((int)v40);
                        logfmt_raw(v35, 0x1000u, 0, "startup_Kp: %d", v11);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
                          149,
                          "_parse_fan",
                          10,
                          379,
                          20,
                          v35);
                        v12 = json_integer_value((int)v40);
                        LODWORD(v13) = sub_345484(v12);
                        v14 = v13 / 100.0;
                        flt_C273B0 = v14;
                        v40 = json_object_get(v39, "Kp");
                        if ( v40 && *(_DWORD *)v40 == 3 )
                        {
                          V_LOCK();
                          v15 = json_integer_value((int)v40);
                          logfmt_raw(v35, 0x1000u, 0, "Kp: %d", v15);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
                            149,
                            "_parse_fan",
                            10,
                            388,
                            20,
                            v35);
                          v16 = json_integer_value((int)v40);
                          LODWORD(v17) = sub_345484(v16);
                          v18 = v17 / 100.0;
                          flt_C273B4 = v18;
                          v40 = json_object_get(v39, "Ki");
                          if ( v40 && *(_DWORD *)v40 == 3 )
                          {
                            V_LOCK();
                            v19 = json_integer_value((int)v40);
                            logfmt_raw(v35, 0x1000u, 0, "Ki: %d", v19);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              149,
                              "_parse_fan",
                              10,
                              397,
                              20,
                              v35);
                            v20 = json_integer_value((int)v40);
                            LODWORD(v21) = sub_345484(v20);
                            v22 = v21 / 100.0;
                            flt_C273B8 = v22;
                            v40 = json_object_get(v39, "Kd");
                            if ( v40 && *(_DWORD *)v40 == 3 )
                            {
                              V_LOCK();
                              v23 = json_integer_value((int)v40);
                              logfmt_raw(v35, 0x1000u, 0, "Kd: %d", v23);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                406,
                                20,
                                v35);
                              v24 = json_integer_value((int)v40);
                              LODWORD(v25) = sub_345484(v24);
                              v26 = v25 / 100.0;
                              flt_C273BC = v26;
                              v36 = json_object_get(v39, "speed_info");
                              if ( v36 && *(_DWORD *)v36 == 1 )
                              {
                                V_LOCK();
                                logfmt_raw(v35, 0x1000u, 0, "fan speed_info info:");
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                  149,
                                  "_parse_fan",
                                  10,
                                  415,
                                  20,
                                  v35);
                                nmemb = json_array_size(v36);
                                dword_C273C0 = (int)calloc(nmemb, 0xCu);
                                if ( dword_C273C0 )
                                {
                                  for ( i = 0; ; ++i )
                                  {
                                    v33 = json_array_size(v36);
                                    if ( v33 <= i )
                                      break;
                                    v39 = json_array_get(v36, i);
                                    if ( !v39 || *(_DWORD *)v39 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                        149,
                                        "_parse_fan",
                                        10,
                                        429,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    v40 = json_object_get(v39, "id");
                                    if ( !v40 || *(_DWORD *)v40 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d id failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                        149,
                                        "_parse_fan",
                                        10,
                                        436,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v27 = json_integer_value((int)v40);
                                    logfmt_raw(v35, 0x1000u, 0, "id: %d", v27);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_fan",
                                      10,
                                      439,
                                      20,
                                      v35);
                                    v28 = json_integer_value((int)v40);
                                    *(_DWORD *)(dword_C273C0 + 12 * i) = v28;
                                    v40 = json_object_get(v39, "max_speed");
                                    if ( !v40 || *(_DWORD *)v40 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d max_speed failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                        149,
                                        "_parse_fan",
                                        10,
                                        445,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v29 = json_integer_value((int)v40);
                                    logfmt_raw(v35, 0x1000u, 0, "max_speed: %d", v29);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_fan",
                                      10,
                                      448,
                                      20,
                                      v35);
                                    v30 = json_integer_value((int)v40);
                                    *(_DWORD *)(dword_C273C0 + 12 * i + 8) = v30;
                                    v40 = json_object_get(v39, "min_speed");
                                    if ( !v40 || *(_DWORD *)v40 != 3 )
                                    {
                                      V_LOCK();
                                      logfmt_raw(v35, 0x1000u, 0, "get array %d min_speed failed", i);
                                      V_UNLOCK();
                                      zlog(
                                        g_zc,
                                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot"
                                        "/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                        149,
                                        "_parse_fan",
                                        10,
                                        454,
                                        100,
                                        v35);
                                      return -1;
                                    }
                                    V_LOCK();
                                    v31 = json_integer_value((int)v40);
                                    logfmt_raw(v35, 0x1000u, 0, "min_speed: %d", v31);
                                    V_UNLOCK();
                                    zlog(
                                      g_zc,
                                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                      149,
                                      "_parse_fan",
                                      10,
                                      457,
                                      20,
                                      v35);
                                    v32 = json_integer_value((int)v40);
                                    *(_DWORD *)(dword_C273C0 + 12 * i + 4) = v32;
                                    ++dword_C27384;
                                  }
                                  return 0;
                                }
                                else
                                {
                                  V_LOCK();
                                  logfmt_raw(v35, 0x1000u, 0, "calloc topol_machine.fan_info.speeds failed!");
                                  V_UNLOCK();
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                    149,
                                    "_parse_fan",
                                    10,
                                    420,
                                    100,
                                    v35);
                                  return -1;
                                }
                              }
                              else
                              {
                                V_LOCK();
                                logfmt_raw(v35, 0x1000u, 0, "get fan speed_info failed");
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                  149,
                                  "_parse_fan",
                                  10,
                                  412,
                                  100,
                                  v35);
                                return -1;
                              }
                            }
                            else
                            {
                              V_LOCK();
                              logfmt_raw(v35, 0x1000u, 0, "get Kd failed!");
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                149,
                                "_parse_fan",
                                10,
                                403,
                                100,
                                v35);
                              return -1;
                            }
                          }
                          else
                          {
                            V_LOCK();
                            logfmt_raw(v35, 0x1000u, 0, "get Ki failed!");
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              149,
                              "_parse_fan",
                              10,
                              394,
                              100,
                              v35);
                            return -1;
                          }
                        }
                        else
                        {
                          V_LOCK();
                          logfmt_raw(v35, 0x1000u, 0, "get Kp failed!");
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/topol/topol.c",
                            149,
                            "_parse_fan",
                            10,
                            385,
                            100,
                            v35);
                          return -1;
                        }
                      }
                      else
                      {
                        V_LOCK();
                        logfmt_raw(v35, 0x1000u, 0, "get startup_Kp failed!");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/topol/topol.c",
                          149,
                          "_parse_fan",
                          10,
                          376,
                          100,
                          v35);
                        return -1;
                      }
                    }
                    else
                    {
                      V_LOCK();
                      logfmt_raw(v35, 0x1000u, 0, "get interval failed!");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/topol/topol.c",
                        149,
                        "_parse_fan",
                        10,
                        367,
                        100,
                        v35);
                      return -1;
                    }
                  }
                  else
                  {
                    V_LOCK();
                    logfmt_raw(v35, 0x1000u, 0, "get initial_interval failed!");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/topol/topol.c",
                      149,
                      "_parse_fan",
                      10,
                      358,
                      100,
                      v35);
                    return -1;
                  }
                }
                else
                {
                  V_LOCK();
                  logfmt_raw(v35, 0x1000u, 0, "get target_temp failed!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/topol/topol.c",
                    149,
                    "_parse_fan",
                    10,
                    349,
                    100,
                    v35);
                  return -1;
                }
              }
              else
              {
                V_LOCK();
                logfmt_raw(v35, 0x1000u, 0, "get target_temp_type failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/topol/topol.c",
                  149,
                  "_parse_fan",
                  10,
                  340,
                  100,
                  v35);
                return -1;
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v35, 0x1000u, 0, "get full_speed_temp failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/topol/topol.c",
                149,
                "_parse_fan",
                10,
                331,
                100,
                v35);
              return -1;
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v35, 0x1000u, 0, "get full_speed_temp_type failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/topol/topol.c",
              149,
              "_parse_fan",
              10,
              322,
              100,
              v35);
            return -1;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v35, 0x1000u, 0, "get pwm_percent_max failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/topol/topol.c",
            149,
            "_parse_fan",
            10,
            313,
            100,
            v35);
          return -1;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "get pwm_percent_min failed!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/topol/topol.c",
          149,
          "_parse_fan",
          10,
          304,
          100,
          v35);
        return -1;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "get fan_control_mode failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/topol/topol.c",
        149,
        "_parse_fan",
        10,
        295,
        100,
        v35);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "get fan failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/topol/topol.c",
      149,
      "_parse_fan",
      10,
      288,
      100,
      v35);
    return -1;
  }
}
