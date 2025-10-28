int check_fan_valiad()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r6
  int fan_num; // r4
  unsigned int v7; // r5
  int v8; // r7
  int i; // r10
  int realtime_speed; // r11
  int v11; // r0
  int fan_max_speed; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _BYTE v18[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  v0 = green_led_off();
  v1 = red_led_off(v0);
  v2 = fan_pwm_set_max(v1);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/miner_util/check_fan.c",
         149,
         "check_fan_valiad",
         16,
         32,
         60,
         v18);
  v5 = 0;
  fan_num = platform_get_fan_num(v4);
  while ( 1 )
  {
    v7 = ++v5 % 0x14;
    if ( fan_num <= 0 )
      break;
    v8 = 0;
    for ( i = 0; i != fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      v11 = i;
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(v11);
        if ( fan_get_check_fan_speed(fan_max_speed) <= realtime_speed )
          ++v8;
      }
    }
    v13 = usleep((__useconds_t)&loc_7A120);
    if ( v7 )
    {
      if ( fan_num <= v8 )
        goto LABEL_16;
      goto LABEL_12;
    }
LABEL_15:
    v13 = fan_pwm_set_max(v13);
    if ( fan_num <= v8 )
      goto LABEL_16;
LABEL_12:
    if ( v5 == 120 * (v5 / 0x78) )
    {
      v14 = red_led_on(v13);
      V_LOCK(v14);
      v15 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/check_fan.c",
        149,
        "check_fan_valiad",
        16,
        50,
        100,
        v18);
    }
  }
  v13 = usleep((__useconds_t)&loc_7A120);
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_15;
  }
LABEL_16:
  V_LOCK(v13);
  v16 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v16);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/miner_util/check_fan.c",
           149,
           "check_fan_valiad",
           16,
           54,
           60,
           v18);
}
