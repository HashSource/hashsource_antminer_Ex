int __fastcall power_init(int a1, int a2)
{
  double v2; // d0
  int v4; // r8
  int is_pic_mcu_en; // r7
  unsigned __int16 v6; // r0
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r7
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r9
  bool v22; // zf
  int v23; // r11
  unsigned int v24; // r8
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r11
  int v29; // r3
  double v30; // d9
  int v31; // r10
  double v32; // d8
  int device_num; // r0
  double v34; // d14
  int v35; // r8
  int v36; // r6
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r1
  int v43; // r3
  int v44; // r1
  int v45; // r3
  int v46; // r1
  int v47; // r3
  int v48; // r1
  int v49; // r0
  int j; // r5
  int v51; // r0
  int v52; // r0
  int k; // r5
  int v54; // r0
  int v55; // r0
  int m; // r5
  int v57; // r0
  int v58; // r0
  int n; // r5
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r1
  int v64; // r3
  int v65; // r3
  int v66; // r2
  int v67; // r1
  int v68; // r3
  int v69; // r12
  int v70; // r1
  int v71; // r3
  int v72; // r1
  int v73; // r1
  int v74; // r3
  int v75; // r1
  int v76; // r3
  int v77; // r1
  int v78; // r3
  double v79; // d8
  int v80; // r7
  int chain_num; // r11
  int v82; // r6
  int v83; // r9
  int i; // r5
  int v85; // r0
  int v86; // r3
  int v87; // r1
  int v88; // r3
  int v89; // r1
  int v90; // r3
  int v91; // [sp+4h] [bp-1028h]
  int v92; // [sp+4h] [bp-1028h]
  int v93; // [sp+4h] [bp-1028h]
  int v94; // [sp+1Ch] [bp-1010h]
  int v95; // [sp+20h] [bp-100Ch]
  int v96; // [sp+24h] [bp-1008h] BYREF
  char v97[4100]; // [sp+28h] [bp-1004h] BYREF

  v96 = a2;
  get_all_created_runtime(&v96);
  if ( !platform_is_adjustable_power() )
  {
    V_LOCK();
    LOWORD(v71) = 27232;
    HIWORD(v71) = (unsigned int)"k_asic_voltage error!" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v71, "power_init");
    V_UNLOCK();
    LOWORD(v72) = 26816;
    HIWORD(v72) = (unsigned int)"check_feedback_voltage" >> 16;
    is_pic_mcu_en = -1;
    zlog(g_zc, v72, 153, "power_init", 10, 296, 100, v97);
    V_LOCK();
    LOWORD(v73) = 27280;
    LOWORD(v74) = 27800;
    HIWORD(v73) = (unsigned int)"se adjustable power!" >> 16;
    HIWORD(v74) = (unsigned int)"r" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v74, v73);
    V_UNLOCK();
    LOWORD(v75) = 26816;
    HIWORD(v75) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v75, 153, "power_init", 10, 297, 100, v97);
    return is_pic_mcu_en;
  }
  v4 = (unsigned __int16)bitmain_power_version();
  if ( !platform_is_psu_supported(v4) )
  {
    V_LOCK();
    LOWORD(v88) = 27284;
    HIWORD(v88) = (unsigned int)"djustable power!" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v88, v4);
    V_UNLOCK();
    LOWORD(v89) = 26816;
    HIWORD(v89) = (unsigned int)"check_feedback_voltage" >> 16;
    is_pic_mcu_en = -1;
    zlog(g_zc, v89, 153, "power_init", 10, 303, 100, v97);
    return is_pic_mcu_en;
  }
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( !is_pic_mcu_en )
  {
    v6 = bitmain_set_watchdog(0);
    v4 = v6;
    if ( v6 )
    {
      V_LOCK();
      LOWORD(v7) = 27316;
      HIWORD(v7) = (unsigned int)"ort power version, %04x" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v7, v4);
      V_UNLOCK();
      LOWORD(v8) = 26816;
      HIWORD(v8) = (unsigned int)"check_feedback_voltage" >> 16;
      zlog(g_zc, v8, 153, "power_init", 10, 310, 100, v97);
      return is_pic_mcu_en;
    }
    sleep(1u);
  }
  bitmain_power_off();
  byte_195C28 = 0;
  sleep(1u);
  if ( a1 )
  {
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  V_LOCK();
  LOWORD(v10) = 27348;
  HIWORD(v10) = (unsigned int)"power watchdog: %04x" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v10);
  V_UNLOCK();
  LOWORD(v11) = 26816;
  HIWORD(v11) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v11, 153, "power_init", 10, 322, 60, v97);
  sleep(0x3Cu);
  if ( platform_is_pic_mcu_en() )
    goto LABEL_12;
  v79 = 0.0;
  v80 = 21;
  chain_num = platform_get_chain_num();
  v82 = 1;
  v83 = 100;
  while ( 1 )
  {
    if ( chain_num > 0 )
    {
      for ( i = 0; i != chain_num; ++i )
      {
        v85 = i;
        read_feedback_voltage(v85);
        if ( v2 > v79 )
          v79 = v2;
      }
    }
    if ( v79 <= 10.0 )
      break;
    if ( v83 > 20 )
    {
      v83 = 20;
      sleep(1u);
      if ( !--v80 )
        goto LABEL_91;
LABEL_87:
      v82 = 1;
    }
    else
    {
      sleep(1u);
      if ( !--v80 )
        goto LABEL_91;
      if ( ++v82 > 19 )
        goto LABEL_12;
      v83 = 20;
    }
  }
  if ( v79 <= 4.0 )
    goto LABEL_12;
  if ( v83 != 2 )
  {
    v83 = 2;
    sleep(1u);
    if ( !--v80 )
      goto LABEL_91;
    goto LABEL_87;
  }
  sleep(1u);
  if ( v80 != 1 )
    goto LABEL_12;
LABEL_91:
  V_LOCK();
  LOWORD(v86) = 27416;
  HIWORD(v86) = (unsigned int)"y take up 1 minute..." >> 16;
  logfmt_raw(v97, 0x1000u, 0, v86);
  V_UNLOCK();
  LOWORD(v87) = 26816;
  HIWORD(v87) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v87, 153, "wait_for_psu_discharge", 22, 187, 100, v97);
LABEL_12:
  v12 = (unsigned __int16)bitmain_power_fw_version();
  V_LOCK();
  LOWORD(v13) = 27456;
  HIWORD(v13) = (unsigned int)"o slow OR pic adc wrong" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v13, v12);
  V_UNLOCK();
  LOWORD(v14) = 26816;
  HIWORD(v14) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v14, 153, "power_init", 10, 331, 60, v97);
  byte_195C29 = 0;
  dword_195C2C = 0;
  dword_195C30 = 0;
  byte_195C10 = 1;
  if ( opt_custom_voltage_swith || is_eeprom_loaded() )
    dword_195C1C = opt_custom_voltage;
  byte_195C14 = platform_is_adjustable_power();
  byte_195C20 = platform_is_check_asic_voltage_enable();
  dword_195C24 = platfrom_get_check_asic_voltage();
  V_LOCK();
  LOWORD(v15) = 27488;
  HIWORD(v15) = (unsigned int)"power fw version: %04x" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v15);
  V_UNLOCK();
  LOWORD(v16) = 26816;
  HIWORD(v16) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v16, 153, "power_init", 10, 352, 40, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_195C2C);
  V_UNLOCK();
  LOWORD(v17) = 26816;
  HIWORD(v17) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v17, 153, "power_init", 10, 353, 40, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_195C1C);
  V_UNLOCK();
  LOWORD(v18) = 26816;
  HIWORD(v18) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v18, 153, "power_init", 10, 354, 40, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_195C20);
  V_UNLOCK();
  LOWORD(v19) = 26816;
  HIWORD(v19) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v19, 153, "power_init", 10, 355, 40, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_195C24);
  V_UNLOCK();
  LOWORD(v20) = 26816;
  HIWORD(v20) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v20, 153, "power_init", 10, 356, 40, v97);
  if ( byte_195C14 && byte_195C20 )
    v21 = set_check_asic_voltage(0);
  else
    v21 = set_working_voltage(0);
  if ( v21 )
  {
    V_LOCK();
    LOWORD(v90) = 27616;
    HIWORD(v90) = (unsigned int)"k_asic_voltage_raw\t= %d" >> 16;
    is_pic_mcu_en = -1;
    logfmt_raw(v97, 0x1000u, 0, v90);
    V_UNLOCK();
    v69 = 364;
LABEL_65:
    LOWORD(v70) = 26816;
    HIWORD(v70) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v70, 153, "power_init", 10, v69, 100, v97);
    return is_pic_mcu_en;
  }
  v22 = v4 == 113;
  if ( v4 != 113 )
    v22 = v4 == 116;
  LOWORD(v23) = 27644;
  v24 = 0;
  if ( !v22 )
  {
    while ( 1 )
    {
      is_pic_mcu_en = bitmain_get_power_status();
      ++v24;
      if ( !is_pic_mcu_en )
        break;
      if ( v24 == 5 * (v24 / 5) )
      {
        V_LOCK();
        HIWORD(v23) = (unsigned int)"voltage_by_steps error!" >> 16;
        logfmt_raw(v97, 0x1000u, v24 % 5, v23, is_pic_mcu_en);
        V_UNLOCK();
        LOWORD(v25) = 26816;
        HIWORD(v25) = (unsigned int)"check_feedback_voltage" >> 16;
        zlog(g_zc, v25, 153, "power_init", 10, 378, 100, v97);
      }
      sleep(3u);
      if ( v24 == 20 )
        goto LABEL_28;
    }
  }
  is_pic_mcu_en = 0;
LABEL_28:
  V_LOCK();
  LOWORD(v26) = 27688;
  HIWORD(v26) = (unsigned int)"_status failed(%d) <<" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v26);
  V_UNLOCK();
  LOWORD(v27) = 26816;
  HIWORD(v27) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v27, 153, "power_init", 10, 385, 40, v97);
  bitmain_power_on();
  byte_195C28 = 1;
  sleep(1u);
  if ( byte_195C10 )
    v28 = dword_195C2C;
  else
    v28 = sub_5D710();
  LOWORD(v29) = 27960;
  v30 = (double)v28;
  v31 = 3;
  HIWORD(v29) = (unsigned int)"ge %f qualified_vol %f" >> 16;
  v95 = v29;
  v32 = (double)v28 * 0.75 / 100.0;
  while ( 2 )
  {
    sleep(1u);
    if ( platform_is_pic_mcu_en() )
    {
      device_num = query_device_num();
      v34 = 0.0;
      v94 = device_num;
      if ( device_num > 0 )
      {
        LOWORD(v35) = 27720;
        v36 = 0;
        do
        {
          v37 = dev_ctrl(device_num);
          v38 = (*(int (__fastcall **)(int))(v37 + 60))(v36);
          read_feedback_voltage(v38);
          v39 = V_LOCK();
          v40 = dev_ctrl(v39);
          v41 = (*(int (__fastcall **)(int))(v40 + 60))(v36);
          HIWORD(v35) = (unsigned int)"get_power_status end!" >> 16;
          logfmt_raw(v97, 0x1000u, 0, v35, v41, v91, v2);
          V_UNLOCK();
          LOWORD(v42) = 26816;
          HIWORD(v42) = (unsigned int)"check_feedback_voltage" >> 16;
          device_num = zlog(g_zc, v42, 153, "get_minimal_feedback_voltage", 28, 69, 40, v97);
          if ( v2 > 0.1 )
          {
            if ( v2 >= v34 )
            {
              if ( v34 < 0.1 )
                v34 = v2;
            }
            else
            {
              v34 = v2;
            }
          }
          ++v36;
        }
        while ( v94 != v36 );
      }
      V_LOCK();
      LOWORD(v43) = 27756;
      HIWORD(v43) = (unsigned int)"dback voltage = %.2f" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v43, v34);
      V_UNLOCK();
      LOWORD(v44) = 26816;
      HIWORD(v44) = (unsigned int)"check_feedback_voltage" >> 16;
      zlog(g_zc, v44, 153, "get_minimal_feedback_voltage", 28, 74, 20, v97);
      if ( v32 <= v34 )
      {
        V_LOCK();
        LOWORD(v45) = 27880;
        HIWORD(v45) = (unsigned int)" %f qualified_vol %f" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v45, v28, v92, v34, v32);
        V_UNLOCK();
        LOWORD(v46) = 26816;
        HIWORD(v46) = (unsigned int)"check_feedback_voltage" >> 16;
        zlog(g_zc, v46, 153, "check_feedback_voltage", 22, 95, 80, v97);
        goto LABEL_43;
      }
      V_LOCK();
      LOWORD(v78) = 27784;
      HIWORD(v78) = (unsigned int)"minimal voltage = %.2f" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v78, v28, v92, v34, v32);
      V_UNLOCK();
      v65 = 80;
      v66 = 91;
      goto LABEL_63;
    }
    read_feedback_voltage(0);
    V_LOCK();
    logfmt_raw(v97, 0x1000u, 0, v95, v2);
    V_UNLOCK();
    LOWORD(v63) = 26816;
    HIWORD(v63) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v63, 153, "check_feedback_voltage", 22, 100, 20, v97);
    if ( v2 >= 0.0 )
    {
      if ( v2 * 100.0 <= v30 * 1.1 && v2 * 100.0 >= v30 * 0.9 )
        goto LABEL_43;
      V_LOCK();
      LOWORD(v64) = 28024;
      HIWORD(v64) = (unsigned int)"ltage_from_psu failed!" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v64, v28, v93, v2 * 100.0);
      V_UNLOCK();
      v65 = 100;
      v66 = 107;
LABEL_63:
      LOWORD(v67) = 26816;
      HIWORD(v67) = (unsigned int)"check_feedback_voltage" >> 16;
      zlog(g_zc, v67, 153, "check_feedback_voltage", 22, v66, v65, v97);
      if ( !--v31 )
      {
        V_LOCK();
        LOWORD(v68) = 28076;
        HIWORD(v68) = (unsigned int)"ti_voltage %d fb_vol %f" >> 16;
        is_pic_mcu_en = -1;
        logfmt_raw(v97, 0x1000u, 0, v68);
        V_UNLOCK();
        v69 = 407;
        goto LABEL_65;
      }
      continue;
    }
    break;
  }
  V_LOCK();
  LOWORD(v76) = 27984;
  HIWORD(v76) = (unsigned int)"read fb voltage %.2f" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v76);
  V_UNLOCK();
  LOWORD(v77) = 26816;
  HIWORD(v77) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v77, 153, "check_feedback_voltage", 22, 102, 80, v97);
LABEL_43:
  V_LOCK();
  LOWORD(v47) = 28108;
  HIWORD(v47) = (unsigned int)"edback_voltage error!" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v47);
  V_UNLOCK();
  LOWORD(v48) = 26816;
  HIWORD(v48) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v48, 153, "power_init", 10, 412, 40, v97);
  if ( (unsigned int)(opt_algo - 11) <= 1 )
  {
    v49 = usleep((__useconds_t)&stru_186A0);
    if ( v96 > 0 )
    {
      for ( j = 0; j < v96; ++j )
      {
        v51 = dev_ctrl(v49);
        v49 = (*(int (__fastcall **)(int))(v51 + 48))(j);
      }
    }
    v52 = usleep((__useconds_t)&stru_186A0);
    if ( v96 > 0 )
    {
      for ( k = 0; k < v96; ++k )
      {
        v54 = dev_ctrl(v52);
        v52 = (*(int (__fastcall **)(int))(v54 + 52))(k);
      }
    }
    v55 = usleep((__useconds_t)&stru_186A0);
    if ( v96 > 0 )
    {
      for ( m = 0; m < v96; ++m )
      {
        v57 = dev_ctrl(v55);
        v55 = (*(int (__fastcall **)(int))(v57 + 48))(m);
      }
    }
    v58 = usleep((__useconds_t)&stru_186A0);
    if ( v96 > 0 )
    {
      for ( n = 0; n < v96; ++n )
      {
        v60 = dev_ctrl(v58);
        v58 = (*(int (__fastcall **)(int))(v60 + 52))(n);
      }
    }
    v61 = usleep((__useconds_t)&stru_186A0);
    if ( v96 > 0 )
    {
      do
      {
        v62 = dev_ctrl(v61);
        v61 = (*(int (__fastcall **)(int))(v62 + 48))(v21++);
      }
      while ( v96 > v21 );
    }
  }
  return is_pic_mcu_en;
}
