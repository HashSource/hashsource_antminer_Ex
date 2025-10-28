int fpga_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v5[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18D4D4 )
    return 0;
  dword_18D4D8 = open64("/dev/mem");
  if ( dword_18D4D8 < 0 )
  {
    v2 = snprintf(s, 0x800u, "/dev/mem open failed. fd = %d", dword_18D4D8);
    V_LOCK(v2);
    v3 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
      175,
      "fpga_init",
      9,
      40,
      100,
      v5);
    return -1;
  }
  else
  {
    strcpy(s, "fpga_init success.");
    V_LOCK(*(_DWORD *)"fpga_init success.");
    v1 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
      175,
      "fpga_init",
      9,
      44,
      20,
      v5);
    dword_18D4D4 = 1;
    return 0;
  }
}
