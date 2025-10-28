int fpga_init()
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B327C )
    return 0;
  dword_1B3280 = open64("/dev/mem");
  if ( dword_1B3280 < 0 )
  {
    snprintf(s, 0x800u, "/dev/mem open failed. fd = %d", dword_1B3280);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
      175,
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
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
      175,
      "fpga_init",
      9,
      44,
      20,
      v2);
    dword_1B327C = 1;
    return 0;
  }
}
