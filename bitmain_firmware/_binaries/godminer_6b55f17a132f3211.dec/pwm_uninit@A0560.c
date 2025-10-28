int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int v2; // r0
  _BYTE v3[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    V_LOCK(*(_DWORD *)"bad param");
    v2 = logfmt_raw((int)v3, 0x1000u);
    V_UNLOCK(v2);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/backend/device/hal/platform/7020/7020_pwm.c",
             170,
             "pwm_uninit",
             10,
             41,
             100,
             v3);
  }
  else
  {
    result = a1 - 1;
    dword_177120[2 * result] = 0;
    LOBYTE(dword_177120[2 * result + 1]) = 0;
  }
  return result;
}
