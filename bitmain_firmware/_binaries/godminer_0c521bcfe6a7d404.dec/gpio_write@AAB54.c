int __fastcall gpio_write(int a1, int a2)
{
  int v4; // r0
  int v5; // r5
  char *v6; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  char s[64]; // [sp+10h] [bp-1844h] BYREF
  char v12[2048]; // [sp+50h] [bp-1804h] BYREF
  _BYTE v13[4100]; // [sp+850h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18D4FC) )
  {
    strcpy(v12, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v8 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
      175,
      "gpio_write",
      10,
      414,
      100,
      v13);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v4 = open64(s);
    v5 = v4;
    if ( v4 < 0 )
    {
      strcpy(v12, "Failed to open gpio value for writing!");
      V_LOCK(*(_DWORD *)"iting!");
      v9 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
        175,
        "gpio_write",
        10,
        422,
        100,
        v13);
      pthread_mutex_unlock(&stru_18D4FC);
      return -2;
    }
    else
    {
      if ( a2 )
        v6 = "1";
      else
        v6 = "01";
      if ( write(v4, v6, 1u) < 0 )
      {
        strcpy(v12, "Failed to write value!");
        V_LOCK(*(_DWORD *)"value!");
        v10 = logfmt_raw((int)v13, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_gpio.c",
          175,
          "gpio_write",
          10,
          428,
          100,
          v13);
        close(v5);
        pthread_mutex_unlock(&stru_18D4FC);
        return -3;
      }
      else
      {
        close(v5);
        pthread_mutex_unlock(&stru_18D4FC);
        return 0;
      }
    }
  }
}
