int __fastcall hardware_init(int a1)
{
  int result; // r0
  int v3; // r3
  const char *v4; // r4
  char *v5; // r7
  char *v6; // r0
  size_t v7; // r2
  _BOOL4 v8; // r0
  char *v9; // r9
  char *v10; // r5
  size_t v11; // r4
  int v12; // r5
  char *all_created_runtime; // r0
  char *v14; // r6
  int v15; // t1
  int is_adjustable_power; // r0
  int v17; // r10
  int chain_sensor_num; // r0
  int v19; // r11
  int sensor_max_chip_temp; // r0
  int v21; // r10
  int sensor_max_pcb_temp; // r0
  int v23; // r11
  int sensor_min_pcb_temp; // r0
  int v25; // r10
  int psu_gpio_port; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v28)(int); // r5
  int chain_num; // r0
  int v30; // r5
  _DWORD *device_num; // r0
  _DWORD *v32; // r6
  _DWORD *v33; // r7
  int v34; // r0
  int v35; // r10
  int v36; // r9
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  __int64 v42; // r0
  int v43; // r5
  int v44; // r3
  int v45; // r10
  int v46; // r8
  int eeprom_chain_load_state; // r0
  int v48; // r9
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r3
  char pic_device_high; // r0
  int v57; // r3
  int v58; // r1
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r3
  int v63; // r3
  int v64; // r1
  int v65; // r1
  char *v66; // r0
  int v67; // r3
  char *v68; // r7
  int v69; // r10
  int v70; // t1
  int v71; // r3
  int v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r1
  int v76; // r3
  int v77; // r12
  int v78; // r2
  int v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r1
  int v84; // [sp+0h] [bp-106Ch]
  int v85; // [sp+2Ch] [bp-1040h]
  int v86; // [sp+2Ch] [bp-1040h]
  int v87; // [sp+30h] [bp-103Ch] BYREF
  int v88[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v89[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init();
  if ( result )
    return result;
  LOWORD(v3) = -15528;
  HIWORD(v3) = (unsigned int)"ime_ctrl_ltc_1489() out" >> 16;
  v4 = *(const char **)(v3 + 4 * a1 + 436);
  v5 = (char *)calloc(1u, 8u);
  v6 = strchr(v4, 95);
  v7 = v6 - v4;
  if ( v6 )
    v8 = v6 - v4 <= 7;
  else
    v8 = 0;
  if ( v8 )
    strncpy(v5, v4, v7);
  v9 = (char *)calloc(1u, 8u);
  v10 = strchr(v4, 95);
  if ( v10 )
  {
    v11 = strlen(v4);
    if ( v11 - strlen(v10) <= 7 )
      strcpy(v9, v10 + 1);
  }
  v12 = 0;
  LOWORD(v88[0]) = 0;
  str2hex((int)v88, (int)v9, 4);
  v89[0] = 0;
  all_created_runtime = (char *)get_all_created_runtime(v89);
  if ( v89[0] > 0 )
  {
    v14 = all_created_runtime - 4;
    do
    {
      v15 = *((_DWORD *)v14 + 1);
      v14 += 4;
      strcpy((char *)(v15 + 320), v5);
      *(_DWORD *)(*(_DWORD *)v14 + 328) = (unsigned __int16)__rev16(LOWORD(v88[0]));
      is_adjustable_power = platform_is_adjustable_power();
      v17 = *(_DWORD *)v14;
      *(_DWORD *)(*(_DWORD *)v14 + 1000) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v12);
      v19 = *(_DWORD *)v14;
      *(_DWORD *)(v17 + 396) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v12);
      v21 = *(_DWORD *)v14;
      *(_DWORD *)(v19 + 400) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v12);
      v23 = *(_DWORD *)v14;
      *(_DWORD *)(v21 + 404) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v12);
      v25 = *(_DWORD *)v14;
      *(_DWORD *)(v23 + 408) = sensor_min_pcb_temp;
      *(_DWORD *)(v25 + 412) = platform_get_sensor_max_uneffective_count(v12++);
    }
    while ( v12 < v89[0] );
  }
  free(v5);
  free(v9);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info((float *)v88);
  fan_control_info_init(
    v88[0],
    v88[1],
    v88[2],
    v88[3],
    v88[4],
    v88[5],
    *(float *)&v88[6],
    v88[7],
    v88[8],
    v88[9],
    v88[10],
    v88[11],
    v88[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v28 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 12);
  chain_num = platform_get_chain_num();
  v30 = v28(chain_num);
  if ( v30 )
  {
    V_LOCK();
    LOWORD(v57) = -13828;
    HIWORD(v57) = (unsigned int)"sts" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v57);
    V_UNLOCK();
    v77 = 100;
    v78 = 1025;
    goto LABEL_30;
  }
  check_fan_valiad();
  device_num = (_DWORD *)query_device_num();
  v32 = device_num;
  if ( (int)device_num <= 0 )
  {
    V_LOCK();
    LOWORD(v76) = -13808;
    HIWORD(v76) = (unsigned int)"d" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v76, v32);
    V_UNLOCK();
    v77 = 100;
    v78 = 1038;
LABEL_30:
    LOWORD(v58) = -14932;
    HIWORD(v58) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v58, 169, "hardware_init", 13, v78, v77, v89);
    return 31;
  }
  v33 = 0;
  do
  {
    v34 = dev_ctrl(device_num);
    (*(void (__fastcall **)(_DWORD *))(v34 + 52))(v33);
    v33 = (_DWORD *)((char *)v33 + 1);
    device_num = runtime_ctrl(a1);
    if ( !device_num )
    {
      V_LOCK();
      LOWORD(v63) = -13760;
      HIWORD(v63) = (unsigned int)"ode %d and then exit" >> 16;
      logfmt_raw((char *)v89, 0x1000u, 0, v63);
      V_UNLOCK();
      v77 = 80;
      v78 = 1047;
      goto LABEL_30;
    }
  }
  while ( v32 != v33 );
  LOWORD(v35) = -13740;
  LOWORD(v36) = -14932;
  do
  {
    v37 = V_LOCK();
    v38 = dev_ctrl(v37);
    v39 = (*(int (__fastcall **)(int))(v38 + 60))(v30);
    HIWORD(v35) = (unsigned int)"" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v35, v39);
    V_UNLOCK();
    HIWORD(v36) = (unsigned int)"%d, set voltage to %d" >> 16;
    v40 = zlog(g_zc, v36, 169, "hardware_init", 13, 1054, 60, v89);
    v41 = dev_ctrl(v40);
    v42 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v41 + 60))(v30++);
    add_eeprom_device(v42, SHIDWORD(v42));
  }
  while ( (_DWORD *)v30 != v33 );
  v43 = eeprom_load();
  if ( v43 )
  {
    V_LOCK();
    LOWORD(v79) = -13716;
    HIWORD(v79) = (unsigned int)"eeprom add device: %d" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v79);
    V_UNLOCK();
    LOWORD(v80) = -14932;
    HIWORD(v80) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v80, 169, "hardware_init", 13, 1087, 100, v89);
    V_LOCK();
    LOWORD(v81) = -13680;
    LOWORD(v82) = 27800;
    HIWORD(v81) = (unsigned int)"error!, pls check it" >> 16;
    HIWORD(v82) = (unsigned int)"r" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v82, v81);
    V_UNLOCK();
    LOWORD(v83) = -14932;
    HIWORD(v83) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v83, 169, "hardware_init", 13, 1088, 100, v89);
    return 32;
  }
  LOWORD(v44) = -13632;
  LOWORD(v45) = -14932;
  HIWORD(v44) = (unsigned int)" not ready, chain = %d" >> 16;
  v85 = v44;
  HIWORD(v45) = (unsigned int)"%d, set voltage to %d" >> 16;
  v46 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v46);
    v48 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      v59 = V_LOCK();
      v60 = dev_ctrl(v59);
      v61 = (*(int (__fastcall **)(int))(v60 + 60))(v46);
      LOWORD(v62) = -13672;
      HIWORD(v62) = (unsigned int)"pls check it" >> 16;
      logfmt_raw((char *)v89, 0x1000u, 0, v62, v61);
      V_UNLOCK();
      ++v43;
      zlog(g_zc, v45, 169, "hardware_init", 13, 1106, 100, v89);
    }
    else if ( !eeprom_chain_load_state )
    {
      v49 = V_LOCK();
      v50 = dev_ctrl(v49);
      v51 = (*(int (__fastcall **)(int))(v50 + 60))(v46);
      ++v43;
      logfmt_raw((char *)v89, 0x1000u, v48, v85, v51);
      V_UNLOCK();
      zlog(g_zc, v45, 169, "hardware_init", 13, 1109, 100, v89);
      v52 = V_LOCK();
      v53 = dev_ctrl(v52);
      v54 = (*(int (__fastcall **)(int))(v53 + 60))(v46);
      LOWORD(v55) = -13604;
      HIWORD(v55) = (unsigned int)"n%d load EEPROM error." >> 16;
      logfmt_raw((char *)v89, 0x1000u, v48, v55, v54);
      V_UNLOCK();
      zlog(g_zc, v45, 169, "hardware_init", 13, 1110, 100, v89);
    }
    ++v46;
  }
  while ( (_DWORD *)v46 != v33 );
  if ( v43 )
  {
    V_LOCK();
    LOWORD(v71) = -13576;
    HIWORD(v71) = (unsigned int)"p error string = J%d:4." >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v71);
    V_UNLOCK();
    LOWORD(v72) = -14932;
    HIWORD(v72) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v72, 169, "hardware_init", 13, 1136, 100, v89);
    V_LOCK();
    LOWORD(v73) = -13680;
    LOWORD(v74) = 27800;
    HIWORD(v73) = (unsigned int)"error!, pls check it" >> 16;
    HIWORD(v74) = (unsigned int)"r" >> 16;
    logfmt_raw((char *)v89, 0x1000u, 0, v74, v73);
    V_UNLOCK();
    LOWORD(v75) = -14932;
    HIWORD(v75) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v75, 169, "hardware_init", 13, 1137, 100, v89);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw((char *)v89, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  LOWORD(v64) = -14932;
  HIWORD(v64) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v64, 169, "hardware_init", 13, 1180, 40, v89);
  V_LOCK();
  logfmt_raw((char *)v89, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  LOWORD(v65) = -14932;
  HIWORD(v65) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v65, 169, "hardware_init", 13, 1181, 40, v89);
  v87 = 0;
  v66 = (char *)get_all_created_runtime(&v87);
  if ( v87 > 0 )
  {
    LOWORD(v69) = -14932;
    LOWORD(v67) = -13500;
    v68 = v66 - 4;
    HIWORD(v69) = (unsigned int)"%d, set voltage to %d" >> 16;
    HIWORD(v67) = (unsigned int)"age: %d" >> 16;
    v86 = v67;
    do
    {
      V_LOCK();
      v70 = *((_DWORD *)v68 + 1);
      v68 += 4;
      logfmt_raw((char *)v89, 0x1000u, 0, v86, v43, v70 + 320);
      V_UNLOCK();
      zlog(g_zc, v69, 169, "show_backend_info", 17, 78, 20, v89);
      V_LOCK();
      v84 = v43++;
      logfmt_raw((char *)v89, 0x1000u, 0, "chain[%d] %x", v84, *(_DWORD *)(*(_DWORD *)v68 + 328));
      V_UNLOCK();
      zlog(g_zc, v69, 169, "show_backend_info", 17, 79, 20, v89);
    }
    while ( v43 < v87 );
  }
  return 0;
}
