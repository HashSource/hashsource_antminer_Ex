int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_1B3284 )
  {
    strcpy(v1, "gpio re init");
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      175,
      "gpio_init",
      9,
      97,
      80,
      v2);
  }
  else
  {
    pthread_mutex_init(&stru_1B3288, 0);
    dword_1B32A0 = (int)new_c_map((int)sub_BE1D0, 0, 0);
    pthread_mutex_init(&stru_1B32A4, 0);
    pthread_create((pthread_t *)&dword_1B32BC, 0, (void *(*)(void *))sub_BF398, 0);
    dword_1B3284 = 1;
  }
  return 0;
}
