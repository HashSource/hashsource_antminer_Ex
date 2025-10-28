int __fastcall sub_B2D7C(int a1, int a2)
{
  int *v4; // r7
  int *v5; // r4
  int v6; // r6
  int *v8; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _DWORD v10[1024]; // [sp+818h] [bp-1000h] BYREF

  if ( a1 == 1 )
  {
    v4 = (int *)hal_led_red_addr();
  }
  else
  {
    if ( a1 != 2 )
    {
LABEL_18:
      v6 = -1;
      strcpy(s, "unsuported gpio port");
      V_LOCK();
      logfmt_raw((char *)v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
        167,
        "gpio_ctrl_ui",
        12,
        283,
        100,
        v10);
      return v6;
    }
    v4 = (int *)hal_led_green_addr();
  }
  if ( !v4 )
    goto LABEL_18;
  snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d", a1, v4, a2);
  V_LOCK();
  logfmt_raw((char *)v10, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
    167,
    "gpio_ctrl_ui",
    12,
    287,
    20,
    v10);
  if ( pthread_mutex_lock(&stru_16C524) )
  {
    v6 = -1;
    strcpy(s, "failed to api lock");
    V_LOCK();
    logfmt_raw((char *)v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
      167,
      "gpio_ctrl_ui",
      12,
      290,
      100,
      v10);
  }
  else
  {
    v5 = (int *)dword_16C53C;
    if ( a2 == 1 )
    {
      sub_B2BBC(v4, (int *)dword_16C53C);
      v6 = gpio_write((int)v4, 0);
    }
    else if ( a2 == 2 )
    {
      v8 = v4;
      if ( dword_16C53C )
      {
        v6 = -1;
        if ( exists_c_map((int *)dword_16C53C, (int)&v8) )
        {
          snprintf(s, 0x800u, "port %d already exist in map", v8);
          V_LOCK();
          logfmt_raw((char *)v10, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
            167,
            "add_port_to_gpio_map",
            20,
            237,
            20,
            v10);
        }
        else
        {
          snprintf(s, 0x800u, "add %d to flicker map with interval %d", v8, 200);
          V_LOCK();
          logfmt_raw((char *)v10, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
            167,
            "add_port_to_gpio_map",
            20,
            231,
            20,
            v10);
          v10[0] = 200;
          v10[1] = 0;
          v10[2] = 1;
          insert_c_map(v5, &v8, 4u, v10, 0xCu);
        }
      }
      else
      {
        v6 = -1;
      }
    }
    else
    {
      sub_B2BBC(v4, (int *)dword_16C53C);
      v6 = gpio_write((int)v4, 1);
    }
    pthread_mutex_unlock(&stru_16C524);
  }
  return v6;
}
