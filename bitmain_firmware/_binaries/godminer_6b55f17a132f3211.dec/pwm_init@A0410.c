int __fastcall pwm_init(unsigned int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r0
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
  {
    if ( a1 > 1 )
    {
      V_LOCK(*(_DWORD *)"bad param");
      v4 = logfmt_raw((int)v6, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_pwm.c",
        170,
        "pwm_init",
        8,
        30,
        100,
        v6);
      return -3;
    }
    else
    {
      result = a1 + 1;
      dword_177120[2 * a1] = a2;
      LOBYTE(dword_177120[2 * a1 + 1]) = 1;
    }
  }
  else
  {
    V_LOCK(*(_DWORD *)"form first!!");
    v5 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_pwm.c",
      170,
      "pwm_init",
      8,
      25,
      100,
      v6);
    return -2;
  }
  return result;
}
