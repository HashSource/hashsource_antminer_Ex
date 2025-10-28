int gpio_init()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  int v2; // [sp+810h] [bp-1004h] BYREF

  if ( dword_C25AA8 )
  {
    strcpy(v1, "gpio re init");
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_init",
      9,
      98,
      80,
      &v2);
  }
  else
  {
    pthread_mutex_init(&stru_C25ACC, 0);
    dword_C25AE4 = (int)new_c_map(2072652, 0, 0);
    pthread_mutex_init(&stru_C25AB4, 0);
    dword_C25AAC = 1;
    pthread_create((pthread_t *)&dword_C25AB0, 0, (void *(*)(void *))sub_1FA084, 0);
    dword_C25AA8 = 1;
  }
  return 0;
}
