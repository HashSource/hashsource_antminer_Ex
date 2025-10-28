int __fastcall check_fan_valiad(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r6
  int max_num; // r4
  unsigned int v8; // r11
  int v9; // r5
  int i; // r7
  int v11; // r0
  int realtime_speed; // r10
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _BYTE v18[32]; // [sp+40h] [bp-1024h] BYREF
  _BYTE v19[4100]; // [sp+60h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    a1 = fan_init();
    fan_inited = 1;
  }
  v1 = green_led_off(a1);
  v2 = red_led_off(v1);
  v3 = fan_pwm_set_max(v2);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/miner_util/check_fan.c",
         143,
         "check_fan_valiad",
         16,
         34,
         60,
         v19);
  v6 = 0;
  max_num = fan_get_max_num(v5);
  while ( 1 )
  {
    v8 = ++v6 % 0x14;
    if ( max_num <= 0 )
      break;
    v9 = 0;
    for ( i = 0; i != max_num; ++i )
    {
      v11 = i;
      realtime_speed = fan_get_realtime_speed(v11);
      if ( realtime_speed != -1 && fan_get_check_fan_speed() <= realtime_speed )
        ++v9;
    }
    v13 = usleep((__useconds_t)&loc_7A120);
    if ( v8 )
    {
      if ( max_num <= v9 )
        goto LABEL_16;
      goto LABEL_12;
    }
LABEL_15:
    v13 = fan_pwm_set_max(v13);
    if ( max_num <= v9 )
      goto LABEL_16;
LABEL_12:
    if ( v6 == 120 * (v6 / 0x78) )
    {
      V_LOCK(v13);
      V_STR((int)v18, "error");
      v14 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v14);
      v15 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/check_fan.c",
              143,
              "check_fan_valiad",
              16,
              52,
              100,
              v19);
      power_off(v15);
    }
  }
  v13 = usleep((__useconds_t)&loc_7A120);
  if ( !v8 )
  {
    v9 = 0;
    goto LABEL_15;
  }
LABEL_16:
  V_LOCK(v13);
  v16 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/check_fan.c",
    143,
    "check_fan_valiad",
    16,
    57,
    60,
    v19);
  return fan_pwm_set(60);
}
