int gpio_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1770CC )
  {
    V_LOCK(*(_DWORD *)"gpio re init");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      171,
      "gpio_init",
      9,
      97,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_1770D0, 0);
    dword_1770E8 = new_c_map(sub_9E270, 0, 0);
    pthread_mutex_init(&stru_1770EC, 0);
    pthread_create((pthread_t *)&dword_177104, 0, (void *(*)(void *))sub_9F438, 0);
    dword_1770CC = 1;
  }
  return 0;
}
