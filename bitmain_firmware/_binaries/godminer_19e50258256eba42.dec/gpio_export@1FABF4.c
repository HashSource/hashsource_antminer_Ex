int __fastcall gpio_export(int a1)
{
  char v4[2048]; // [sp+18h] [bp-184Ch] BYREF
  _BYTE v5[12]; // [sp+818h] [bp-104Ch] BYREF
  char s[64]; // [sp+1818h] [bp-4Ch] BYREF
  int fd; // [sp+1858h] [bp-Ch]
  size_t n; // [sp+185Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_C25AB4) )
  {
    strcpy(v4, "failed to api lock");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_export",
      11,
      221,
      100,
      v5);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      fd = open("/sys/class/gpio/export", 1);
      if ( fd >= 0 )
      {
        n = snprintf(s, 0x40u, "%d", a1);
        if ( write(fd, s, n) >= 0 )
        {
          snprintf(v4, 0x800u, "export gpio %d success", a1);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
            178,
            "gpio_export",
            11,
            251,
            20,
            v5);
          close(fd);
          pthread_mutex_unlock(&stru_C25AB4);
          return 0;
        }
        else
        {
          snprintf(v4, 0x800u, "Failed to export gpio %d!", a1);
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, v4);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
            178,
            "gpio_export",
            11,
            246,
            100,
            v5);
          close(fd);
          pthread_mutex_unlock(&stru_C25AB4);
          return -3;
        }
      }
      else
      {
        strcpy(v4, "Failed to open export for writing!");
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_export",
          11,
          238,
          100,
          v5);
        pthread_mutex_unlock(&stru_C25AB4);
        return -2;
      }
    }
    else
    {
      snprintf(v4, 0x800u, "port %d already exported", a1);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
        178,
        "gpio_export",
        11,
        229,
        80,
        v5);
      pthread_mutex_unlock(&stru_C25AB4);
      return 0;
    }
  }
}
