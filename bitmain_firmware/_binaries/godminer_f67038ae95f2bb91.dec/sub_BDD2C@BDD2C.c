int sub_BDD2C()
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%s mmap fpga_addr_hal failed!", "fpga_read");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
    175,
    "fpga_read",
    9,
    88,
    100,
    v2);
  munmap((void *)0xFFFFFFFF, 0x1000u);
  pthread_mutex_unlock(&stru_1B3264);
  return -1;
}
