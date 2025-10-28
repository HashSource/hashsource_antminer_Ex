int ltc_dev_init()
{
  char v2[4]; // [sp+10h] [bp-1804h] BYREF
  int v3; // [sp+810h] [bp-1004h] BYREF

  if ( dword_C25B88 )
    return 0;
  dword_C25B7C = open("/dev/ltc_mem", 2);
  if ( dword_C25B7C >= 0 )
  {
    dword_C25B84 = (int)mmap(0, 0x200000u, 3, 1, dword_C25B7C, 0);
    if ( dword_C25B84 )
    {
      snprintf(v2, 0x800u, "fpga_init success. axi_fpga_addr_hal = 0x%x", dword_C25B84);
      V_LOCK();
      logfmt_raw(&v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_mbist.c",
        179,
        "ltc_dev_init",
        12,
        72,
        20,
        &v3);
      dword_C25B88 = 1;
      return 0;
    }
    else
    {
      snprintf(v2, 0x800u, "mmap axi_fpga_addr_hal failed. axi_fpga_addr_hal = 0x%x", 0);
      V_LOCK();
      logfmt_raw(&v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_mbist.c",
        179,
        "ltc_dev_init",
        12,
        66,
        100,
        &v3);
      close(dword_C25B7C);
      return -2;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d", dword_C25B7C);
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_mbist.c",
      179,
      "ltc_dev_init",
      12,
      58,
      100,
      &v3);
    return -1;
  }
}
