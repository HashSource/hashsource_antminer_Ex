int __fastcall hardware_init(int a1)
{
  char pic_device_high; // r0
  int (*v3)(); // r4
  int chain_num; // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  int v7; // r0
  int (**v8)(); // r0
  int v9; // r0
  _BYTE v12[16]; // [sp+34h] [bp-1050h] BYREF
  int v13[13]; // [sp+1034h] [bp-50h] BYREF
  int v14; // [sp+1068h] [bp-1Ch]
  int device_num; // [sp+106Ch] [bp-18h]
  int i; // [sp+1070h] [bp-14h]
  int v17; // [sp+1074h] [bp-10h]

  v17 = -1;
  v14 = machine_info_init();
  if ( v14 )
    return v14;
  sub_99294(a1);
  platform_get_fan_control_info((int)v13);
  fan_control_info_init(
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v13[7],
    v13[8],
    v13[9],
    v13[10],
    v13[11],
    v13[12]);
  if ( platform_is_pic_mcu_en() )
  {
    pic_device_high = platform_get_pic_device_high(0);
    set_pic_device_high(pic_device_high);
  }
  v3 = dev_ctrl()[3];
  chain_num = platform_get_chain_num();
  if ( ((int (__fastcall *)(int))v3)(chain_num) )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "hardware_init",
      13,
      1138,
      100,
      v12);
    return 31;
  }
  else
  {
    check_fan_valiad();
    device_num = query_device_num();
    if ( device_num > 0 )
    {
      for ( i = 0; i < device_num; ++i )
      {
        v5 = dev_ctrl();
        ((void (__fastcall *)(int))v5[13])(i);
        if ( !runtime_ctrl(a1) )
        {
          V_LOCK();
          logfmt_raw(v12, 0x1000u, 0, "runtime ctrl error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "hardware_init",
            13,
            1158,
            80,
            v12);
          return 31;
        }
      }
      for ( i = 0; i < device_num; ++i )
      {
        V_LOCK();
        v6 = dev_ctrl();
        v7 = ((int (__fastcall *)(int))v6[15])(i);
        logfmt_raw(v12, 0x1000u, 0, "eeprom add device: %d", v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          1165,
          60,
          v12);
        v8 = dev_ctrl();
        v9 = ((int (__fastcall *)(int))v8[15])(i);
        add_eeprom_device(v9);
      }
      v17 = eeprom_load();
      if ( v17 )
      {
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "EEPROM load error!, pls check it");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          1198,
          100,
          v12);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "Sweep error string = %s.", "J255:4");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          1199,
          100,
          v12);
      }
      if ( !v17 )
      {
        opt_custom_freq = eeprom_get_min_freq();
        opt_custom_voltage = eeprom_get_max_voltage();
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          1349,
          40,
          v12);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "hardware_init",
          13,
          1350,
          40,
          v12);
      }
      sub_99108();
      return v14;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "hardware_init",
        13,
        1149,
        100,
        v12);
      return 31;
    }
  }
}
