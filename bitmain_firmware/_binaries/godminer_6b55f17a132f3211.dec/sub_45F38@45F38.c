int __fastcall sub_45F38(int result)
{
  int v1; // r0
  int v2; // r0
  _BYTE v3[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( result != -64 )
  {
    if ( result < -10 )
    {
      V_LOCK(result);
      v1 = logfmt_raw((int)v3, 0x1000u);
      V_UNLOCK(v1);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
        178,
        "calc_startup_fan_pwm_dcr_1727",
        29,
        60,
        40,
        v3);
      return 20;
    }
    else if ( result <= 34 )
    {
      V_LOCK(result);
      v2 = logfmt_raw((int)v3, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/machine_runtime/dcr_1727/machine_runtime_dcr_1727.c",
        178,
        "calc_startup_fan_pwm_dcr_1727",
        29,
        64,
        40,
        v3);
      return 60;
    }
  }
  return result;
}
