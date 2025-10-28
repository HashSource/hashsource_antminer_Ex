int __fastcall gpio_export(int a1)
{
  int v2; // r6
  size_t v3; // r0
  int v4; // r0
  int v5; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v14[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v15[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_16C1E4) )
  {
    strcpy(v14, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v9 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
      169,
      "gpio_export",
      11,
      220,
      100,
      v15);
    return -1;
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d", a1);
    if ( access(s, 0) )
    {
      v2 = open64("/sys/class/gpio/export");
      if ( v2 < 0 )
      {
        strcpy(v14, "Failed to open export for writing!");
        V_LOCK(*(_DWORD *)"xport for writing!");
        v10 = logfmt_raw((int)v15, 0x1000u);
        V_UNLOCK(v10);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
          169,
          "gpio_export",
          11,
          237,
          100,
          v15);
        pthread_mutex_unlock(&stru_16C1E4);
        return -2;
      }
      else
      {
        v3 = snprintf(s, 0x40u, "%d", a1);
        if ( write(v2, s, v3) < 0 )
        {
          v11 = snprintf(v14, 0x800u, "Failed to export gpio %d!", a1);
          V_LOCK(v11);
          v12 = logfmt_raw((int)v15, 0x1000u);
          V_UNLOCK(v12);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
            169,
            "gpio_export",
            11,
            245,
            100,
            v15);
          close(v2);
          pthread_mutex_unlock(&stru_16C1E4);
          return -3;
        }
        else
        {
          v4 = snprintf(v14, 0x800u, "export gpio %d success", a1);
          V_LOCK(v4);
          v5 = logfmt_raw((int)v15, 0x1000u);
          V_UNLOCK(v5);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
            169,
            "gpio_export",
            11,
            250,
            20,
            v15);
          close(v2);
          pthread_mutex_unlock(&stru_16C1E4);
          return 0;
        }
      }
    }
    else
    {
      v7 = snprintf(v14, 0x800u, "port %d already exported", a1);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v15, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_gpio.c",
        169,
        "gpio_export",
        11,
        228,
        80,
        v15);
      pthread_mutex_unlock(&stru_16C1E4);
      return 0;
    }
  }
}
