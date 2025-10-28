int platform_init()
{
  char v2[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h] BYREF

  if ( platform_inited )
    return 0;
  strcpy(v2, "platform_init");
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
    180,
    "platform_init",
    13,
    63,
    60,
    v3);
  if ( fpga_init() )
  {
    strcpy(v2, "fpga init failed");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "platform_init",
      13,
      67,
      100,
      v3);
    return -1;
  }
  else if ( gpio_init() )
  {
    strcpy(v2, "gpio init failed");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "platform_init",
      13,
      73,
      100,
      v3);
    return -2;
  }
  else
  {
    memset(&unk_C25970, 0, 0x124u);
    v4 = 0;
    fpga_read(4, &v4);
    snprintf(v2, 0x800u, "HARDWARE_VERSION = 0x%x", v4);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "platform_init",
      13,
      86,
      40,
      v3);
    fpga_write(4, v4);
    platform_inited = 1;
    fan_init();
    uart_init();
    return 0;
  }
}
