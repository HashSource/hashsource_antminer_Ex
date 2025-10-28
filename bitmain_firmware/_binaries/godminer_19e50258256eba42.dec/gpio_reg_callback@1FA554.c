int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v5; // [sp+14h] [bp-1810h] BYREF
  char v6[2048]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v7[12]; // [sp+818h] [bp-100Ch] BYREF
  _DWORD v8[2]; // [sp+1818h] [bp-Ch] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_C25ACC) )
    {
      strcpy(v6, "fail to lock gpio ctrl mutex");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
        178,
        "gpio_reg_callback",
        17,
        152,
        100,
        v7);
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_C25AE4, (int)&v5) )
      {
        snprintf(v6, 0x800u, "port %d already exist in callback map ", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_reg_callback",
          17,
          165,
          20,
          v7);
      }
      else
      {
        snprintf(v6, 0x800u, "add %d to callback map", v5);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_reg_callback",
          17,
          158,
          20,
          v7);
        v8[0] = a2;
        v8[1] = -1;
        insert_c_map((int *)dword_C25AE4, &v5, 4u, v8, 8u);
      }
      pthread_mutex_unlock(&stru_C25ACC);
      return 0;
    }
  }
  else
  {
    strcpy(v6, "bad param");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_reg_callback",
      17,
      147,
      100,
      v7);
    return -1;
  }
}
