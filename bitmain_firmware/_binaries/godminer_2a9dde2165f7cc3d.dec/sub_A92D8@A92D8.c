int sub_A92D8()
{
  int v0; // r0
  int v1; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v4[4100]; // [sp+810h] [bp-1004h] BYREF

  v0 = snprintf(s, 0x800u, "%s mmap fpga_addr_hal failed!", "fpga_read");
  V_LOCK(v0);
  v1 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_fpga.c",
    175,
    "fpga_read",
    9,
    88,
    100,
    v4);
  munmap((void *)0xFFFFFFFF, 0x1000u);
  pthread_mutex_unlock(&stru_18D4BC);
  return -1;
}
