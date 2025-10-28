int __fastcall gpio_unexport(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  size_t v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v16[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v17[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C1E4) )
  {
    v3 = -1;
    strcpy(v16, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v11 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_unexport",
      13,
      272,
      100,
      v17);
    return v3;
  }
  snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
  v2 = access(s, 0);
  v3 = v2;
  if ( !v2 )
  {
    v4 = open64("/sys/class/gpio/unexport");
    if ( v4 < 0 )
    {
      strcpy(v16, "Failed to open unexport for writing!");
      V_LOCK(*(_DWORD *)"ing!");
      v12 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v12);
      v3 = -2;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
        169,
        "gpio_unexport",
        13,
        289,
        100,
        v17);
      pthread_mutex_unlock(&stru_16C1E4);
    }
    else
    {
      v5 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v4, s, v5) < 0 )
      {
        v13 = snprintf(v16, 0x800u, "Failed to unexport gpio %d!", a1);
        V_LOCK(v13);
        v14 = logfmt_raw((int)v17, 0x1000u);
        V_UNLOCK(v14);
        v3 = -2;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
          169,
          "gpio_unexport",
          13,
          297,
          100,
          v17);
      }
      else
      {
        v6 = snprintf(v16, 0x800u, "unexport gpio %d success", a1);
        V_LOCK(v6);
        v7 = logfmt_raw((int)v17, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
          169,
          "gpio_unexport",
          13,
          303,
          20,
          v17);
      }
      close(v4);
      pthread_mutex_unlock(&stru_16C1E4);
    }
    return v3;
  }
  v9 = snprintf(v16, 0x800u, "port %d already unexported, ret = %d", a1, v2);
  V_LOCK(v9);
  v10 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
    169,
    "gpio_unexport",
    13,
    280,
    80,
    v17);
  pthread_mutex_unlock(&stru_16C1E4);
  return 0;
}
