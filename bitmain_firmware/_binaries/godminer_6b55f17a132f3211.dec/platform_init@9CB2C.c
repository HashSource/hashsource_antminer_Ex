int platform_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r8
  void *v4; // r0
  int v5; // r11
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r7
  int v12; // r3
  int *v13; // r1
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int *v20; // r8
  int v21; // r0
  int v22; // r0
  int *v23; // r7
  unsigned int v24; // r6
  int v25; // t1
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r3
  int v37; // r0
  int v38; // r0
  unsigned int v39; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char *format; // [sp+1Ch] [bp-1810h]
  int v42; // [sp+24h] [bp-1808h] BYREF
  char v43[2040]; // [sp+28h] [bp-1804h] BYREF
  _DWORD v44[1025]; // [sp+828h] [bp-1004h] BYREF

  v42 = 0;
  if ( platform_inited[0] )
    return 0;
  strcpy(v43, "platform_init");
  V_LOCK(*(_DWORD *)"platform_init");
  v1 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/backend/device/hal/platform/7020/7020_common.c",
         173,
         "platform_init",
         13,
         53,
         100,
         v44);
  if ( fpga_init(v2) )
  {
    c = -1;
    strcpy(v43, "fpga init failed");
    V_LOCK(*(_DWORD *)"fpga init failed");
    v34 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v34);
    v35 = g_zc;
    v36 = 57;
LABEL_26:
    zlog(
      v35,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_common.c",
      173,
      "platform_init",
      13,
      v36,
      100,
      v44);
    return c;
  }
  if ( hal_init() )
  {
    c = -1;
    strcpy(v43, "hal init failed");
    V_LOCK(*(_DWORD *)"hal init failed");
    v37 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v37);
    v35 = g_zc;
    v36 = 63;
    goto LABEL_26;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v43, "gpio init failed");
    V_LOCK(*(_DWORD *)"gpio init failed");
    v38 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v38);
    v35 = g_zc;
    v36 = 69;
    goto LABEL_26;
  }
  v3 = 0;
  v4 = memset(&dword_176F88, 0, 0x124u);
  v5 = hal_chain_max_num(v4);
  if ( v5 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v11 = hal_chain_plug_addr(v6);
      if ( v11 < 0 )
        break;
      gpio_export();
      gpio_direction(v11, 0);
      gpio_read(v11, &v42);
      if ( v42 == 1 )
      {
        v12 = 9 * v3++;
        dword_176F88 = v3;
        v13 = &platform_inited[2 * v12];
        v14 = v13[3];
        v13[2] = v6;
        v13[3] = v14 + 1;
        platform_inited[2 * v12 + 4 + v14] = v6;
        format = (char *)hal_chain_reset_addr(v6);
        if ( (int)format < 0 )
          goto LABEL_12;
        gpio_export();
        ++v6;
        gpio_direction(format, 1);
        gpio_write(format, 0);
        if ( v5 == v6 )
          goto LABEL_17;
      }
      else
      {
        v7 = snprintf(v43, 0x800u, "no board plug in slot %d", v11);
        V_LOCK(v7);
        v8 = logfmt_raw((int)v44, 0x1000u);
        V_UNLOCK(v8);
        v9 = g_zc;
        v10 = 114;
LABEL_11:
        zlog(
          v9,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
          173,
          "platform_init",
          13,
          v10,
          80,
          v44);
LABEL_12:
        if ( v5 == ++v6 )
          goto LABEL_17;
      }
    }
    v32 = snprintf(v43, 0x800u, "fail to get slot for chain %d", v6);
    V_LOCK(v32);
    v33 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v33);
    v9 = g_zc;
    v10 = 83;
    goto LABEL_11;
  }
LABEL_17:
  v44[0] = 0;
  fpga_read(0, v44);
  v42 = v44[0];
  v15 = snprintf(v43, 0x800u, "HARDWARE_VERSION = 0x%x", v44[0]);
  V_LOCK(v15);
  v16 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_common.c",
    173,
    "platform_init",
    13,
    119,
    60,
    v44);
  strcpy(v43, "==================capability start==================");
  V_LOCK(*(_DWORD *)"====");
  v17 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_common.c",
    173,
    "platform_dump_capability",
    24,
    26,
    60,
    v44);
  v18 = snprintf(v43, 0x800u, "board num = %d", dword_176F88);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_common.c",
    173,
    "platform_dump_capability",
    24,
    27,
    60,
    v44);
  if ( dword_176F88 )
  {
    v20 = &dword_176F88;
    v39 = 0;
    do
    {
      v21 = snprintf(v43, 0x800u, "board id = %d, chain num = %d", v20[1], v20[2]);
      V_LOCK(v21);
      v22 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
        173,
        "platform_dump_capability",
        24,
        31,
        60,
        v44);
      if ( v20[2] )
      {
        v23 = v20 + 2;
        v24 = 0;
        do
        {
          v25 = v23[1];
          ++v23;
          v26 = snprintf(v43, 0x800u, "\tchain id = %d", v25);
          V_LOCK(v26);
          v27 = logfmt_raw((int)v44, 0x1000u);
          V_UNLOCK(v27);
          ++v24;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
            173,
            "platform_dump_capability",
            24,
            34,
            60,
            v44);
        }
        while ( v20[2] > v24 );
      }
      v20 += 18;
      ++v39;
    }
    while ( dword_176F88 > v39 );
  }
  strcpy(v43, "==================capability end==================");
  V_LOCK(*(_DWORD *)"==================");
  v28 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v28);
  v29 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
          173,
          "platform_dump_capability",
          24,
          37,
          60,
          v44);
  platform_inited[0] = 1;
  v30 = fan_init(v29);
  v31 = ui_init(v30);
  uart_init(v31);
  return 0;
}
