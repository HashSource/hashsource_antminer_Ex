int __fastcall gpio_write(int a1, char a2)
{
  char v6[2048]; // [sp+1Ch] [bp-1848h] BYREF
  _BYTE v7[8]; // [sp+81Ch] [bp-1048h] BYREF
  char s[64]; // [sp+181Ch] [bp-48h] BYREF
  int fd; // [sp+185Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_C25AB4) )
  {
    strcpy(v6, "failed to api lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_write",
      10,
      415,
      100,
      v7);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( write(fd, &a01[a2 != 0], 1u) >= 0 )
      {
        close(fd);
        pthread_mutex_unlock(&stru_C25AB4);
        return 0;
      }
      else
      {
        strcpy(v6, "Failed to write value!");
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_write",
          10,
          429,
          100,
          v7);
        close(fd);
        pthread_mutex_unlock(&stru_C25AB4);
        return -3;
      }
    }
    else
    {
      strcpy(v6, "Failed to open gpio value for writing!");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
        178,
        "gpio_write",
        10,
        423,
        100,
        v7);
      pthread_mutex_unlock(&stru_C25AB4);
      return -2;
    }
  }
}
