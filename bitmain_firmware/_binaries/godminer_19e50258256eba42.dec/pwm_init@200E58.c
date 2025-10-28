int __fastcall pwm_init(unsigned int a1, int a2)
{
  char v4[2048]; // [sp+18h] [bp-1804h] BYREF
  int v5; // [sp+818h] [bp-1004h] BYREF

  if ( platform_inited )
  {
    if ( a1 <= 1 )
    {
      *((_DWORD *)&unk_C25B8C + 2 * a1) = a2;
      *((_BYTE *)&unk_C25B8C + 8 * a1 + 4) = 1;
      return a1 + 1;
    }
    else
    {
      strcpy(v4, "bad param");
      V_LOCK();
      logfmt_raw(&v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
        177,
        "pwm_init",
        8,
        30,
        100,
        &v5);
      return -3;
    }
  }
  else
  {
    strcpy(v4, "please init platform first!!");
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
      177,
      "pwm_init",
      8,
      25,
      100,
      &v5);
    return -2;
  }
}
