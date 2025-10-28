int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16C1BC )
  {
    strcpy(v1, "gpio re init");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_init",
      9,
      97,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_16C1C0, 0);
    dword_16C1D8 = (int)new_c_map((int)sub_AF1B8, 0, 0);
    pthread_mutex_init(&stru_16C1DC, 0);
    pthread_create((pthread_t *)&dword_16C1F4, 0, (void *(*)(void *))sub_B0380, 0);
    dword_16C1BC = 1;
  }
  return 0;
}
