int __fastcall pwm_set(int a1, unsigned int a2)
{
  unsigned __int16 v3; // r3
  char v5[12]; // [sp+18h] [bp-180Ch] BYREF
  _WORD v6[2050]; // [sp+818h] [bp-100Ch] BYREF
  int v7; // [sp+181Ch] [bp-8h]

  if ( a1 - 1 <= 1 )
  {
    v3 = a2;
    if ( a2 >= 0x64 )
      v3 = 100;
    v6[2048] = v3;
    v6[2049] = 100 - v3;
    v7 = (v3 << 16) | (unsigned __int16)(100 - v3);
    if ( a1 == 1 )
    {
      fpga_write(132, v7);
      fpga_write(160, v7);
    }
    else
    {
      snprintf(v5, 0x800u, "pwm type %d not supported", a1 - 1);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
        177,
        "pwm_set",
        7,
        81,
        100,
        v6);
    }
    return 0;
  }
  else
  {
    strcpy(v5, "bad param");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
      177,
      "pwm_set",
      7,
      62,
      100,
      v6);
    return -3;
  }
}
