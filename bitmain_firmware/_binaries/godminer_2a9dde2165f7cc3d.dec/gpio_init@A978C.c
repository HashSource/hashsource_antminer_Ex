int gpio_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18D4DC )
  {
    V_LOCK(*(_DWORD *)"gpio re init");
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
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
    pthread_mutex_init(&stru_18D4E0, 0);
    dword_18D4F8 = new_c_map(sub_A977C, 0, 0);
    pthread_mutex_init(&stru_18D4FC, 0);
    pthread_create((pthread_t *)&dword_18D514, 0, (void *(*)(void *))sub_AA944, 0);
    dword_18D4DC = 1;
  }
  return 0;
}
