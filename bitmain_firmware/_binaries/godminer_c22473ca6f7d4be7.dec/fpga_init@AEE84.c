int fpga_init()
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C19C )
    return 0;
  dword_16C1A0 = open64("/dev/mem");
  if ( dword_16C1A0 < 0 )
  {
    snprintf(s, 0x800u, "/dev/mem open failed. fd = %d", dword_16C1A0);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_fpga.c",
      169,
      "fpga_init",
      9,
      40,
      100,
      v2);
    return -1;
  }
  else
  {
    strcpy(s, "fpga_init success.");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_fpga.c",
      169,
      "fpga_init",
      9,
      44,
      20,
      v2);
    dword_16C19C = 1;
    return 0;
  }
}
