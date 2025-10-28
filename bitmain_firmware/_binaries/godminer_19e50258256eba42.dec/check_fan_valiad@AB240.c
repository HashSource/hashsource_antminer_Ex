__int64 check_fan_valiad()
{
  int fan_max_speed; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  _BYTE v5[44]; // [sp+50h] [bp-106Ch] BYREF
  _DWORD v6[7]; // [sp+1050h] [bp-6Ch] BYREF
  int v7; // [sp+106Ch] [bp-50h]
  _DWORD v8[8]; // [sp+1070h] [bp-4Ch] BYREF
  int realtime_speed; // [sp+1090h] [bp-2Ch]
  int v10; // [sp+1094h] [bp-28h]
  int fan_num; // [sp+1098h] [bp-24h]
  int v12; // [sp+109Ch] [bp-20h]
  int v13; // [sp+10A0h] [bp-1Ch]
  int i; // [sp+10A4h] [bp-18h]
  int j; // [sp+10A8h] [bp-14h]
  int k; // [sp+10ACh] [bp-10h]

  v13 = 0;
  if ( fan_inited != 1 )
  {
    fan_init();
    fan_inited = 1;
  }
  green_led_off();
  red_led_off();
  fan_pwm_set_max();
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "Begain check_fan_valiad");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_fan.c",
    150,
    "check_fan_valiad",
    16,
    31,
    60,
    v5);
  fan_num = platform_get_fan_num();
  v12 = 0;
  do
  {
    v12 = 0;
    for ( i = 0; i < fan_num; ++i )
    {
      realtime_speed = fan_get_realtime_speed(i);
      if ( realtime_speed != -1 )
      {
        fan_max_speed = platform_get_fan_max_speed(i);
        v1 = fan_get_check_fan_speed(fan_max_speed);
        if ( realtime_speed >= v1 )
          ++v12;
      }
    }
    usleep(0x7A120u);
    if ( !(++v13 % 20) )
      fan_pwm_set_max();
    if ( v12 < fan_num && !(v13 % 120) )
    {
      red_led_on();
      for ( j = 0; j < fan_num; ++j )
      {
        v10 = fan_get_realtime_speed(j);
        if ( v10 != -1 )
        {
          v2 = platform_get_fan_max_speed(j);
          v3 = fan_get_check_fan_speed(v2);
          if ( v10 >= v3 )
            continue;
        }
        V_LOCK();
        sub_AB1D8((int)v6, j);
        sub_AB20C((int)v8, v10 & ~(v10 >> 31));
        logfmt_raw(
          v5,
          0x1000u,
          0,
          v7,
          v6[0],
          v6[1],
          v6[2],
          v6[3],
          v6[4],
          v6[5],
          v6[6],
          v7,
          v8[0],
          v8[1],
          v8[2],
          v8[3],
          v8[4],
          v8[5],
          v8[6],
          v8[7],
          "%2d(corresponding to FAN%s on control board PCB)",
          j,
          fan_name[j]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_fan.c",
          150,
          "check_fan_valiad",
          16,
          52,
          100,
          v5);
        set_miner_6060info_status_fan_err(j, 1);
      }
    }
  }
  while ( v12 < fan_num );
  for ( k = 0; k < fan_num; ++k )
    set_miner_6060info_status_fan_err(k, 0);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "check_fan_speed ok, fan_num = %d", v12);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/check_fan.c",
           150,
           "check_fan_valiad",
           16,
           61,
           60,
           v5);
}
