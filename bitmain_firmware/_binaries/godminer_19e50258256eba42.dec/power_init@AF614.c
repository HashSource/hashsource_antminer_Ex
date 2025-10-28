int __fastcall power_init(char a1, int a2)
{
  int (**v3)(); // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  int (**v6)(); // r0
  int (**v7)(); // r0
  int v9; // [sp+10h] [bp-1024h] BYREF
  char v10; // [sp+17h] [bp-101Dh]
  _BYTE v11[24]; // [sp+1Ch] [bp-1018h] BYREF
  int j; // [sp+101Ch] [bp-18h]
  int i; // [sp+1020h] [bp-14h]
  int power_status; // [sp+1024h] [bp-10h]
  void *all_created_runtime; // [sp+1028h] [bp-Ch]
  unsigned __int16 v16; // [sp+102Ch] [bp-8h]
  unsigned __int16 v17; // [sp+102Eh] [bp-6h]

  v9 = a2;
  v10 = a1;
  power_status = 0;
  all_created_runtime = get_all_created_runtime(&v9);
  if ( (unsigned __int8)platform_is_adjustable_power() != 1 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s, current algo donot use adjustable power!", "power_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      296,
      100,
      v11);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Sweep error string = %s.", "V:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "power_init",
      10,
      297,
      100,
      v11);
    return -1;
  }
  else
  {
    v16 = bitmain_power_version();
    if ( platform_is_psu_supported(v16) )
    {
      if ( (unsigned __int8)platform_is_pic_mcu_en() != 1 )
      {
        v16 = bitmain_set_watchdog(0);
        if ( v16 )
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "disable power watchdog: %04x", v16);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "power_init",
            10,
            310,
            100,
            v11);
          return power_status;
        }
        sleep(1u);
      }
      power_off();
      if ( v10 )
      {
        fan_pwm_set(0);
        while ( 1 )
          sleep(0xAu);
      }
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Initializing the power, please wait, this may take up 1 minute...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        322,
        60,
        v11);
      sleep(0x3Cu);
      if ( (unsigned __int8)platform_is_pic_mcu_en() != 1 )
        sub_AEC88();
      v17 = bitmain_power_fw_version();
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "bitmain power fw version: %04x", v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        331,
        60,
        v11);
      byte_5AD609 = 0;
      dword_5AD60C = 0;
      dword_5AD610 = 0;
      byte_5AD5F0 = 1;
      if ( opt_custom_voltage_swith || is_eeprom_loaded() )
        dword_5AD5FC = opt_custom_voltage;
      dword_5AD5FC = 1200;
      byte_5AD5F4 = platform_is_adjustable_power();
      byte_5AD600 = platform_is_check_asic_voltage_enable();
      dword_5AD604 = platfrom_get_check_asic_voltage();
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Power init:");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        356,
        40,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "current_voltage_raw\t\t= %d", dword_5AD60C);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        357,
        40,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "working_voltage_raw\t\t= %d", dword_5AD5FC);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        358,
        40,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_enable\t= %d", (unsigned __int8)byte_5AD600);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        359,
        40,
        v11);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "check_asic_voltage_raw\t= %d", dword_5AD604);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        360,
        40,
        v11);
      if ( is_check_asic_voltage_enable() )
        power_status = set_check_asic_voltage(0);
      else
        power_status = set_working_voltage(0);
      if ( power_status )
      {
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "set_voltage_by_steps error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "power_init",
          10,
          368,
          100,
          v11);
        return -1;
      }
      else
      {
        for ( i = 0; i <= 19; ++i )
        {
          if ( v16 == 113 || v16 == 116 )
          {
            power_status = 0;
            break;
          }
          power_status = bitmain_get_power_status();
          if ( !power_status )
          {
            power_status = 0;
            break;
          }
          if ( !((i + 1) % 5) )
          {
            V_LOCK();
            logfmt_raw(v11, 0x1000u, 0, ">> bitmain_get_power_status failed(%d) <<", power_status);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/miner_util/power_api.c",
              150,
              "power_init",
              10,
              382,
              100,
              v11);
          }
          sleep(3u);
        }
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "bitmain_get_power_status end!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/power_api.c",
          150,
          "power_init",
          10,
          389,
          40,
          v11);
        power_on();
        if ( sub_AE4F0() )
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "check_feedback_voltage error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "power_init",
            10,
            411,
            100,
            v11);
          return -1;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "check_feedback_voltage end!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/power_api.c",
            150,
            "power_init",
            10,
            416,
            40,
            v11);
          if ( opt_algo == 11 || opt_algo == 12 )
          {
            usleep((__useconds_t)&stru_186A0);
            for ( j = 0; j < v9; ++j )
            {
              v3 = dev_ctrl();
              ((void (__fastcall *)(int))v3[12])(j);
            }
            usleep((__useconds_t)&stru_186A0);
            for ( j = 0; j < v9; ++j )
            {
              v4 = dev_ctrl();
              ((void (__fastcall *)(int))v4[13])(j);
            }
            usleep((__useconds_t)&stru_186A0);
            for ( j = 0; j < v9; ++j )
            {
              v5 = dev_ctrl();
              ((void (__fastcall *)(int))v5[12])(j);
            }
            usleep((__useconds_t)&stru_186A0);
            for ( j = 0; j < v9; ++j )
            {
              v6 = dev_ctrl();
              ((void (__fastcall *)(int))v6[13])(j);
            }
            usleep((__useconds_t)&stru_186A0);
            for ( j = 0; j < v9; ++j )
            {
              v7 = dev_ctrl();
              ((void (__fastcall *)(int))v7[12])(j);
            }
          }
          return power_status;
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Not support power version, %04x", v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/power_api.c",
        150,
        "power_init",
        10,
        303,
        100,
        v11);
      return -1;
    }
  }
}
