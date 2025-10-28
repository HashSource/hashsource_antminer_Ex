int gpio_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_16C1C4 )
  {
    V_LOCK(*(_DWORD *)"gpio re init");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
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
    pthread_mutex_init(&stru_16C1C8, 0);
    dword_16C1E0 = new_c_map(sub_AF328, 0, 0);
    pthread_mutex_init(&stru_16C1E4, 0);
    pthread_create((pthread_t *)&dword_16C1FC, 0, (void *(*)(void *))sub_B04F0, 0);
    dword_16C1C4 = 1;
  }
  return 0;
}
