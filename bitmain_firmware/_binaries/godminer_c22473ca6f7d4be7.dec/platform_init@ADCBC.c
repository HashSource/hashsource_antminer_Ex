int platform_init()
{
  int v1; // r8
  int v2; // r10
  int v3; // r6
  int v4; // r3
  int v5; // r0
  int v6; // r7
  int v7; // lr
  int *v8; // r12
  int v9; // r0
  int v10; // r2
  int *v11; // r8
  int *v12; // r7
  unsigned int v13; // r6
  int v14; // t1
  int v15; // r0
  int v16; // r3
  char *format; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  int v19; // [sp+24h] [bp-1808h] BYREF
  char v20[2040]; // [sp+28h] [bp-1804h] BYREF
  _DWORD v21[1025]; // [sp+828h] [bp-1004h] BYREF

  v19 = 0;
  if ( platform_inited[0] )
    return 0;
  strcpy(v20, "platform_init");
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_init",
    13,
    52,
    100,
    v21);
  if ( fpga_init() )
  {
    c = -1;
    strcpy(v20, "fpga init failed");
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, v20);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 56;
LABEL_24:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
      171,
      "platform_init",
      13,
      v16,
      100,
      v21);
    return c;
  }
  if ( hal_init() )
  {
    c = -1;
    strcpy(v20, "hal init failed");
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, v20);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 62;
    goto LABEL_24;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v20, "gpio init failed");
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, v20);
    V_UNLOCK();
    v15 = g_zc;
    v16 = 68;
    goto LABEL_24;
  }
  v1 = 0;
  memset(&dword_16C078, 0, 0x124u);
  v2 = hal_chain_max_num();
  if ( v2 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v5 = hal_chain_plug_addr(v3);
      v6 = v5;
      if ( v5 < 0 )
        break;
      gpio_export(v5);
      gpio_direction(v6, 0);
      gpio_read(v6, &v19);
      v7 = 9 * v1;
      v8 = &platform_inited[18 * v1];
      if ( v19 == 1 )
      {
        v4 = v8[3];
        ++v1;
        v8[2] = v3;
        dword_16C078 = v1;
        v8[3] = v4 + 1;
        platform_inited[2 * v7 + 4 + v4] = v3++;
        if ( v2 == v3 )
          goto LABEL_15;
      }
      else
      {
        snprintf(v20, 0x800u, "no board plug in slot %d", v6);
        V_LOCK();
        logfmt_raw((char *)v21, 0x1000u, 0, v20);
        V_UNLOCK();
        v9 = g_zc;
        v10 = 99;
LABEL_14:
        ++v3;
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
          171,
          "platform_init",
          13,
          v10,
          80,
          v21);
        if ( v2 == v3 )
          goto LABEL_15;
      }
    }
    snprintf(v20, 0x800u, "fail to get slot for chain %d", v3);
    V_LOCK();
    logfmt_raw((char *)v21, 0x1000u, 0, v20);
    V_UNLOCK();
    v9 = g_zc;
    v10 = 82;
    goto LABEL_14;
  }
LABEL_15:
  v21[0] = 0;
  fpga_read(0, v21);
  v19 = v21[0];
  snprintf(v20, 0x800u, "HARDWARE_VERSION = 0x%x", v21[0]);
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_init",
    13,
    104,
    60,
    v21);
  strcpy(v20, "==================capability start==================");
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_dump_capability",
    24,
    26,
    60,
    v21);
  snprintf(v20, 0x800u, "board num = %d", dword_16C078);
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_dump_capability",
    24,
    27,
    60,
    v21);
  if ( dword_16C078 )
  {
    v11 = &dword_16C078;
    format = 0;
    do
    {
      snprintf(v20, 0x800u, "board id = %d, chain num = %d", v11[1], v11[2]);
      V_LOCK();
      logfmt_raw((char *)v21, 0x1000u, 0, v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
        171,
        "platform_dump_capability",
        24,
        31,
        60,
        v21);
      if ( v11[2] )
      {
        v12 = v11 + 2;
        v13 = 0;
        do
        {
          v14 = v12[1];
          ++v12;
          snprintf(v20, 0x800u, "\tchain id = %d", v14);
          V_LOCK();
          logfmt_raw((char *)v21, 0x1000u, 0, v20);
          V_UNLOCK();
          ++v13;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
            171,
            "platform_dump_capability",
            24,
            34,
            60,
            v21);
        }
        while ( v11[2] > v13 );
      }
      v11 += 18;
      ++format;
    }
    while ( dword_16C078 > (unsigned int)format );
  }
  strcpy(v20, "==================capability end==================");
  V_LOCK();
  logfmt_raw((char *)v21, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_dump_capability",
    24,
    37,
    60,
    v21);
  platform_inited[0] = 1;
  fan_init();
  ui_init();
  uart_init();
  return 0;
}
