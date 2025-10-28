int check_fan_valiad()
{
  unsigned int v0; // r6
  int fan_num; // r4
  unsigned int v2; // r8
  int v3; // r7
  int i; // r5
  int realtime_speed; // r9
  int v6; // r0
  int fan_max_speed; // r0
  unsigned int v8; // r5
  __int64 v9; // kr00_8
  int v10; // r11
  int v11; // r0
  int j; // r5
  int v13; // r0
  _DWORD v15[7]; // [sp+70h] [bp-1044h] BYREF
  int v16; // [sp+8Ch] [bp-1028h]
  _DWORD v17[8]; // [sp+90h] [bp-1024h] BYREF
  char v18[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "Begain check_fan_valiad");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_fan.c",
    153,
    "check_fan_valiad",
    16,
    31,
    60,
    v18);
  v0 = 0;
  fan_num = platform_get_fan_num();
  while ( 1 )
  {
    v2 = ++v0 % 0x14;
    if ( fan_num <= 0 )
    {
      usleep((__useconds_t)&loc_7A120);
      if ( v2 )
      {
        v3 = 0;
        goto LABEL_22;
      }
      v3 = 0;
LABEL_24:
      fan_pwm_set_max();
      goto LABEL_11;
    }
    v3 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v6 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v6);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v3;
      }
    }
    usleep((__useconds_t)&loc_7A120);
    if ( !v2 )
      goto LABEL_24;
LABEL_11:
    if ( fan_num <= v3 )
      break;
    v8 = v0 % 0x78;
    if ( v0 == 120 * (v0 / 0x78) )
    {
      red_led_on();
      v9 = 0;
      do
      {
        v10 = fan_get_realtime_speed(v8);
        if ( v10 == -1 || (v11 = platform_get_fan_max_speed(v8), fan_get_check_fan_speed(v11) > v10) )
        {
          V_LOCK();
          V_INT((int)v15, "fanid", v9);
          V_INT((int)v17, "fanspeed", v10 & ~(v10 >> 31));
          logfmt_raw(
            v18,
            0x1000u,
            0,
            v16,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            v15[5],
            v15[6],
            v16,
            v17[0],
            v17[1],
            v17[2],
            v17[3],
            v17[4],
            v17[5],
            v17[6],
            v17[7],
            "%2d(corresponding to FAN%s on control board PCB)",
            v8,
            (&fan_name)[v8]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/check_fan.c",
            153,
            "check_fan_valiad",
            16,
            52,
            100,
            v18);
          set_miner_6060info_status_fan_err(v8, 1);
        }
        ++v8;
        ++v9;
      }
      while ( fan_num != v8 );
    }
  }
  if ( fan_num > 0 )
  {
    for ( j = 0; j != fan_num; ++j )
    {
      v13 = j;
      set_miner_6060info_status_fan_err(v13, 0);
    }
  }
LABEL_22:
  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "check_fan_speed ok, fan_num = %d", v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/miner_util/check_fan.c",
           153,
           "check_fan_valiad",
           16,
           61,
           60,
           v18);
}
