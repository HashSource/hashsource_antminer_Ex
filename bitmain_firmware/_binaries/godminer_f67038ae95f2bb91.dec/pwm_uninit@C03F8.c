int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1808h] BYREF
  char v3[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    strcpy(v2, "bad param");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/device/hal/platform/7020/7020_pwm.c",
             174,
             "pwm_uninit",
             10,
             41,
             100,
             v3);
  }
  else
  {
    result = a1 - 1;
    dword_1B32D8[2 * result] = 0;
    LOBYTE(dword_1B32D8[2 * result + 1]) = 0;
  }
  return result;
}
