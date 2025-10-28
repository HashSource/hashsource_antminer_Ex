int __fastcall sub_5C178(_DWORD *a1)
{
  signed int *v1; // r0
  signed int v2; // r4
  int v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r10
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r11
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r10
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r9
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r9
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r9
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r12
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  signed int *v42; // [sp+10h] [bp-100Ch]
  _BYTE v43[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = (signed int *)json_object_get(a1, "power");
  v42 = v1;
  if ( !v1 || (v2 = *v1) != 0 )
  {
    V_LOCK(v1);
    v41 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_power",
      12,
      204,
      100,
      v43);
    return -1;
  }
  V_LOCK(v1);
  v3 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_power",
    12,
    207,
    20,
    v43);
  v4 = (_DWORD *)json_object_get(v42, "type");
  v5 = v4;
  if ( v4 && *v4 == 2 )
  {
    V_LOCK(v4);
    json_string_value(v5);
    v6 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_power",
      12,
      215,
      20,
      v43);
    v7 = (_DWORD *)json_object_get(v42, "version");
    v8 = v7;
    if ( v7 && *v7 == 1 )
    {
      v9 = json_array_size(v7);
      dword_18ECBC = (int)v9;
      dword_18ECD4 = (int)calloc((size_t)v9, 2u);
      if ( (int)v9 > 0 )
      {
        do
        {
          v10 = json_array_get(v8, v2);
          v11 = json_integer_value((int)v10);
          v12 = 2 * v2++;
          *(_WORD *)(dword_18ECD4 + v12) = v11;
          V_LOCK(v11);
          v13 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v13);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/topol/topol.c",
            152,
            "_parse_power",
            12,
            227,
            20,
            v43);
        }
        while ( dword_18ECBC > v2 );
      }
      v14 = (_DWORD *)json_object_get(v42, "is_adjustable_power");
      v15 = v14;
      if ( v14 && (unsigned int)(*v14 - 5) <= 1 )
      {
        V_LOCK(v14);
        v16 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_power",
          12,
          236,
          20,
          v43);
        byte_18ECC0 = *v15 == 5;
        v17 = (_DWORD *)json_object_get(v42, "check_asic_voltage_enable");
        v18 = v17;
        if ( v17 && (unsigned int)(*v17 - 5) <= 1 )
        {
          V_LOCK(v17);
          v19 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v19);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/topol/topol.c",
            152,
            "_parse_power",
            12,
            245,
            20,
            v43);
          byte_18ECC1 = *v18 == 5;
          v20 = (_DWORD *)json_object_get(v42, "check_asic_voltage");
          v21 = (int)v20;
          if ( v20 && *v20 == 3 )
          {
            V_LOCK(v20);
            json_integer_value(v21);
            v22 = logfmt_raw((int)v43, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/backend/topol/topol.c",
              152,
              "_parse_power",
              12,
              254,
              20,
              v43);
            dword_18ECC4 = json_integer_value(v21);
            v23 = (_DWORD *)json_object_get(v42, "i2c_addr");
            v24 = (int)v23;
            if ( v23 && *v23 == 3 )
            {
              V_LOCK(v23);
              json_integer_value(v24);
              v25 = logfmt_raw((int)v43, 0x1000u);
              V_UNLOCK(v25);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/topol/topol.c",
                152,
                "_parse_power",
                12,
                263,
                20,
                v43);
              dword_18ECC8 = json_integer_value(v24);
              v26 = (_DWORD *)json_object_get(v42, "gpio");
              v27 = (int)v26;
              if ( v26 && *v26 == 3 )
              {
                V_LOCK(v26);
                json_integer_value(v27);
                v28 = logfmt_raw((int)v43, 0x1000u);
                V_UNLOCK(v28);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/backend/topol/topol.c",
                  152,
                  "_parse_power",
                  12,
                  272,
                  20,
                  v43);
                v29 = json_integer_value(v27);
                v30 = 0;
                dword_18ECCC = v29;
                return v30;
              }
              V_LOCK(v26);
              v40 = logfmt_raw((int)v43, 0x1000u);
              V_UNLOCK(v40);
              v33 = g_zc;
              v34 = 269;
            }
            else
            {
              V_LOCK(v23);
              v39 = logfmt_raw((int)v43, 0x1000u);
              V_UNLOCK(v39);
              v33 = g_zc;
              v34 = 260;
            }
          }
          else
          {
            V_LOCK(v20);
            v38 = logfmt_raw((int)v43, 0x1000u);
            V_UNLOCK(v38);
            v33 = g_zc;
            v34 = 251;
          }
        }
        else
        {
          V_LOCK(v17);
          v37 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v37);
          v33 = g_zc;
          v34 = 242;
        }
      }
      else
      {
        V_LOCK(v14);
        v36 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v36);
        v33 = g_zc;
        v34 = 233;
      }
    }
    else
    {
      V_LOCK(v7);
      v35 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v35);
      v33 = g_zc;
      v34 = 220;
    }
  }
  else
  {
    V_LOCK(v4);
    v32 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v32);
    v33 = g_zc;
    v34 = 212;
  }
  zlog(
    v33,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_power",
    12,
    v34,
    100,
    v43);
  return -1;
}
