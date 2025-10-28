int __fastcall sub_B2EEC(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _DWORD v18[1024]; // [sp+818h] [bp-1000h] BYREF

  if ( a1 == 1 )
  {
    v4 = hal_led_red_addr();
  }
  else
  {
    if ( a1 != 2 )
    {
LABEL_18:
      v8 = -1;
      strcpy(s, "unsuported gpio port");
      V_LOCK(*(_DWORD *)"port");
      v14 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
        167,
        "gpio_ctrl_ui",
        12,
        283,
        100,
        v18);
      return v8;
    }
    v4 = hal_led_green_addr();
  }
  if ( !v4 )
    goto LABEL_18;
  v5 = snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d", a1, v4, a2);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
    167,
    "gpio_ctrl_ui",
    12,
    287,
    20,
    v18);
  if ( pthread_mutex_lock(&stru_16C52C) )
  {
    v8 = -1;
    strcpy(s, "failed to api lock");
    V_LOCK(*(_DWORD *)"failed to api lock");
    v15 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
      167,
      "gpio_ctrl_ui",
      12,
      290,
      100,
      v18);
  }
  else
  {
    v7 = dword_16C544;
    if ( a2 == 1 )
    {
      sub_B2D2C(v4, dword_16C544);
      v8 = gpio_write(v4, 0);
    }
    else if ( a2 == 2 )
    {
      v16 = v4;
      if ( dword_16C544 )
      {
        v8 = -1;
        if ( exists_c_map(dword_16C544, &v16) )
        {
          v9 = snprintf(s, 0x800u, "port %d already exist in map", v16);
          V_LOCK(v9);
          v10 = logfmt_raw((int)v18, 0x1000u);
          V_UNLOCK(v10);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
            167,
            "add_port_to_gpio_map",
            20,
            237,
            20,
            v18);
        }
        else
        {
          v12 = snprintf(s, 0x800u, "add %d to flicker map with interval %d", v16, 200);
          V_LOCK(v12);
          v13 = logfmt_raw((int)v18, 0x1000u);
          V_UNLOCK(v13);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
            167,
            "add_port_to_gpio_map",
            20,
            231,
            20,
            v18);
          v18[0] = 200;
          v18[1] = 0;
          v18[2] = 1;
          insert_c_map(v7, &v16, 4, v18, 12);
        }
      }
      else
      {
        v8 = -1;
      }
    }
    else
    {
      sub_B2D2C(v4, dword_16C544);
      v8 = gpio_write(v4, 1);
    }
    pthread_mutex_unlock(&stru_16C52C);
  }
  return v8;
}
