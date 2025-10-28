int platform_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r8
  void *v4; // r0
  int v5; // r10
  int v6; // r6
  int v7; // r3
  int v8; // r7
  int v9; // lr
  int *v10; // r12
  int v11; // r0
  int v12; // r0
  int v13; // r0
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
  char *format; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  int v41; // [sp+24h] [bp-1808h] BYREF
  char v42[2040]; // [sp+28h] [bp-1804h] BYREF
  _DWORD v43[1025]; // [sp+828h] [bp-1004h] BYREF

  v41 = 0;
  if ( platform_inited[0] )
    return 0;
  strcpy(v42, "platform_init");
  V_LOCK(*(_DWORD *)"platform_init");
  v1 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
         171,
         "platform_init",
         13,
         52,
         100,
         v43);
  if ( fpga_init(v2) )
  {
    c = -1;
    strcpy(v42, "fpga init failed");
    V_LOCK(*(_DWORD *)"fpga init failed");
    v34 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v34);
    v35 = g_zc;
    v36 = 56;
LABEL_24:
    zlog(
      v35,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
      171,
      "platform_init",
      13,
      v36,
      100,
      v43);
    return c;
  }
  if ( hal_init() )
  {
    c = -1;
    strcpy(v42, "hal init failed");
    V_LOCK(*(_DWORD *)"hal init failed");
    v37 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v37);
    v35 = g_zc;
    v36 = 62;
    goto LABEL_24;
  }
  if ( gpio_init() )
  {
    c = -2;
    strcpy(v42, "gpio init failed");
    V_LOCK(*(_DWORD *)"gpio init failed");
    v38 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v38);
    v35 = g_zc;
    v36 = 68;
    goto LABEL_24;
  }
  v3 = 0;
  v4 = memset(&dword_16D094, 0, 0x124u);
  v5 = hal_chain_max_num(v4);
  if ( v5 > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v8 = hal_chain_plug_addr(v6);
      if ( v8 < 0 )
        break;
      gpio_export();
      gpio_direction(v8, 0);
      gpio_read(v8, &v41);
      v9 = 9 * v3;
      v10 = &platform_inited[18 * v3];
      if ( v41 == 1 )
      {
        v7 = v10[3];
        ++v3;
        v10[2] = v6;
        dword_16D094 = v3;
        v10[3] = v7 + 1;
        platform_inited[2 * v9 + 4 + v7] = v6++;
        if ( v5 == v6 )
          goto LABEL_15;
      }
      else
      {
        v11 = snprintf(v42, 0x800u, "no board plug in slot %d", v8);
        V_LOCK(v11);
        v12 = logfmt_raw((int)v43, 0x1000u);
        V_UNLOCK(v12);
        v13 = g_zc;
        v14 = 99;
LABEL_14:
        ++v6;
        zlog(
          v13,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
          171,
          "platform_init",
          13,
          v14,
          80,
          v43);
        if ( v5 == v6 )
          goto LABEL_15;
      }
    }
    v32 = snprintf(v42, 0x800u, "fail to get slot for chain %d", v6);
    V_LOCK(v32);
    v33 = logfmt_raw((int)v43, 0x1000u);
    V_UNLOCK(v33);
    v13 = g_zc;
    v14 = 82;
    goto LABEL_14;
  }
LABEL_15:
  v43[0] = 0;
  fpga_read(0, v43);
  v41 = v43[0];
  v15 = snprintf(v42, 0x800u, "HARDWARE_VERSION = 0x%x", v43[0]);
  V_LOCK(v15);
  v16 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_init",
    13,
    104,
    60,
    v43);
  strcpy(v42, "==================capability start==================");
  V_LOCK(*(_DWORD *)"====");
  v17 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_dump_capability",
    24,
    26,
    60,
    v43);
  v18 = snprintf(v42, 0x800u, "board num = %d", dword_16D094);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_common.c",
    171,
    "platform_dump_capability",
    24,
    27,
    60,
    v43);
  if ( dword_16D094 )
  {
    v20 = &dword_16D094;
    format = 0;
    do
    {
      v21 = snprintf(v42, 0x800u, "board id = %d, chain num = %d", v20[1], v20[2]);
      V_LOCK(v21);
      v22 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v22);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
        171,
        "platform_dump_capability",
        24,
        31,
        60,
        v43);
      if ( v20[2] )
      {
        v23 = v20 + 2;
        v24 = 0;
        do
        {
          v25 = v23[1];
          ++v23;
          v26 = snprintf(v42, 0x800u, "\tchain id = %d", v25);
          V_LOCK(v26);
          v27 = logfmt_raw((int)v43, 0x1000u);
          V_UNLOCK(v27);
          ++v24;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
            171,
            "platform_dump_capability",
            24,
            34,
            60,
            v43);
        }
        while ( v20[2] > v24 );
      }
      v20 += 18;
      ++format;
    }
    while ( dword_16D094 > (unsigned int)format );
  }
  strcpy(v42, "==================capability end==================");
  V_LOCK(*(_DWORD *)"==================");
  v28 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v28);
  v29 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
          171,
          "platform_dump_capability",
          24,
          37,
          60,
          v43);
  platform_inited[0] = 1;
  v30 = fan_init(v29);
  v31 = ui_init(v30);
  uart_init(v31);
  return 0;
}
