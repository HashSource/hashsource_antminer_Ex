int __fastcall power_init(int a1)
{
  double v1; // d0
  int v2; // r4
  int v3; // r0
  int v4; // r8
  int v5; // r0
  int v6; // r0
  char *v7; // r3
  int v8; // t1
  int power_voltage_calibration_data; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r7
  double v21; // d11
  double v22; // d9
  int all_created_runtime; // r0
  int v24; // r10
  int i; // r6
  int v26; // t1
  int an_voltage1; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r0
  int v41; // [sp+1Ch] [bp-1010h]
  int v42; // [sp+24h] [bp-1008h] BYREF
  _BYTE v43[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = (unsigned __int8)byte_167350;
  if ( byte_167350 )
  {
    v3 = bitmain_power_version();
    v4 = (unsigned __int16)v3;
    V_LOCK(v3);
    v5 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/miner_util/power_api.c",
           143,
           "power_init",
           10,
           219,
           60,
           v43);
    v7 = (char *)&unk_167364;
    do
    {
      v8 = *(unsigned __int16 *)v7;
      v7 += 2;
      if ( v8 == v4 )
      {
        word_167352 = v4;
        goto LABEL_6;
      }
    }
    while ( &byte_16736C != v7 );
    if ( (unsigned __int16)word_167352 != v4 )
    {
      V_LOCK(v6);
      v39 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v39);
      v37 = g_zc;
      v38 = 232;
      goto LABEL_37;
    }
LABEL_6:
    power_voltage_calibration_data = (unsigned __int16)bitmain_power_fw_version();
    if ( (unsigned __int16)power_voltage_calibration_data > 0x14u )
      power_voltage_calibration_data = get_power_voltage_calibration_data();
    byte_16736D = 0;
    dword_167370 = 0;
    dword_167374 = 0;
    byte_16734C = 1;
    if ( opt_custom_voltage_swith
      || (power_voltage_calibration_data = is_eeprom_loaded(power_voltage_calibration_data)) != 0 )
    {
      dword_167358 = opt_custom_voltage;
    }
    V_LOCK(power_voltage_calibration_data);
    v10 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v10);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "power_init",
            10,
            250,
            60,
            v43);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v12);
    v13 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "power_init",
            10,
            251,
            60,
            v43);
    V_LOCK(v13);
    v14 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "power_init",
            10,
            252,
            60,
            v43);
    V_LOCK(v15);
    v16 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v16);
    v17 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "power_init",
            10,
            253,
            60,
            v43);
    V_LOCK(v17);
    v18 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      254,
      60,
      v43);
    if ( byte_167350 && byte_16735C )
    {
      v19 = set_check_asic_voltage(0);
      v20 = (unsigned __int16)v19;
    }
    else
    {
      v19 = set_working_voltage(0);
      v20 = (unsigned __int16)v19;
    }
    if ( v20 )
    {
      V_LOCK(v19);
      v40 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v40);
      v37 = g_zc;
      v38 = 262;
    }
    else
    {
      bitmain_power_on();
      byte_16736C = 1;
      sleep(1u);
      if ( opt_algo == 5 )
        return 0;
      if ( byte_16734C )
        v21 = (double)dword_167370 * 0.75 / 100.0;
      else
        v21 = -0.0075;
      v41 = 3;
      do
      {
        v22 = 0.0;
        sleep(1u);
        all_created_runtime = get_all_created_runtime(&v42);
        if ( v42 > 0 )
        {
          v24 = all_created_runtime - 4;
          for ( i = 0; i < v42; ++i )
          {
            v26 = *(_DWORD *)(v24 + 4);
            v24 += 4;
            an_voltage1 = pic1704_get_an_voltage1((unsigned __int8)*(_DWORD *)(v26 + 148));
            V_LOCK(an_voltage1);
            v28 = logfmt_raw((int)v43, 0x1000u);
            V_UNLOCK(v28);
            all_created_runtime = zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/miner_util/power_api.c",
                                    143,
                                    "read_feedback_voltage",
                                    21,
                                    49,
                                    20,
                                    v43);
            if ( v1 > 0.1 )
            {
              if ( v1 >= v22 )
              {
                if ( v22 < 0.1 )
                  v22 = v1;
              }
              else
              {
                v22 = v1;
              }
            }
          }
        }
        V_LOCK(all_created_runtime);
        v29 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v29);
        v30 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/miner_util/power_api.c",
                143,
                "get_minimal_feedback_voltage",
                28,
                65,
                20,
                v43);
        if ( v21 <= v22 )
        {
          V_LOCK(v30);
          v31 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v31);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/power_api.c",
            143,
            "check_feedback_voltage",
            22,
            84,
            60,
            v43);
          return 0;
        }
        V_LOCK(v30);
        v34 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v34);
        v35 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/miner_util/power_api.c",
                143,
                "check_feedback_voltage",
                22,
                80,
                80,
                v43);
        --v41;
      }
      while ( v41 );
      V_LOCK(v35);
      v36 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v36);
      v37 = g_zc;
      v38 = 270;
    }
LABEL_37:
    zlog(
      v37,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      v38,
      100,
      v43);
    return -1;
  }
  else
  {
    V_LOCK(a1);
    v33 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "power_init",
      10,
      214,
      60,
      v43);
    return v2;
  }
}
