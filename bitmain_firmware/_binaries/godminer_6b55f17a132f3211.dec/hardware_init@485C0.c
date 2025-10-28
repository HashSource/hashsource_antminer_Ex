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
  int v32; // r6
  int v33; // r0
  int device_num; // r0
  int v35; // r5
  int v36; // r9
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r10
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r3
  int v54; // r1
  int v55; // r0
  int v56; // r0
  int eeprom_chain_load_state; // r0
  int v58; // r0
  int v59; // r0
  int voltage; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  unsigned __int8 pic_device_high; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r11
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r6
  int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r12
  int v99; // r2
  int v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // [sp+8h] [bp-107Ch]
  int eeprom_chip_ft; // [sp+28h] [bp-105Ch]
  __int16 v105; // [sp+38h] [bp-104Ch] BYREF
  char v106; // [sp+3Ah] [bp-104Ah]
  char v107[4]; // [sp+3Ch] [bp-1048h] BYREF
  char v108[4]; // [sp+40h] [bp-1044h] BYREF
  int v109; // [sp+44h] [bp-1040h] BYREF
  int v110; // [sp+48h] [bp-103Ch] BYREF
  _DWORD v111[13]; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v112[1025]; // [sp+80h] [bp-1004h] BYREF

  result = machine_info_init(a1);
  if ( result )
    return result;
  v3 = *(const char **)&aSetBaudBase_0[4 * a1 + 196];
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
  LOWORD(v111[0]) = 0;
  str2hex((int)v111, (int)v8, 4);
  v112[0] = 0;
  all_created_runtime = get_all_created_runtime(v112);
  if ( v112[0] > 0 )
  {
    v13 = (_DWORD *)(all_created_runtime - 4);
    do
    {
      v14 = v13[1];
      ++v13;
      v15 = strcpy((char *)(v14 + 276), v4);
      *(_DWORD *)(*v13 + 284) = (unsigned __int16)__rev16(LOWORD(v111[0]));
      is_adjustable_power = platform_is_adjustable_power(v15);
      v17 = *v13;
      *(_DWORD *)(*v13 + 944) = is_adjustable_power;
      chain_sensor_num = platform_get_chain_sensor_num(v11);
      v19 = *v13;
      *(_DWORD *)(v17 + 352) = chain_sensor_num;
      sensor_max_chip_temp = platform_get_sensor_max_chip_temp(v11);
      v21 = *v13;
      *(_DWORD *)(v19 + 356) = sensor_max_chip_temp;
      sensor_max_pcb_temp = platform_get_sensor_max_pcb_temp(v11);
      v23 = *v13;
      *(_DWORD *)(v21 + 360) = sensor_max_pcb_temp;
      sensor_min_pcb_temp = platform_get_sensor_min_pcb_temp(v11);
      v25 = *v13;
      *(_DWORD *)(v23 + 364) = sensor_min_pcb_temp;
      *(_DWORD *)(v25 + 368) = platform_get_sensor_max_uneffective_count(v11++);
    }
    while ( v11 < v112[0] );
  }
  free(v4);
  free(v8);
  psu_gpio_port = platform_get_psu_gpio_port();
  set_bitmain_power_gpio_port(psu_gpio_port);
  platform_get_fan_control_info(v111);
  v27 = fan_control_info_init(
          v111[0],
          v111[1],
          v111[2],
          v111[3],
          v111[4],
          v111[5],
          v111[6],
          v111[7],
          v111[8],
          v111[9],
          v111[10],
          v111[11],
          v111[12]);
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
    v83 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v83);
    v98 = 100;
    v99 = 651;
    goto LABEL_31;
  }
  v33 = check_fan_valiad();
  device_num = query_device_num(v33);
  v35 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v97 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v97);
    v98 = 100;
    v99 = 662;
LABEL_31:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "hardware_init",
      13,
      v99,
      v98,
      v112);
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
      v87 = logfmt_raw((int)v112, 0x1000u);
      V_UNLOCK(v87);
      v98 = 80;
      v99 = 671;
      goto LABEL_31;
    }
  }
  while ( v35 != v36 );
  do
  {
    v38 = V_LOCK(device_num);
    v39 = dev_ctrl(v38);
    (*(void (__fastcall **)(int))(v39 + 48))(v32);
    v40 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v40);
    v41 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "hardware_init",
            13,
            678,
            60,
            v112);
    v42 = dev_ctrl(v41);
    v43 = (*(int (__fastcall **)(int))(v42 + 48))(v32++);
    device_num = add_eeprom_device(v43);
  }
  while ( v32 != v36 );
  v44 = eeprom_load(device_num);
  if ( v44 )
  {
    V_LOCK(v44);
    v100 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v100);
    v101 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/machine_runtime/machine_runtime_base.c",
             165,
             "hardware_init",
             13,
             710,
             100,
             v112);
    V_LOCK(v101);
    v102 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v102);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "hardware_init",
      13,
      711,
      100,
      v112);
    return 32;
  }
  else
  {
    v45 = 0;
    do
    {
      v110 = 0;
      v109 = 0;
      v105 = 0;
      v106 = 0;
      eeprom_chain_load_state = api_get_eeprom_chain_load_state(v45);
      if ( eeprom_chain_load_state == -1 )
      {
        v84 = V_LOCK(-1);
        v85 = dev_ctrl(v84);
        (*(void (__fastcall **)(int))(v85 + 48))(v45);
        v86 = logfmt_raw((int)v112, 0x1000u);
        V_UNLOCK(v86);
        v56 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                165,
                "hardware_init",
                13,
                727,
                100,
                v112);
      }
      else
      {
        if ( eeprom_chain_load_state )
        {
          v58 = dev_ctrl(eeprom_chain_load_state);
          v59 = (*(int (__fastcall **)(int))(v58 + 48))(v45);
          voltage = eeprom_get_voltage(v59, v107);
          v61 = dev_ctrl(voltage);
          v62 = (*(int (__fastcall **)(int))(v61 + 48))(v45);
          eeprom_get_freq(v62, v108);
          api_get_eeprom_nonce_response_rate(v45, &v110);
          api_get_eeprom_pcb_version(v45, &v109);
          api_get_eeprom_bom_version(v45, &v105);
          api_get_eeprom_chip_bin(v45);
          eeprom_chip_ft = api_get_eeprom_chip_ft(v45);
          v63 = V_LOCK(eeprom_chip_ft);
          v64 = dev_ctrl(v63);
          (*(void (__fastcall **)(int))(v64 + 48))(v45);
          v65 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v65);
          v66 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "hardware_init",
                  13,
                  742,
                  60,
                  v112);
          v67 = V_LOCK(v66);
          v68 = dev_ctrl(v67);
          (*(void (__fastcall **)(int))(v68 + 48))(v45);
          v69 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v69);
          v70 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "hardware_init",
                  13,
                  743,
                  60,
                  v112);
          v71 = V_LOCK(v70);
          v72 = dev_ctrl(v71);
          (*(void (__fastcall **)(int))(v72 + 48))(v45);
          v73 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v73);
          v74 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "hardware_init",
                  13,
                  744,
                  60,
                  v112);
          v75 = V_LOCK(v74);
          v76 = dev_ctrl(v75);
          (*(void (__fastcall **)(int))(v76 + 48))(v45);
          v77 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v77);
          v78 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "hardware_init",
                  13,
                  745,
                  60,
                  v112);
          v79 = V_LOCK(v78);
          v80 = dev_ctrl(v79);
          (*(void (__fastcall **)(int))(v80 + 48))(v45);
          v81 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v81);
          v55 = g_zc;
          v53 = 746;
          LOWORD(v54) = -29356;
          v103 = 60;
        }
        else
        {
          v46 = V_LOCK(0);
          v47 = dev_ctrl(v46);
          (*(void (__fastcall **)(int))(v47 + 48))(v45);
          v48 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v48);
          v49 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "hardware_init",
                  13,
                  730,
                  100,
                  v112);
          v50 = V_LOCK(v49);
          v51 = dev_ctrl(v50);
          (*(void (__fastcall **)(int))(v51 + 48))(v45);
          v52 = logfmt_raw((int)v112, 0x1000u);
          V_UNLOCK(v52);
          v53 = 731;
          LOWORD(v54) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildr"
                                          "oot/tmp/debug/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c";
          v55 = g_zc;
          v103 = 100;
        }
        HIWORD(v54) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tm"
                                    "p/debug/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c" >> 16;
        v56 = zlog(v55, v54, 165, "hardware_init", 13, v53, v103, v112);
      }
      ++v45;
    }
    while ( v45 != v36 );
    v88 = 0;
    opt_custom_freq = eeprom_get_min_freq(v56);
    opt_custom_voltage = eeprom_get_max_voltage();
    V_LOCK(opt_custom_voltage);
    v89 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v89);
    v90 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "hardware_init",
            13,
            782,
            40,
            v112);
    V_LOCK(v90);
    v91 = logfmt_raw((int)v112, 0x1000u);
    V_UNLOCK(v91);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "hardware_init",
      13,
      783,
      40,
      v112);
    v110 = 0;
    v92 = get_all_created_runtime(&v110);
    if ( v110 > 0 )
    {
      v93 = v92 - 4;
      do
      {
        V_LOCK(v92);
        v93 += 4;
        v94 = logfmt_raw((int)v112, 0x1000u);
        V_UNLOCK(v94);
        v95 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                165,
                "show_backend_info",
                17,
                40,
                20,
                v112);
        V_LOCK(v95);
        ++v88;
        v96 = logfmt_raw((int)v112, 0x1000u);
        V_UNLOCK(v96);
        v92 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                165,
                "show_backend_info",
                17,
                41,
                20,
                v112);
      }
      while ( v88 < v110 );
    }
    return 0;
  }
}
