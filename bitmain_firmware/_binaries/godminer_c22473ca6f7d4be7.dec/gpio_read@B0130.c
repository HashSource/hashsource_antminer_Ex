int __fastcall gpio_read(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int buf; // [sp+1Ch] [bp-1848h] BYREF
  char s[64]; // [sp+20h] [bp-1844h] BYREF
  char v10[2048]; // [sp+60h] [bp-1804h] BYREF
  char v11[4100]; // [sp+860h] [bp-1004h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_16C1DC);
  if ( v4 )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_read",
      9,
      371,
      100,
      v11);
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d value for reading!", a1);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      v4 = -2;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
        169,
        "gpio_read",
        9,
        379,
        100,
        v11);
      pthread_mutex_unlock(&stru_16C1DC);
    }
    else if ( read(v5, &buf, 4u) < 0 )
    {
      strcpy(v10, "Failed to read value!");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      v4 = -3;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
        169,
        "gpio_read",
        9,
        386,
        100,
        v11);
      close(v6);
      pthread_mutex_unlock(&stru_16C1DC);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_16C1DC);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
