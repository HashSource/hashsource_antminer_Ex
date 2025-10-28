int __fastcall gpio_direction(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  bool v6; // zf
  size_t v7; // r2
  const char *v8; // r5
  int v9; // r0
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v18[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v19[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1770EC) )
  {
    strcpy(v18, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v12 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      171,
      "gpio_direction",
      14,
      326,
      100,
      v19);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/direction", a1);
    v4 = open64(s);
    v5 = v4;
    if ( v4 < 0 )
    {
      v15 = snprintf(v18, 0x800u, "Failed to open gpio %d direction for writing!", a1);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
        171,
        "gpio_direction",
        14,
        333,
        100,
        v19);
      pthread_mutex_unlock(&stru_1770EC);
      return -2;
    }
    else
    {
      v6 = a2 == 0;
      if ( a2 )
        v7 = 3;
      else
        v7 = 2;
      v8 = "out";
      if ( v6 )
        v8 = "in";
      if ( write(v4, v8, v7) < 0 )
      {
        v13 = snprintf(v18, 0x800u, "Failed to set gpio %d direction %s !", a1, v8);
        V_LOCK(v13);
        v14 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v14);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
          171,
          "gpio_direction",
          14,
          342,
          100,
          v19);
        close(v5);
        pthread_mutex_unlock(&stru_1770EC);
        return -3;
      }
      else
      {
        v9 = snprintf(v18, 0x800u, "set gpio %d direction %s success!", a1, v8);
        V_LOCK(v9);
        v10 = logfmt_raw((int)v19, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
          171,
          "gpio_direction",
          14,
          349,
          20,
          v19);
        close(v5);
        pthread_mutex_unlock(&stru_1770EC);
        return 0;
      }
    }
  }
}
