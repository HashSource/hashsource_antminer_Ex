int __fastcall sub_574DC(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r8
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r11
  int v9; // r0
  const char *v10; // r0
  int v11; // r11
  int v12; // r0
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r11
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
  int v31; // r8
  int v32; // r0
  int v33; // r0
  int v34; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  _BYTE v48[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (_DWORD *)json_object_get(a1, "asic");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    V_LOCK(v1);
    v46 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_asic",
      11,
      472,
      100,
      v48);
  }
  else
  {
    V_LOCK(v1);
    v3 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_asic",
      11,
      475,
      20,
      v48);
    v4 = (_DWORD *)json_object_get(v2, "asic_id");
    v5 = v4;
    if ( v4 && *v4 == 2 )
    {
      V_LOCK(v4);
      json_string_value(v5);
      v6 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_asic",
        11,
        483,
        20,
        v48);
      v7 = (_DWORD *)json_object_get(v2, "chip_type");
      v8 = v7;
      if ( v7 && *v7 == 2 )
      {
        V_LOCK(v7);
        json_string_value(v8);
        v9 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v9);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_asic",
          11,
          491,
          20,
          v48);
        v10 = (const char *)json_string_value(v8);
        v11 = dword_178808;
        v12 = strtol(v10, 0, 0);
        v13 = dword_178808;
        *(_DWORD *)(v11 + 24) = v12;
        if ( !*(_DWORD *)(v13 + 24) )
        {
          V_LOCK(v12);
          v47 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v47);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/backend/topol/topol.c",
            148,
            "_parse_asic",
            11,
            496,
            100,
            v48);
          return -1;
        }
        V_LOCK(v12);
        v14 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_asic",
          11,
          499,
          20,
          v48);
        v15 = (_DWORD *)json_object_get(v2, "cycle_cnt");
        v16 = (int)v15;
        if ( v15 && *v15 == 3 )
        {
          V_LOCK(v15);
          json_integer_value(v16);
          v17 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v17);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/backend/topol/topol.c",
            148,
            "_parse_asic",
            11,
            507,
            20,
            v48);
          *(_DWORD *)(dword_178808 + 28) = json_integer_value(v16);
          v18 = (_DWORD *)json_object_get(v2, "asic_big_core_num");
          v19 = (int)v18;
          if ( v18 && *v18 == 3 )
          {
            V_LOCK(v18);
            json_integer_value(v19);
            v20 = logfmt_raw((int)v48, 0x1000u);
            V_UNLOCK(v20);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/topol/topol.c",
              148,
              "_parse_asic",
              11,
              516,
              20,
              v48);
            *(_DWORD *)(dword_178808 + 36) = json_integer_value(v19);
            v21 = (_DWORD *)json_object_get(v2, "asic_little_core_num");
            v22 = (int)v21;
            if ( v21 && *v21 == 3 )
            {
              V_LOCK(v21);
              json_integer_value(v22);
              v23 = logfmt_raw((int)v48, 0x1000u);
              V_UNLOCK(v23);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/backend/topol/topol.c",
                148,
                "_parse_asic",
                11,
                525,
                20,
                v48);
              *(_DWORD *)(dword_178808 + 40) = json_integer_value(v22);
              v24 = (_DWORD *)json_object_get(v2, "core_little_core_num");
              v25 = (int)v24;
              if ( v24 && *v24 == 3 )
              {
                V_LOCK(v24);
                json_integer_value(v25);
                v26 = logfmt_raw((int)v48, 0x1000u);
                V_UNLOCK(v26);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/backend/topol/topol.c",
                  148,
                  "_parse_asic",
                  11,
                  534,
                  20,
                  v48);
                *(_DWORD *)(dword_178808 + 44) = json_integer_value(v25);
                v27 = (_DWORD *)json_object_get(v2, "asic_domain_num");
                v28 = (int)v27;
                if ( v27 && *v27 == 3 )
                {
                  V_LOCK(v27);
                  json_integer_value(v28);
                  v29 = logfmt_raw((int)v48, 0x1000u);
                  V_UNLOCK(v29);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/go"
                    "dminer-origin_godminer-new/backend/topol/topol.c",
                    148,
                    "_parse_asic",
                    11,
                    543,
                    20,
                    v48);
                  *(_DWORD *)(dword_178808 + 48) = json_integer_value(v28);
                  v30 = (_DWORD *)json_object_get(v2, "asic_addr_interval");
                  v31 = (int)v30;
                  if ( v30 && *v30 == 3 )
                  {
                    V_LOCK(v30);
                    json_integer_value(v31);
                    v32 = logfmt_raw((int)v48, 0x1000u);
                    V_UNLOCK(v32);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/backend/topol/topol.c",
                      148,
                      "_parse_asic",
                      11,
                      552,
                      20,
                      v48);
                    v33 = json_integer_value(v31);
                    v34 = 0;
                    *(_DWORD *)(dword_178808 + 52) = v33;
                    return v34;
                  }
                  V_LOCK(v30);
                  v43 = logfmt_raw((int)v48, 0x1000u);
                  V_UNLOCK(v43);
                  v37 = g_zc;
                  v38 = 549;
                }
                else
                {
                  V_LOCK(v27);
                  v45 = logfmt_raw((int)v48, 0x1000u);
                  V_UNLOCK(v45);
                  v37 = g_zc;
                  v38 = 540;
                }
              }
              else
              {
                V_LOCK(v24);
                v44 = logfmt_raw((int)v48, 0x1000u);
                V_UNLOCK(v44);
                v37 = g_zc;
                v38 = 531;
              }
            }
            else
            {
              V_LOCK(v21);
              v42 = logfmt_raw((int)v48, 0x1000u);
              V_UNLOCK(v42);
              v37 = g_zc;
              v38 = 522;
            }
          }
          else
          {
            V_LOCK(v18);
            v41 = logfmt_raw((int)v48, 0x1000u);
            V_UNLOCK(v41);
            v37 = g_zc;
            v38 = 513;
          }
        }
        else
        {
          V_LOCK(v15);
          v40 = logfmt_raw((int)v48, 0x1000u);
          V_UNLOCK(v40);
          v37 = g_zc;
          v38 = 504;
        }
      }
      else
      {
        V_LOCK(v7);
        v39 = logfmt_raw((int)v48, 0x1000u);
        V_UNLOCK(v39);
        v37 = g_zc;
        v38 = 488;
      }
    }
    else
    {
      V_LOCK(v4);
      v36 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v36);
      v37 = g_zc;
      v38 = 480;
    }
    zlog(
      v37,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_asic",
      11,
      v38,
      100,
      v48);
  }
  return -1;
}
