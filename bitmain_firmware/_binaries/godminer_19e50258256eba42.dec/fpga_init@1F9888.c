int fpga_init()
{
  char v2[4]; // [sp+10h] [bp-1804h] BYREF
  int v3; // [sp+810h] [bp-1004h] BYREF

  if ( dword_C25A94 )
    return 0;
  dword_C25A98 = open("/dev/axi_fpga_dev", 2);
  if ( dword_C25A98 >= 0 )
  {
    dword_C25A9C = (int)mmap(0, 0x100000u, 3, 1, dword_C25A98, 0);
    if ( dword_C25A9C )
    {
      snprintf(v2, 0x800u, "fpga_init success. axi_fpga_addr_hal = 0x%x", dword_C25A9C);
      V_LOCK();
      logfmt_raw(&v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
        178,
        "fpga_init",
        9,
        59,
        20,
        &v3);
      dword_C25AA0 = open("/dev/fpga_mem", 2);
      if ( dword_C25AA0 >= 0 )
      {
        dword_C25AA4 = (int)mmap(0, 0x1000000u, 3, 1, dword_C25AA0, 0);
        if ( dword_C25AA4 )
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal = 0x%x", dword_C25AA4);
          V_LOCK();
          logfmt_raw(&v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
            178,
            "fpga_init",
            9,
            76,
            40,
            &v3);
          dword_C25A94 = 1;
          return 0;
        }
        else
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x", 0);
          V_LOCK();
          logfmt_raw(&v3, 0x1000u, 0, v2);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
            178,
            "fpga_init",
            9,
            73,
            100,
            &v3);
          return -1;
        }
      }
      else
      {
        snprintf(v2, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d", dword_C25AA0);
        V_LOCK();
        logfmt_raw(&v3, 0x1000u, 0, v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
          178,
          "fpga_init",
          9,
          64,
          100,
          &v3);
        perror("open");
        return -1;
      }
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
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
        178,
        "fpga_init",
        9,
        53,
        100,
        &v3);
      close(dword_C25A98);
      return -2;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d", dword_C25A98);
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_fpga.c",
      178,
      "fpga_init",
      9,
      45,
      100,
      &v3);
    return -1;
  }
}
