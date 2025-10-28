int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int all_created_runtime; // r0
  int v5; // r8
  int is_psu_supported; // r0
  unsigned int is_pic_mcu_en; // r0
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int power_status; // r0
  int v28; // r9
  bool v29; // zf
  unsigned int v30; // r8
  int v31; // r0
  int v32; // r0
  int v33; // r0
  unsigned int v34; // r0
  int v35; // r11
  double v36; // d9
  int v37; // r10
  unsigned int v38; // r0
  int v39; // r0
  int device_num; // r0
  double v41; // d14
  int v42; // r6
  int v43; // r0
  int v44; // r0
  int feedback_voltage; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int j; // r5
  int v56; // r0
  int v57; // r0
  int k; // r5
  int v59; // r0
  int v60; // r0
  int m; // r5
  int v62; // r0
  int v63; // r0
  int n; // r5
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r3
  int v72; // r2
  int v73; // r0
  int v74; // r0
  int v75; // r12
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  double v81; // d8
  int v82; // r7
  int chain_num; // r11
  int v84; // r6
  int v85; // r9
  int i; // r5
  int v87; // r0
  unsigned int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // [sp+1Ch] [bp-1010h]
  int v93; // [sp+24h] [bp-1008h] BYREF
  _BYTE v94[4100]; // [sp+28h] [bp-1004h] BYREF

  v93 = a2;
  all_created_runtime = get_all_created_runtime(&v93);
  if ( !platform_is_adjustable_power(all_created_runtime) )
  {
    V_LOCK(0);
    v76 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v76);
    v8 = -1;
    v77 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/power_api.c",
            153,
            "power_init",
            10,
            296,
            100,
            v94);
    V_LOCK(v77);
    v78 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v78);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "power_init",
      10,
      297,
      100,
      v94);
    return v8;
  }
  v5 = (unsigned __int16)bitmain_power_version();
  is_psu_supported = platform_is_psu_supported(v5);
  if ( !is_psu_supported )
  {
    V_LOCK(0);
    v90 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v90);
    v8 = -1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "power_init",
      10,
      303,
      100,
      v94);
    return v8;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en(is_psu_supported);
  v8 = is_pic_mcu_en;
  if ( !is_pic_mcu_en )
  {
    v9 = bitmain_set_watchdog(0);
    v5 = (unsigned __int16)v9;
    if ( (_WORD)v9 )
    {
      V_LOCK(v9);
      v11 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/power_api.c",
        153,
        "power_init",
        10,
        310,
        100,
        v94);
      return v8;
    }
    is_pic_mcu_en = sleep(1u);
  }
  bitmain_power_off(is_pic_mcu_en);
  byte_174360 = 0;
  v10 = sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK(v10);
  v13 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/power_api.c",
    153,
    "power_init",
    10,
    322,
    60,
    v94);
  v14 = sleep(0x3Cu);
  if ( platform_is_pic_mcu_en(v14) )
    goto LABEL_12;
  v81 = 0.0;
  v82 = 21;
  chain_num = platform_get_chain_num();
  v84 = 1;
  v85 = 100;
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v87 = i;
        read_feedback_voltage(v87);
        if ( v2 > v81 )
          v81 = v2;
      }
    }
    if ( v81 <= 10.0 )
      break;
    if ( v85 > 20 )
    {
      v85 = 20;
      v88 = sleep(1u);
      if ( !--v82 )
        goto LABEL_91;
LABEL_87:
      v84 = 1;
    }
    else
    {
      v88 = sleep(1u);
      if ( !--v82 )
        goto LABEL_91;
      if ( ++v84 > 19 )
        goto LABEL_12;
      v85 = 20;
    }
  }
  if ( v81 <= 4.0 )
    goto LABEL_12;
  if ( v85 != 2 )
  {
    v85 = 2;
    v88 = sleep(1u);
    if ( !--v82 )
      goto LABEL_91;
    goto LABEL_87;
  }
  v88 = sleep(1u);
  if ( v82 != 1 )
    goto LABEL_12;
LABEL_91:
  V_LOCK(v88);
  v89 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v89);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/power_api.c",
    153,
    "wait_for_psu_discharge",
    22,
    187,
    100,
    v94);
LABEL_12:
  v15 = bitmain_power_fw_version();
  V_LOCK(v15);
  v16 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          331,
          60,
          v94);
  byte_174361 = 0;
  dword_174364 = 0;
  dword_174368 = 0;
  byte_174348 = 1;
  if ( opt_custom_voltage_swith || (v17 = is_eeprom_loaded(v17)) != 0 )
    dword_174354 = opt_custom_voltage;
  byte_17434C = platform_is_adjustable_power(v17);
  byte_174358 = platform_is_check_asic_voltage_enable();
  dword_17435C = platfrom_get_check_asic_voltage();
  V_LOCK(dword_17435C);
  v18 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v18);
  v19 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          352,
          40,
          v94);
  V_LOCK(v19);
  v20 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v20);
  v21 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          353,
          40,
          v94);
  V_LOCK(v21);
  v22 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          354,
          40,
          v94);
  V_LOCK(v23);
  v24 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v24);
  v25 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          355,
          40,
          v94);
  V_LOCK(v25);
  v26 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/power_api.c",
    153,
    "power_init",
    10,
    356,
    40,
    v94);
  if ( byte_17434C && byte_174358 )
  {
    power_status = set_check_asic_voltage(0);
    v28 = power_status;
  }
  else
  {
    power_status = set_working_voltage(0);
    v28 = power_status;
  }
  if ( v28 )
  {
    V_LOCK(power_status);
    v8 = -1;
    v91 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v91);
    v75 = 364;
LABEL_65:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "power_init",
      10,
      v75,
      100,
      v94);
    return v8;
  }
  v29 = v5 == 113;
  if ( v5 != 113 )
    v29 = v5 == 116;
  v30 = 0;
  if ( !v29 )
  {
    while ( 1 )
    {
      power_status = bitmain_get_power_status(power_status);
      v8 = power_status;
      ++v30;
      if ( !power_status )
        break;
      if ( v30 == 5 * (v30 / 5) )
      {
        V_LOCK(power_status);
        v31 = logfmt_raw((int)v94, 0x1000u);
        V_UNLOCK(v31);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          378,
          100,
          v94);
      }
      power_status = sleep(3u);
      if ( v30 == 20 )
        goto LABEL_28;
    }
  }
  v8 = 0;
LABEL_28:
  V_LOCK(power_status);
  v32 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v32);
  v33 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "power_init",
          10,
          385,
          40,
          v94);
  bitmain_power_on(v33);
  byte_174360 = 1;
  v34 = sleep(1u);
  if ( byte_174348 )
    v35 = dword_174364;
  else
    v35 = sub_55688(v34);
  v36 = (double)v35;
  v37 = 3;
  while ( 2 )
  {
    v38 = sleep(1u);
    v39 = platform_is_pic_mcu_en(v38);
    if ( v39 )
    {
      device_num = query_device_num(v39);
      v41 = 0.0;
      v92 = device_num;
      if ( device_num > 0 )
      {
        v42 = 0;
        do
        {
          v43 = dev_ctrl(device_num);
          v44 = (*(int (__fastcall **)(int))(v43 + 48))(v42);
          feedback_voltage = read_feedback_voltage(v44);
          v46 = V_LOCK(feedback_voltage);
          v47 = dev_ctrl(v46);
          (*(void (__fastcall **)(int))(v47 + 48))(v42);
          v48 = logfmt_raw((int)v94, 0x1000u);
          V_UNLOCK(v48);
          device_num = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release"
                         "/build/godminer-origin_godminer-new/miner_util/power_api.c",
                         153,
                         "get_minimal_feedback_voltage",
                         28,
                         69,
                         40,
                         v94);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v41 )
            {
              if ( v41 < 0.1 )
                v41 = v2;
            }
            else
            {
              v41 = v2;
            }
          }
          ++v42;
        }
        while ( v92 != v42 );
      }
      V_LOCK(device_num);
      v49 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v49);
      v50 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/power_api.c",
              153,
              "get_minimal_feedback_voltage",
              28,
              74,
              20,
              v94);
      if ( (double)v35 * 0.75 / 100.0 <= v41 )
      {
        V_LOCK(v50);
        v51 = logfmt_raw((int)v94, 0x1000u);
        V_UNLOCK(v51);
        v52 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/miner_util/power_api.c",
                153,
                "check_feedback_voltage",
                22,
                95,
                80,
                v94);
        goto LABEL_43;
      }
      V_LOCK(v50);
      v80 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v80);
      v71 = 80;
      v72 = 91;
      goto LABEL_63;
    }
    v68 = read_feedback_voltage(0);
    V_LOCK(v68);
    v69 = logfmt_raw((int)v94, 0x1000u);
    V_UNLOCK(v69);
    v52 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/power_api.c",
            153,
            "check_feedback_voltage",
            22,
            100,
            20,
            v94);
    if ( v2 >= 0.0 )
    {
      if ( v2 * 100.0 <= v36 * 1.1 && v2 * 100.0 >= v36 * 0.9 )
        goto LABEL_43;
      V_LOCK(v52);
      v70 = logfmt_raw((int)v94, 0x1000u);
      V_UNLOCK(v70);
      v71 = 100;
      v72 = 107;
LABEL_63:
      v73 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/power_api.c",
              153,
              "check_feedback_voltage",
              22,
              v72,
              v71,
              v94);
      if ( !--v37 )
      {
        V_LOCK(v73);
        v8 = -1;
        v74 = logfmt_raw((int)v94, 0x1000u);
        V_UNLOCK(v74);
        v75 = 407;
        goto LABEL_65;
      }
      continue;
    }
    break;
  }
  V_LOCK(v52);
  v79 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v79);
  v52 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/power_api.c",
          153,
          "check_feedback_voltage",
          22,
          102,
          80,
          v94);
LABEL_43:
  V_LOCK(v52);
  v53 = logfmt_raw((int)v94, 0x1000u);
  V_UNLOCK(v53);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/power_api.c",
    153,
    "power_init",
    10,
    412,
    40,
    v94);
  if ( opt_algo == 11 )
  {
    v54 = usleep((__useconds_t)&stru_1869C.st_value);
    if ( v93 > 0 )
    {
      for ( j = 0; j < v93; ++j )
      {
        v56 = dev_ctrl(v54);
        v54 = (*(int (__fastcall **)(int))(v56 + 36))(j);
      }
    }
    v57 = usleep((__useconds_t)&stru_1869C.st_value);
    if ( v93 > 0 )
    {
      for ( k = 0; k < v93; ++k )
      {
        v59 = dev_ctrl(v57);
        v57 = (*(int (__fastcall **)(int))(v59 + 40))(k);
      }
    }
    v60 = usleep((__useconds_t)&stru_1869C.st_value);
    if ( v93 > 0 )
    {
      for ( m = 0; m < v93; ++m )
      {
        v62 = dev_ctrl(v60);
        v60 = (*(int (__fastcall **)(int))(v62 + 36))(m);
      }
    }
    v63 = usleep((__useconds_t)&stru_1869C.st_value);
    if ( v93 > 0 )
    {
      for ( n = 0; n < v93; ++n )
      {
        v65 = dev_ctrl(v63);
        v63 = (*(int (__fastcall **)(int))(v65 + 40))(n);
      }
    }
    v66 = usleep((__useconds_t)&stru_1869C.st_value);
    if ( v93 > 0 )
    {
      do
      {
        v67 = dev_ctrl(v66);
        v66 = (*(int (__fastcall **)(int))(v67 + 36))(v28++);
      }
      while ( v93 > v28 );
    }
  }
  return v8;
}
