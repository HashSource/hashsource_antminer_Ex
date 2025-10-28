int __fastcall power_init(int a1)
{
  double v1; // d0
  int v3; // r6
  int is_psu_supported; // r0
  unsigned int is_pic_mcu_en; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r6
  int v9; // r0
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r0
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
  unsigned int v26; // r0
  int v27; // r7
  double v28; // d9
  int v29; // r10
  unsigned int v30; // r0
  int v31; // r0
  int device_num; // r0
  double v33; // d14
  int v34; // r8
  int v35; // r0
  int v36; // r0
  int feedback_voltage; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  unsigned int power_status; // r0
  bool v47; // zf
  unsigned int v48; // r7
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r3
  int v55; // r2
  int v56; // r0
  int v57; // r0
  int v58; // r12
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  double v65; // d8
  int v66; // r8
  int chain_num; // r11
  int v68; // r6
  int i; // r9
  int j; // r5
  int v71; // r0
  unsigned int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // [sp+18h] [bp-100Ch]
  int v76; // [sp+18h] [bp-100Ch]
  _BYTE v77[4100]; // [sp+20h] [bp-1004h] BYREF

  if ( !platform_is_adjustable_power(a1) )
  {
    V_LOCK(0);
    v59 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v59);
    v8 = -1;
    v60 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/power_api.c",
            149,
            "power_init",
            10,
            293,
            100,
            v77);
    V_LOCK(v60);
    v61 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v61);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      294,
      100,
      v77);
    return v8;
  }
  v3 = (unsigned __int16)bitmain_power_version();
  is_psu_supported = platform_is_psu_supported(v3);
  if ( !is_psu_supported )
  {
    V_LOCK(0);
    v8 = -1;
    v74 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v74);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      300,
      100,
      v77);
    return v8;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en(is_psu_supported);
  if ( !is_pic_mcu_en )
  {
    v6 = bitmain_set_watchdog(0);
    v3 = (unsigned __int16)v6;
    if ( (_WORD)v6 )
    {
      V_LOCK(v6);
      v8 = 0;
      v9 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/power_api.c",
        149,
        "power_init",
        10,
        307,
        100,
        v77);
      return v8;
    }
    is_pic_mcu_en = sleep(1u);
  }
  bitmain_power_off(is_pic_mcu_en);
  byte_166048 = 0;
  v7 = sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK(v7);
  v11 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    319,
    60,
    v77);
  v12 = sleep(0x3Cu);
  if ( !platform_is_pic_mcu_en(v12) )
  {
    v65 = 0.0;
    v66 = 21;
    v76 = v3;
    chain_num = platform_get_chain_num();
    v68 = 1;
    for ( i = 100; ; i = 20 )
    {
      while ( 1 )
      {
        if ( chain_num > 0 )
        {
          for ( j = 0; j != chain_num; ++j )
          {
            v71 = j;
            read_feedback_voltage(v71);
            if ( v1 > v65 )
              v65 = v1;
          }
        }
        if ( v65 > 10.0 )
          break;
        if ( v65 <= 4.0 )
          goto LABEL_79;
        if ( i == 2 )
        {
          v3 = v76;
          v72 = sleep(1u);
          if ( v66 != 1 )
            goto LABEL_12;
          goto LABEL_77;
        }
        i = 2;
        v72 = sleep(1u);
        if ( !--v66 )
          goto LABEL_75;
LABEL_73:
        v68 = 1;
      }
      if ( i > 20 )
      {
        i = 20;
        v72 = sleep(1u);
        if ( !--v66 )
        {
LABEL_75:
          v3 = v76;
LABEL_77:
          V_LOCK(v72);
          v73 = logfmt_raw((int)v77, 0x1000u);
          V_UNLOCK(v73);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/power_api.c",
            149,
            "wait_for_psu_discharge",
            22,
            187,
            100,
            v77);
          break;
        }
        goto LABEL_73;
      }
      v72 = sleep(1u);
      if ( !--v66 )
        goto LABEL_75;
      if ( ++v68 > 19 )
      {
LABEL_79:
        v3 = v76;
        break;
      }
    }
  }
LABEL_12:
  v13 = bitmain_power_fw_version();
  V_LOCK(v13);
  v14 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v14);
  v15 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          328,
          60,
          v77);
  byte_166049 = 0;
  dword_16604C = 0;
  dword_166050 = 0;
  byte_166030 = 1;
  if ( opt_custom_voltage_swith || (v15 = is_eeprom_loaded(v15)) != 0 )
    dword_16603C = opt_custom_voltage;
  byte_166034 = platform_is_adjustable_power(v15);
  byte_166040 = platform_is_check_asic_voltage_enable();
  dword_166044 = platfrom_get_check_asic_voltage();
  V_LOCK(dword_166044);
  v16 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          347,
          40,
          v77);
  V_LOCK(v17);
  v18 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v18);
  v19 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          348,
          40,
          v77);
  V_LOCK(v19);
  v20 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v20);
  v21 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          349,
          40,
          v77);
  V_LOCK(v21);
  v22 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          350,
          40,
          v77);
  V_LOCK(v23);
  v24 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    351,
    40,
    v77);
  if ( byte_166034 && byte_166040 )
    v25 = set_check_asic_voltage(0);
  else
    v25 = set_working_voltage(0);
  if ( v25 )
  {
    V_LOCK(v25);
    v8 = -1;
    v64 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v64);
    v58 = 359;
LABEL_50:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "power_init",
      10,
      v58,
      100,
      v77);
    return v8;
  }
  bitmain_power_on();
  byte_166048 = 1;
  v26 = sleep(1u);
  if ( byte_166030 )
    v27 = dword_16604C;
  else
    v27 = sub_4FBD0(v26);
  v28 = (double)v27;
  v29 = 3;
  while ( 1 )
  {
    v30 = sleep(1u);
    v31 = platform_is_pic_mcu_en(v30);
    if ( !v31 )
      break;
    device_num = query_device_num(v31);
    v33 = 0.0;
    v75 = device_num;
    if ( device_num > 0 )
    {
      v34 = 0;
      do
      {
        v35 = dev_ctrl(device_num);
        v36 = (*(int (__fastcall **)(int))(v35 + 48))(v34);
        feedback_voltage = read_feedback_voltage(v36);
        v38 = V_LOCK(feedback_voltage);
        v39 = dev_ctrl(v38);
        (*(void (__fastcall **)(int))(v39 + 48))(v34);
        v40 = logfmt_raw((int)v77, 0x1000u);
        V_UNLOCK(v40);
        device_num = zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build"
                       "/godminer-origin_godminer-new/miner_util/power_api.c",
                       149,
                       "get_minimal_feedback_voltage",
                       28,
                       69,
                       40,
                       v77);
        if ( v1 > 0.1 )
        {
          if ( v1 >= v33 )
          {
            if ( v33 < 0.1 )
              v33 = v1;
          }
          else
          {
            v33 = v1;
          }
        }
        ++v34;
      }
      while ( v75 != v34 );
    }
    V_LOCK(device_num);
    v41 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v41);
    v42 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/power_api.c",
            149,
            "get_minimal_feedback_voltage",
            28,
            74,
            20,
            v77);
    if ( (double)v27 * 0.75 / 100.0 <= v33 )
    {
      V_LOCK(v42);
      v43 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v43);
      v44 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/power_api.c",
              149,
              "check_feedback_voltage",
              22,
              95,
              80,
              v77);
      goto LABEL_33;
    }
    V_LOCK(v42);
    v63 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v63);
    v54 = 80;
    v55 = 91;
LABEL_48:
    v56 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/power_api.c",
            149,
            "check_feedback_voltage",
            22,
            v55,
            v54,
            v77);
    if ( !--v29 )
    {
      V_LOCK(v56);
      v8 = -1;
      v57 = logfmt_raw((int)v77, 0x1000u);
      V_UNLOCK(v57);
      v58 = 382;
      goto LABEL_50;
    }
  }
  v51 = read_feedback_voltage(0);
  V_LOCK(v51);
  v52 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v52);
  v44 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "check_feedback_voltage",
          22,
          100,
          20,
          v77);
  if ( v1 >= 0.0 )
  {
    if ( v1 * 100.0 <= v28 * 1.1 && v1 * 100.0 >= v28 * 0.9 )
      goto LABEL_33;
    V_LOCK(v44);
    v53 = logfmt_raw((int)v77, 0x1000u);
    V_UNLOCK(v53);
    v54 = 100;
    v55 = 107;
    goto LABEL_48;
  }
  V_LOCK(v44);
  v62 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v62);
  v44 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "check_feedback_voltage",
          22,
          102,
          80,
          v77);
LABEL_33:
  V_LOCK(v44);
  v45 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v45);
  power_status = zlog(
                   g_zc,
                   "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/god"
                   "miner-origin_godminer-new/miner_util/power_api.c",
                   149,
                   "power_init",
                   10,
                   387,
                   40,
                   v77);
  v47 = v3 == 113;
  if ( v3 != 113 )
    v47 = v3 == 116;
  v48 = 0;
  if ( !v47 )
  {
    while ( 1 )
    {
      power_status = bitmain_get_power_status(power_status);
      v8 = power_status;
      ++v48;
      if ( !power_status )
        break;
      if ( v48 == 5 * (v48 / 5) )
      {
        V_LOCK(power_status);
        v49 = logfmt_raw((int)v77, 0x1000u);
        V_UNLOCK(v49);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/power_api.c",
          149,
          "power_init",
          10,
          399,
          100,
          v77);
      }
      power_status = sleep(3u);
      if ( v48 == 20 )
        goto LABEL_43;
    }
  }
  v8 = 0;
LABEL_43:
  V_LOCK(power_status);
  v50 = logfmt_raw((int)v77, 0x1000u);
  V_UNLOCK(v50);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "power_init",
    10,
    406,
    40,
    v77);
  return v8;
}
