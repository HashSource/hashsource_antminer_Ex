int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v4; // [sp+14h] [bp-1808h] BYREF
  char v5[2048]; // [sp+18h] [bp-1804h] BYREF
  int v6; // [sp+818h] [bp-1004h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_C25ACC) )
    {
      strcpy(v5, "fail to lock gpio ctrl mutex");
      V_LOCK();
      logfmt_raw(&v6, 0x1000u, 0, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
        178,
        "gpio_unreg_callback",
        19,
        189,
        100,
        &v6);
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_C25AE4, (int)&v4) )
      {
        snprintf(v5, 0x800u, "remove %d from callback list", v4);
        V_LOCK();
        logfmt_raw(&v6, 0x1000u, 0, v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_unreg_callback",
          19,
          195,
          20,
          &v6);
        remove_c_map((int *)dword_C25AE4, (int)&v4);
      }
      else
      {
        strcpy(v5, "callback function not registered before");
        V_LOCK();
        logfmt_raw(&v6, 0x1000u, 0, v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_unreg_callback",
          19,
          200,
          80,
          &v6);
      }
      pthread_mutex_unlock(&stru_C25ACC);
      return 0;
    }
  }
  else
  {
    strcpy(v5, "bad param");
    V_LOCK();
    logfmt_raw(&v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_unreg_callback",
      19,
      183,
      100,
      &v6);
    return -1;
  }
}
