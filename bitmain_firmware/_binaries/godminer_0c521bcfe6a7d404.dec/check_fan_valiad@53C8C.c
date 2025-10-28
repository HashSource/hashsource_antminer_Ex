int check_fan_valiad()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r6
  int fan_num; // r4
  unsigned int v7; // r8
  int v8; // r7
  int i; // r5
  int realtime_speed; // r9
  int v11; // r0
  int fan_max_speed; // r0
  int v13; // r0
  unsigned int v14; // r5
  int v15; // r7
  int v16; // r11
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _BYTE v23[32]; // [sp+70h] [bp-1044h] BYREF
  _BYTE v24[32]; // [sp+90h] [bp-1024h] BYREF
  _BYTE v25[4100]; // [sp+B0h] [bp-1004h] BYREF

  if ( !fan_inited )
  {
    fan_init();
    fan_inited = 1;
  }
  v0 = green_led_off();
  v1 = red_led_off(v0);
  v2 = fan_pwm_set_max(v1);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/check_fan.c",
         153,
         "check_fan_valiad",
         16,
         33,
         60,
         v25);
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
        goto LABEL_21;
      goto LABEL_12;
    }
LABEL_20:
    v13 = fan_pwm_set_max(v13);
    if ( fan_num <= v8 )
      goto LABEL_21;
LABEL_12:
    v14 = v5 % 0x78;
    if ( v5 == 120 * (v5 / 0x78) )
    {
      v15 = 0;
      red_led_on(v13);
      do
      {
        v16 = fan_get_realtime_speed(v14);
        v17 = v14;
        if ( v16 == -1 || (v18 = platform_get_fan_max_speed(v14), v17 = fan_get_check_fan_speed(v18), v17 > v16) )
        {
          V_LOCK(v17);
          V_INT((int)v23, "fanid");
          V_INT((int)v24, "fanspeed");
          v19 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v19);
          v17 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/miner_util/check_fan.c",
                  153,
                  "check_fan_valiad",
                  16,
                  54,
                  100,
                  v25);
        }
        ++v14;
        ++v15;
      }
      while ( fan_num != v14 );
      V_LOCK(v17);
      v20 = logfmt_raw((int)v25, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/check_fan.c",
        153,
        "check_fan_valiad",
        16,
        57,
        100,
        v25);
      set_miner_6060info_status_fan_err(1);
    }
  }
  v13 = usleep((__useconds_t)&loc_7A120);
  if ( !v7 )
  {
    v8 = 0;
    goto LABEL_20;
  }
LABEL_21:
  V_LOCK(v13);
  v21 = logfmt_raw((int)v25, 0x1000u);
  V_UNLOCK(v21);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/miner_util/check_fan.c",
           153,
           "check_fan_valiad",
           16,
           62,
           60,
           v25);
}
