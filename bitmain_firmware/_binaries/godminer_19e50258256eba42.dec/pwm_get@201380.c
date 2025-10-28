int __fastcall pwm_get(int a1, _DWORD *a2)
{
  char v5[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v6[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v7; // [sp+181Ch] [bp-8h]

  v7 = -5;
  if ( a1 - 1 <= 1 )
  {
    if ( a1 == 1 )
    {
      fpga_read(132, a2);
      *a2 >>= 16;
      snprintf(v5, 0x800u, "duty of fpga = 0x%x", *a2);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_pwm.c",
        177,
        "pwm_get",
        7,
        109,
        20,
        v6);
      return 0;
    }
    return v7;
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
      "pwm_get",
      7,
      101,
      100,
      v6);
    return -3;
  }
}
