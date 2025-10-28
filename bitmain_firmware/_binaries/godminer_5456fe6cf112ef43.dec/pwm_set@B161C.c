int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  unsigned int v6; // r5
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_pwm.c",
      168,
      "pwm_set",
      7,
      62,
      100,
      v9);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      if ( a2 >= 0x64 )
        a2 = 100;
      v6 = (unsigned __int16)(dword_16C218[0] * (100 - a2) / 0x64) | ((dword_16C218[0] * a2 / 0x64) << 16);
      fpga_write(132, v6);
      fpga_write(160, v6);
      return v2;
    }
    else
    {
      v3 = snprintf(s, 0x800u, "pwm type %d not supported", a1 - 1);
      V_LOCK(v3);
      v4 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_pwm.c",
        168,
        "pwm_set",
        7,
        81,
        100,
        v9);
      return 0;
    }
  }
}
