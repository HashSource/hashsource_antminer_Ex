int __fastcall sub_5C864(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  int v4; // r9
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r9
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r9
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r10
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r10
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r10
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r10
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r10
  int v26; // r0
  _DWORD *v27; // r0
  int v28; // r10
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r10
  int v32; // r0
  __int64 v33; // r0
  float v34; // s14
  _DWORD *v35; // r0
  int v36; // r10
  int v37; // r0
  __int64 v38; // r0
  float v39; // s14
  _DWORD *v40; // r0
  int v41; // r10
  int v42; // r0
  __int64 v43; // r0
  float v44; // s14
  _DWORD *v45; // r0
  int v46; // r10
  int v47; // r0
  __int64 v48; // r0
  float v49; // s14
  _DWORD *v50; // r0
  int v51; // r0
  _DWORD *v52; // r0
  int v53; // r11
  unsigned int v54; // r10
  _DWORD *v55; // r0
  _DWORD *v56; // r8
  _DWORD *v57; // r0
  int v58; // r9
  int v59; // r0
  _DWORD *v60; // r0
  int v61; // r9
  int v62; // r0
  _DWORD *v63; // r0
  int v64; // r8
  int v65; // r0
  int v66; // r0
  int v67; // r2
  int v68; // r3
  int v70; // r0
  int v71; // r2
  int v72; // r0
  int v73; // r0
  int v74; // r2
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  _DWORD *v93; // [sp+14h] [bp-1010h]
  _BYTE v94[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "fan");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK(v1);
    v85 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v85);
    v71 = 287;
    goto LABEL_45;
  }
  v3 = (_DWORD *)json_object_get(v1, "fan_control_mode");
  v4 = (int)v3;
  if ( !v3 || *v3 != 3 )
  {
    V_LOCK(v3);
    v70 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v70);
    v71 = 294;
LABEL_45:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_fan",
      10,
      v71,
      100,
      v94);
    return -1;
  }
  V_LOCK(v3);
  json_integer_value(v4);
  v5 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_fan",
    10,
    297,
    20,
    v94);
  dword_18EC84 = json_integer_value(v4);
  v6 = (_DWORD *)json_object_get(v2, "pwm_percent_min");
  v7 = (int)v6;
  if ( v6 && *v6 == 3 )
  {
    V_LOCK(v6);
    json_integer_value(v7);
    v8 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_fan",
      10,
      306,
      20,
      v94);
    dword_18EC88 = json_integer_value(v7);
    v9 = (_DWORD *)json_object_get(v2, "pwm_percent_max");
    v10 = (int)v9;
    if ( v9 && *v9 == 3 )
    {
      V_LOCK(v9);
      json_integer_value(v10);
      v11 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_fan",
        10,
        315,
        20,
        v94);
      dword_18EC8C = json_integer_value(v10);
      v12 = (_DWORD *)json_object_get(v2, "full_speed_temp_type");
      v13 = (int)v12;
      if ( v12 && *v12 == 3 )
      {
        V_LOCK(v12);
        json_integer_value(v13);
        v14 = logfmt_raw((int)v94, 0x1000u);
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_fan",
          10,
          324,
          20,
          v94);
        dword_18EC90 = json_integer_value(v13);
        v15 = (_DWORD *)json_object_get(v2, "full_speed_temp");
        v16 = (int)v15;
        if ( v15 && *v15 == 3 )
        {
          V_LOCK(v15);
          json_integer_value(v16);
          v17 = logfmt_raw((int)v94, 0x1000u);
          V_UNLOCK(v17);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/topol/topol.c",
            152,
            "_parse_fan",
            10,
            333,
            20,
            v94);
          dword_18EC94 = json_integer_value(v16);
          v18 = (_DWORD *)json_object_get(v2, "target_temp_type");
          v19 = (int)v18;
          if ( v18 && *v18 == 3 )
          {
            V_LOCK(v18);
            json_integer_value(v19);
            v20 = logfmt_raw((int)v94, 0x1000u);
            V_UNLOCK(v20);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/topol/topol.c",
              152,
              "_parse_fan",
              10,
              342,
              20,
              v94);
            dword_18EC98 = json_integer_value(v19);
            v21 = (_DWORD *)json_object_get(v2, "target_temp");
            v22 = (int)v21;
            if ( v21 && *v21 == 3 )
            {
              V_LOCK(v21);
              json_integer_value(v22);
              v23 = logfmt_raw((int)v94, 0x1000u);
              V_UNLOCK(v23);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/topol/topol.c",
                152,
                "_parse_fan",
                10,
                351,
                20,
                v94);
              dword_18EC9C = json_integer_value(v22);
              v24 = (_DWORD *)json_object_get(v2, "initial_interval");
              v25 = (int)v24;
              if ( v24 && *v24 == 3 )
              {
                V_LOCK(v24);
                json_integer_value(v25);
                v26 = logfmt_raw((int)v94, 0x1000u);
                V_UNLOCK(v26);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/backend/topol/topol.c",
                  152,
                  "_parse_fan",
                  10,
                  360,
                  20,
                  v94);
                dword_18ECA0 = json_integer_value(v25);
                v27 = (_DWORD *)json_object_get(v2, "interval");
                v28 = (int)v27;
                if ( v27 && *v27 == 3 )
                {
                  V_LOCK(v27);
                  json_integer_value(v28);
                  v29 = logfmt_raw((int)v94, 0x1000u);
                  V_UNLOCK(v29);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/backend/topol/topol.c",
                    152,
                    "_parse_fan",
                    10,
                    369,
                    20,
                    v94);
                  dword_18ECA4 = json_integer_value(v28);
                  v30 = (_DWORD *)json_object_get(v2, "startup_Kp");
                  v31 = (int)v30;
                  if ( v30 && *v30 == 3 )
                  {
                    V_LOCK(v30);
                    json_integer_value(v31);
                    v32 = logfmt_raw((int)v94, 0x1000u);
                    V_UNLOCK(v32);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/backend/topol/topol.c",
                      152,
                      "_parse_fan",
                      10,
                      378,
                      20,
                      v94);
                    v33 = json_integer_value(v31);
                    v34 = sub_12E61C(v33, HIDWORD(v33)) / 100.0;
                    flt_18ECA8 = v34;
                    v35 = (_DWORD *)json_object_get(v2, "Kp");
                    v36 = (int)v35;
                    if ( v35 && *v35 == 3 )
                    {
                      V_LOCK(v35);
                      json_integer_value(v36);
                      v37 = logfmt_raw((int)v94, 0x1000u);
                      V_UNLOCK(v37);
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/"
                        "build/godminer-origin_godminer-new/backend/topol/topol.c",
                        152,
                        "_parse_fan",
                        10,
                        387,
                        20,
                        v94);
                      v38 = json_integer_value(v36);
                      v39 = sub_12E61C(v38, HIDWORD(v38)) / 100.0;
                      flt_18ECAC = v39;
                      v40 = (_DWORD *)json_object_get(v2, "Ki");
                      v41 = (int)v40;
                      if ( v40 && *v40 == 3 )
                      {
                        V_LOCK(v40);
                        json_integer_value(v41);
                        v42 = logfmt_raw((int)v94, 0x1000u);
                        V_UNLOCK(v42);
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/releas"
                          "e/build/godminer-origin_godminer-new/backend/topol/topol.c",
                          152,
                          "_parse_fan",
                          10,
                          396,
                          20,
                          v94);
                        v43 = json_integer_value(v41);
                        v44 = sub_12E61C(v43, HIDWORD(v43)) / 100.0;
                        flt_18ECB0 = v44;
                        v45 = (_DWORD *)json_object_get(v2, "Kd");
                        v46 = (int)v45;
                        if ( v45 && *v45 == 3 )
                        {
                          V_LOCK(v45);
                          json_integer_value(v46);
                          v47 = logfmt_raw((int)v94, 0x1000u);
                          V_UNLOCK(v47);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/rele"
                            "ase/build/godminer-origin_godminer-new/backend/topol/topol.c",
                            152,
                            "_parse_fan",
                            10,
                            405,
                            20,
                            v94);
                          v48 = json_integer_value(v46);
                          v49 = sub_12E61C(v48, HIDWORD(v48)) / 100.0;
                          flt_18ECB4 = v49;
                          v50 = (_DWORD *)json_object_get(v2, "speed_info");
                          v93 = v50;
                          if ( v50 && *v50 == 1 )
                          {
                            V_LOCK(v50);
                            v51 = logfmt_raw((int)v94, 0x1000u);
                            V_UNLOCK(v51);
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/backend/topol/topol.c",
                              152,
                              "_parse_fan",
                              10,
                              414,
                              20,
                              v94);
                            v52 = json_array_size(v93);
                            dword_18ECB8 = (int)calloc((size_t)v52, 0xCu);
                            if ( !dword_18ECB8 )
                            {
                              V_LOCK(0);
                              v92 = logfmt_raw((int)v94, 0x1000u);
                              V_UNLOCK(v92);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                152,
                                "_parse_fan",
                                10,
                                419,
                                100,
                                v94);
                              return -1;
                            }
                            v53 = 0;
                            v54 = 0;
                            while ( 1 )
                            {
                              if ( (unsigned int)json_array_size(v93) <= v54 )
                                return 0;
                              v55 = json_array_get(v93, v54);
                              v56 = v55;
                              if ( !v55 || *v55 )
                              {
                                V_LOCK(v55);
                                v72 = logfmt_raw((int)v94, 0x1000u);
                                V_UNLOCK(v72);
                                v73 = g_zc;
                                v74 = 428;
                                goto LABEL_49;
                              }
                              v57 = (_DWORD *)json_object_get(v55, "id");
                              v58 = (int)v57;
                              if ( !v57 || *v57 != 3 )
                              {
                                V_LOCK(v57);
                                v76 = logfmt_raw((int)v94, 0x1000u);
                                V_UNLOCK(v76);
                                v73 = g_zc;
                                v74 = 435;
                                goto LABEL_49;
                              }
                              V_LOCK(v57);
                              json_integer_value(v58);
                              v59 = logfmt_raw((int)v94, 0x1000u);
                              V_UNLOCK(v59);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                152,
                                "_parse_fan",
                                10,
                                438,
                                20,
                                v94);
                              *(_DWORD *)(dword_18ECB8 + v53) = json_integer_value(v58);
                              v60 = (_DWORD *)json_object_get(v56, "max_speed");
                              v61 = (int)v60;
                              if ( !v60 || *v60 != 3 )
                              {
                                V_LOCK(v60);
                                v77 = logfmt_raw((int)v94, 0x1000u);
                                V_UNLOCK(v77);
                                v73 = g_zc;
                                v74 = 444;
                                goto LABEL_49;
                              }
                              V_LOCK(v60);
                              json_integer_value(v61);
                              v62 = logfmt_raw((int)v94, 0x1000u);
                              V_UNLOCK(v62);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                152,
                                "_parse_fan",
                                10,
                                447,
                                20,
                                v94);
                              *(_DWORD *)(dword_18ECB8 + v53 + 8) = json_integer_value(v61);
                              v63 = (_DWORD *)json_object_get(v56, "min_speed");
                              v64 = (int)v63;
                              if ( !v63 || *v63 != 3 )
                                break;
                              V_LOCK(v63);
                              ++v54;
                              json_integer_value(v64);
                              v65 = logfmt_raw((int)v94, 0x1000u);
                              V_UNLOCK(v65);
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/backend/topol/topol.c",
                                152,
                                "_parse_fan",
                                10,
                                456,
                                20,
                                v94);
                              v66 = json_integer_value(v64);
                              v67 = dword_18ECB8 + v53;
                              v53 += 12;
                              v68 = dword_18EC7C + 1;
                              *(_DWORD *)(v67 + 4) = v66;
                              dword_18EC7C = v68;
                            }
                            V_LOCK(v63);
                            v79 = logfmt_raw((int)v94, 0x1000u);
                            V_UNLOCK(v79);
                            v73 = g_zc;
                            v74 = 453;
                          }
                          else
                          {
                            V_LOCK(v50);
                            v91 = logfmt_raw((int)v94, 0x1000u);
                            V_UNLOCK(v91);
                            v73 = g_zc;
                            v74 = 411;
                          }
                        }
                        else
                        {
                          V_LOCK(v45);
                          v90 = logfmt_raw((int)v94, 0x1000u);
                          V_UNLOCK(v90);
                          v73 = g_zc;
                          v74 = 402;
                        }
                      }
                      else
                      {
                        V_LOCK(v40);
                        v89 = logfmt_raw((int)v94, 0x1000u);
                        V_UNLOCK(v89);
                        v73 = g_zc;
                        v74 = 393;
                      }
                    }
                    else
                    {
                      V_LOCK(v35);
                      v88 = logfmt_raw((int)v94, 0x1000u);
                      V_UNLOCK(v88);
                      v73 = g_zc;
                      v74 = 384;
                    }
                  }
                  else
                  {
                    V_LOCK(v30);
                    v87 = logfmt_raw((int)v94, 0x1000u);
                    V_UNLOCK(v87);
                    v73 = g_zc;
                    v74 = 375;
                  }
                }
                else
                {
                  V_LOCK(v27);
                  v86 = logfmt_raw((int)v94, 0x1000u);
                  V_UNLOCK(v86);
                  v73 = g_zc;
                  v74 = 366;
                }
              }
              else
              {
                V_LOCK(v24);
                v83 = logfmt_raw((int)v94, 0x1000u);
                V_UNLOCK(v83);
                v73 = g_zc;
                v74 = 357;
              }
            }
            else
            {
              V_LOCK(v21);
              v84 = logfmt_raw((int)v94, 0x1000u);
              V_UNLOCK(v84);
              v73 = g_zc;
              v74 = 348;
            }
          }
          else
          {
            V_LOCK(v18);
            v82 = logfmt_raw((int)v94, 0x1000u);
            V_UNLOCK(v82);
            v73 = g_zc;
            v74 = 339;
          }
        }
        else
        {
          V_LOCK(v15);
          v81 = logfmt_raw((int)v94, 0x1000u);
          V_UNLOCK(v81);
          v73 = g_zc;
          v74 = 330;
        }
      }
      else
      {
        V_LOCK(v12);
        v80 = logfmt_raw((int)v94, 0x1000u);
        V_UNLOCK(v80);
        v73 = g_zc;
        v74 = 321;
      }
    }
    else
    {
      V_LOCK(v9);
      v78 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v78);
      v73 = g_zc;
      v74 = 312;
    }
  }
  else
  {
    V_LOCK(v6);
    v75 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v75);
    v73 = g_zc;
    v74 = 303;
  }
LABEL_49:
  zlog(
    v73,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_fan",
    10,
    v74,
    100,
    v94);
  return -1;
}
