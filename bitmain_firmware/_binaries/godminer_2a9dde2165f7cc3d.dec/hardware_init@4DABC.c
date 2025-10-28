int __fastcall hardware_init(int a1)
{
  int result; // r0
  const char *v3; // r4
  char *v4; // r7
  char *v5; // r0
  size_t v6; // r2
  _BOOL4 v7; // r0
  char *v8; // r9
  char *v9; // r5
  size_t v10; // r4
  int v11; // r5
  int all_created_runtime; // r0
  _DWORD *v13; // r6
  int v14; // t1
  char *v15; // r0
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
  int v27; // r0
  int is_pic_mcu_en; // r0
  int (__fastcall *v29)(int); // r5
  int chain_num; // r0
  int v31; // r0
  int v32; // r5
  int v33; // r0
  int device_num; // r0
  int v35; // r6
  int v36; // r7
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r5
  int v46; // r8
  int eeprom_chain_load_state; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  unsigned __int8 pic_device_high; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r7
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r12
  int v74; // r2
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // [sp+30h] [bp-103Ch] BYREF
  _DWORD v79[13]; // [sp+34h] [bp-1038h] BYREF
  _DWORD v80[1025]; // [sp+68h] [bp-1004h] BYREF

  result = machine_info_init(a1);
  if ( result )
    return result;
  v3 = *(const char **)&aCheckWorkingVo_0[4 * a1 + 380];
  v4 = (char *)calloc(1u, 8u);
  v5 = strchr(v3, 95);
  v6 = v5 - v3;
  if ( v5 )
    v7 = v5 - v3 <= 7;
  else
    v7 = 0;
  if ( v7 )
    strncpy(v4, v3, v6);
  v8 = (char *)calloc(1u, 8u);
  v9 = strchr(v3, 95);
  if ( v9 )
  {
    v10 = strlen(v3);
    if ( v10 - strlen(v9) <= 7 )
      strcpy(v8, v9 + 1);
  }
  v11 = 0;
  LOWORD(v79[0]) = 0;
  str2hex((int)v79, (int)v8, 4);
  v80[0] = 0;
  all_created_runtime = get_all_created_runtime(v80);
  if ( v80[0] > 0 )
  {
    v13 = (_DWORD *)(all_created_runtime - 4);
    do
    {
      v14 = v13[1];
      ++v13;
      v15 = strcpy((char *)(v14 + 288), v4);
      *(_DWORD *)(*v13 + 296) = (unsigned __int16)__rev16(LOWORD(v79[0]));
      is_adjustable_power = platform_is_adjustable_power(v15);
      v17 = *v13;
      *(_DWORD *)(*v13 + 952) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v11);
      v19 = *v13;
      *(_DWORD *)(v17 + 364) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v11);
      v21 = *v13;
      *(_DWORD *)(v19 + 368) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v11);
      v23 = *v13;
      *(_DWORD *)(v21 + 372) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v11);
      v25 = *v13;
      *(_DWORD *)(v23 + 376) = sensor_min_pcb_temp;
      *(_DWORD *)(v25 + 380) = platform_get_sensor_max_uneffective_count(v11++);
    }
    while ( v11 < v80[0] );
  }
  free(v4);
  free(v8);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info(v79);
  v27 = fan_control_info_init(
          v79[0],
          v79[1],
          v79[2],
          v79[3],
          v79[4],
          v79[5],
          v79[6],
          v79[7],
          v79[8],
          v79[9],
          v79[10],
          v79[11],
          v79[12]);
  is_pic_mcu_en = platform_is_pic_mcu_en(v27);
  if ( is_pic_mcu_en )
  {
    pic_device_high = platform_get_pic_device_high(0);
    is_pic_mcu_en = set_pic_device_high(pic_device_high);
  }
  v29 = *(int (__fastcall **)(int))(dev_ctrl(is_pic_mcu_en) + 8);
  chain_num = platform_get_chain_num();
  v31 = v29(chain_num);
  v32 = v31;
  if ( v31 )
  {
    V_LOCK(v31);
    v56 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v56);
    v73 = 100;
    v74 = 964;
    goto LABEL_29;
  }
  v33 = check_fan_valiad();
  device_num = query_device_num(v33);
  v35 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v72 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v72);
    v73 = 100;
    v74 = 975;
LABEL_29:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "hardware_init",
      13,
      v74,
      v73,
      v80);
    return 31;
  }
  v36 = 0;
  do
  {
    v37 = dev_ctrl(device_num);
    (*(void (__fastcall **)(int))(v37 + 40))(v36++);
    device_num = runtime_ctrl(a1);
    if ( !device_num )
    {
      V_LOCK(0);
      v60 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v60);
      v73 = 80;
      v74 = 984;
      goto LABEL_29;
    }
  }
  while ( v35 != v36 );
  do
  {
    v38 = V_LOCK(device_num);
    v39 = dev_ctrl(v38);
    (*(void (__fastcall **)(int))(v39 + 48))(v32);
    v40 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v40);
    v41 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "hardware_init",
            13,
            991,
            60,
            v80);
    v42 = dev_ctrl(v41);
    v43 = (*(int (__fastcall **)(int))(v42 + 48))(v32++);
    device_num = add_eeprom_device(v43);
  }
  while ( v32 != v36 );
  v44 = eeprom_load(device_num);
  v45 = v44;
  if ( v44 )
  {
    V_LOCK(v44);
    v75 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v75);
    v76 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "hardware_init",
            13,
            1023,
            100,
            v80);
    V_LOCK(v76);
    v77 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v77);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "hardware_init",
      13,
      1024,
      100,
      v80);
    return 32;
  }
  v46 = 0;
  do
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v46);
    if ( eeprom_chain_load_state == -1 )
    {
      v57 = V_LOCK(-1);
      v58 = dev_ctrl(v57);
      (*(void (__fastcall **)(int))(v58 + 48))(v46);
      v59 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v59);
      ++v45;
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                  169,
                                  "hardware_init",
                                  13,
                                  1041,
                                  100,
                                  v80);
    }
    else if ( !eeprom_chain_load_state )
    {
      v48 = V_LOCK(0);
      v49 = dev_ctrl(v48);
      (*(void (__fastcall **)(int))(v49 + 48))(v46);
      ++v45;
      v50 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v50);
      v51 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "hardware_init",
              13,
              1044,
              100,
              v80);
      v52 = V_LOCK(v51);
      v53 = dev_ctrl(v52);
      (*(void (__fastcall **)(int))(v53 + 48))(v46);
      v54 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v54);
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                  169,
                                  "hardware_init",
                                  13,
                                  1045,
                                  100,
                                  v80);
    }
    ++v46;
  }
  while ( v46 != v36 );
  if ( v45 )
  {
    V_LOCK(eeprom_chain_load_state);
    v69 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v69);
    v70 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
            169,
            "hardware_init",
            13,
            1069,
            100,
            v80);
    V_LOCK(v70);
    v71 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v71);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/machine_runtime_base.c",
      169,
      "hardware_init",
      13,
      1070,
      100,
      v80);
    return 32;
  }
  opt_custom_freq = eeprom_get_min_freq(eeprom_chain_load_state);
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK(opt_custom_voltage);
  v61 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v61);
  v62 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/machine_runtime_base.c",
          169,
          "hardware_init",
          13,
          1113,
          40,
          v80);
  V_LOCK(v62);
  v63 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/machine_runtime_base.c",
    169,
    "hardware_init",
    13,
    1114,
    40,
    v80);
  v78 = 0;
  v64 = get_all_created_runtime(&v78);
  if ( v78 > 0 )
  {
    v65 = v64 - 4;
    do
    {
      V_LOCK(v64);
      v65 += 4;
      v66 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v66);
      v67 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "show_backend_info",
              17,
              77,
              20,
              v80);
      V_LOCK(v67);
      ++v45;
      v68 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v68);
      v64 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              169,
              "show_backend_info",
              17,
              78,
              20,
              v80);
    }
    while ( v45 < v78 );
  }
  return 0;
}
