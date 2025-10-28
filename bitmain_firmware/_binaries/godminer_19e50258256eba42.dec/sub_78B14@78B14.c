int __fastcall sub_78B14(int a1)
{
  int v1; // r3
  int v4; // [sp+18h] [bp-1004h] BYREF

  v1 = a1;
  if ( a1 != -64 )
  {
    if ( a1 >= -10 )
    {
      v1 = a1;
      if ( a1 <= 34 )
      {
        V_LOCK();
        logfmt_raw(&v4, 0x1000u, 0, "bringup temp: %d", a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
          179,
          "calc_startup_fan_pwm_dcr_1727",
          29,
          64,
          40,
          &v4);
        return 60;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, "bringup temp: %d", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
        179,
        "calc_startup_fan_pwm_dcr_1727",
        29,
        60,
        40,
        &v4);
      return 20;
    }
  }
  return v1;
}
