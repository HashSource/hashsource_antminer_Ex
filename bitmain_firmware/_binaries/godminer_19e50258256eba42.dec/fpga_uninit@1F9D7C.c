void fpga_uninit()
{
  char v0[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v1[8]; // [sp+814h] [bp-1008h] BYREF
  int v2; // [sp+1814h] [bp-8h]

  if ( dword_C25A94 )
  {
    v2 = munmap((void *)dword_C25A9C, 0x100000u);
    if ( v2 < 0 )
    {
      strcpy(v0, "munmap axi_fpga_addr_hal failed!");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
        178,
        "fpga_uninit",
        11,
        95,
        100,
        v1);
    }
    v2 = munmap((void *)dword_C25AA4, 0x1000000u);
    if ( v2 < 0 )
    {
      strcpy(v0, "munmap fpga_mem_addr_hal failed!");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
        178,
        "fpga_uninit",
        11,
        101,
        100,
        v1);
    }
    dword_C25A94 = 0;
    close(dword_C25A98);
  }
}
