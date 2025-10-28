int platform_init()
{
  int v1; // r8
  int v2; // r11
  int v3; // r6
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r7
  int v8; // r3
  int *v9; // r1
  int v10; // r2
  int v11; // r0
  int *v12; // r8
  int *v13; // r7
  unsigned int v14; // r6
  int v15; // t1
  int v16; // r0
  int v17; // r3
  unsigned int v18; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char *format; // [sp+1Ch] [bp-1810h]
  int v21; // [sp+24h] [bp-1808h] BYREF
  char v22[2040]; // [sp+28h] [bp-1804h] BYREF
  _DWORD v23[1025]; // [sp+828h] [bp-1004h] BYREF

  v21 = 0;
  if ( platform_inited[0] )
    return 0;
  strcpy(v22, "platform_init");
  V_LOCK();
  logfmt_raw((char *)v23, 0x1000u, 0, v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
    177,
    "platform_init",
    13,
    53,
    60,
    v23);
  if ( fpga_init() )
  {
    c = -1;
    strcpy(v22, "fpga init failed");
    V_LOCK();
    logfmt_raw((char *)v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 57;
LABEL_26:
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
      177,
      "platform_init",
      13,
      v17,
      100,
      v23);
    return c;
  }
  if ( hal_init() )
  {
    c = -1;
    strcpy(v22, "hal init failed");
    V_LOCK();
    logfmt_raw((char *)v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 63;
    goto LABEL_26;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v22, "gpio init failed");
    V_LOCK();
    logfmt_raw((char *)v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v16 = g_zc;
    v17 = 69;
    goto LABEL_26;
  }
  v1 = 0;
  memset(&dword_1B3140, 0, 0x124u);
  v2 = hal_chain_max_num();
  if ( v2 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v6 = hal_chain_plug_addr(v3);
      v7 = v6;
      if ( v6 < 0 )
        break;
      gpio_export(v6);
      gpio_direction(v7, 0);
      gpio_read(v7, &v21);
      if ( v21 == 1 )
      {
        v8 = 9 * v1++;
        dword_1B3140 = v1;
        v9 = &platform_inited[2 * v8];
        v10 = v9[3];
        v9[2] = v3;
        v9[3] = v10 + 1;
        platform_inited[2 * v8 + 4 + v10] = v3;
        v11 = hal_chain_reset_addr(v3);
        format = (char *)v11;
        if ( v11 < 0 )
          goto LABEL_12;
        gpio_export(v11);
        ++v3;
        gpio_direction((int)format, 1);
        gpio_write((int)format, 0);
        if ( v2 == v3 )
          goto LABEL_17;
      }
      else
      {
        snprintf(v22, 0x800u, "no board plug in slot %d", v7);
        V_LOCK();
        logfmt_raw((char *)v23, 0x1000u, 0, v22);
        V_UNLOCK();
        v4 = g_zc;
        v5 = 114;
LABEL_11:
        zlog(
          v4,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
          177,
          "platform_init",
          13,
          v5,
          80,
          v23);
LABEL_12:
        if ( v2 == ++v3 )
          goto LABEL_17;
      }
    }
    snprintf(v22, 0x800u, "fail to get slot for chain %d", v3);
    V_LOCK();
    logfmt_raw((char *)v23, 0x1000u, 0, v22);
    V_UNLOCK();
    v4 = g_zc;
    v5 = 83;
    goto LABEL_11;
  }
LABEL_17:
  v23[0] = 0;
  fpga_read(0, v23);
  v21 = v23[0];
  snprintf(v22, 0x800u, "HARDWARE_VERSION = 0x%x", v23[0]);
  V_LOCK();
  logfmt_raw((char *)v23, 0x1000u, 0, v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
    177,
    "platform_init",
    13,
    119,
    60,
    v23);
  strcpy(v22, "==================capability start==================");
  V_LOCK();
  logfmt_raw((char *)v23, 0x1000u, 0, v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
    177,
    "platform_dump_capability",
    24,
    26,
    60,
    v23);
  snprintf(v22, 0x800u, "board num = %d", dword_1B3140);
  V_LOCK();
  logfmt_raw((char *)v23, 0x1000u, 0, v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
    177,
    "platform_dump_capability",
    24,
    27,
    60,
    v23);
  if ( dword_1B3140 )
  {
    v12 = &dword_1B3140;
    v18 = 0;
    do
    {
      snprintf(v22, 0x800u, "board id = %d, chain num = %d", v12[1], v12[2]);
      V_LOCK();
      logfmt_raw((char *)v23, 0x1000u, 0, v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
        177,
        "platform_dump_capability",
        24,
        31,
        60,
        v23);
      if ( v12[2] )
      {
        v13 = v12 + 2;
        v14 = 0;
        do
        {
          v15 = v13[1];
          ++v13;
          snprintf(v22, 0x800u, "\tchain id = %d", v15);
          V_LOCK();
          logfmt_raw((char *)v23, 0x1000u, 0, v22);
          V_UNLOCK();
          ++v14;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
            177,
            "platform_dump_capability",
            24,
            34,
            60,
            v23);
        }
        while ( v12[2] > v14 );
      }
      v12 += 18;
      ++v18;
    }
    while ( dword_1B3140 > v18 );
  }
  strcpy(v22, "==================capability end==================");
  V_LOCK();
  logfmt_raw((char *)v23, 0x1000u, 0, v22);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
    177,
    "platform_dump_capability",
    24,
    37,
    60,
    v23);
  platform_inited[0] = 1;
  fan_init();
  ui_init();
  uart_init();
  return 0;
}
