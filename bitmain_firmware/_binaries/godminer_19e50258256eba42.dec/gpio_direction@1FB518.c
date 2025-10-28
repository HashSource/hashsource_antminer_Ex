int __fastcall gpio_direction(int a1, int a2)
{
  int v3; // r2
  size_t v4; // r3
  int v5; // r2
  int v6; // r2
  char v10[2048]; // [sp+1Ch] [bp-1848h] BYREF
  _BYTE v11[8]; // [sp+81Ch] [bp-1048h] BYREF
  char s[64]; // [sp+181Ch] [bp-48h] BYREF
  int fd; // [sp+185Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_C25AB4) )
  {
    strcpy(v10, "failed to api lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
      178,
      "gpio_direction",
      14,
      327,
      100,
      v11);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    fd = open(s, 1);
    if ( fd >= 0 )
    {
      if ( a2 )
        v3 = 3;
      else
        v3 = 0;
      if ( a2 )
        v4 = 3;
      else
        v4 = 2;
      if ( write(fd, &aIn[v3], v4) >= 0 )
      {
        if ( a2 )
          v6 = 3;
        else
          v6 = 0;
        snprintf(v10, 0x800u, "set gpio %d direction %s success!", a1, &aIn[v6]);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_direction",
          14,
          350,
          20,
          v11);
        close(fd);
        pthread_mutex_unlock(&stru_C25AB4);
        return 0;
      }
      else
      {
        if ( a2 )
          v5 = 3;
        else
          v5 = 0;
        snprintf(v10, 0x800u, "Failed to set gpio %d direction %s !", a1, &aIn[v5]);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
          178,
          "gpio_direction",
          14,
          343,
          100,
          v11);
        close(fd);
        pthread_mutex_unlock(&stru_C25AB4);
        return -3;
      }
    }
    else
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d direction for writing!", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_gpio.c",
        178,
        "gpio_direction",
        14,
        334,
        100,
        v11);
      pthread_mutex_unlock(&stru_C25AB4);
      return -2;
    }
  }
}
