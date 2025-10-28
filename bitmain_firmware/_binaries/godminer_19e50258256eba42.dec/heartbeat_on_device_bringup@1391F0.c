void __noreturn heartbeat_on_device_bringup()
{
  _BYTE v0[24]; // [sp+1Ch] [bp-1018h] BYREF
  int v1; // [sp+101Ch] [bp-18h]
  int *v2; // [sp+1020h] [bp-14h]
  signed int v3; // [sp+1024h] [bp-10h]
  int v4; // [sp+1028h] [bp-Ch]
  unsigned int i; // [sp+102Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "heartbeat_on_device_bringup thread");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "heartbeat_on_device_bringup",
    27,
    8693,
    60,
    v0);
  v2 = (int *)calloc(6u, 8u);
  v1 = pwm_init(0, 6000);
  for ( i = 0; ; ++i )
  {
    if ( (i & 1) == 0 && g_test_state == 1 )
    {
      read_temperature_hashboard_eth_2282(g_this, (int)v2);
      if ( v2[1] <= 86 )
      {
        if ( v2[1] > 83 )
          v4 = 0;
        else
          v4 = -2;
      }
      else
      {
        v4 = 2;
      }
      v3 += v4;
      if ( v3 <= 100 )
      {
        if ( v3 < 0 )
          v3 = 0;
      }
      else
      {
        v3 = 100;
      }
      pwm_set(v1, v3);
      V_LOCK();
      logfmt_raw(v0, 0x1000u, 0, "############################################### PWM SET %d ##", v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "heartbeat_on_device_bringup",
        27,
        8723,
        60,
        v0);
    }
    if ( !(i % 0xA) )
      pic1704_heart_beat(0);
    sleep(1u);
  }
}
