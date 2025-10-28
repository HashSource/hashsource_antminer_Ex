int __fastcall dev_init_hal(int a1)
{
  int v1; // r0
  int v2; // r4
  int hash_on_plug; // r0
  unsigned int v4; // r9
  int v5; // r3
  int v6; // r0
  int sw_version; // r0
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  char v18; // [sp+1Fh] [bp-1005h] BYREF
  _BYTE v19[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = platform_init();
  v2 = v1;
  if ( v1 )
  {
    V_LOCK(v1);
    v16 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      52,
      100,
      v19);
    return -1;
  }
  total_chain = 0;
  hash_on_plug = get_hash_on_plug(0);
  v4 = hash_on_plug;
  while ( 1 )
  {
    while ( ((v4 >> v2) & 1) == 0 )
    {
      if ( ++v2 == 16 )
        goto LABEL_10;
    }
    v5 = total_chain;
    g_chain_info[2 * total_chain] = v2;
    LOBYTE(g_chain_info[2 * v5 + 1]) = 1;
    V_LOCK(hash_on_plug);
    v6 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      62,
      60,
      v19);
    if ( open_pic((unsigned __int8)v2) < 0 )
    {
      V_LOCK((unsigned __int8)v2);
      v12 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v12);
      v13 = g_zc;
      v14 = 65;
      goto LABEL_12;
    }
    pic1704_reset(v2);
    usleep(0x493E0u);
    pic1704_jump_to_app(v2);
    hash_on_plug = usleep(0x493E0u);
    if ( a1 != 7 )
      break;
LABEL_9:
    ++v2;
    ++total_chain;
    if ( v2 == 16 )
    {
LABEL_10:
      v9 = fpga_reset();
      V_LOCK(v9);
      v10 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v10);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_hal",
        12,
        92,
        60,
        v19);
      enable_bypass_mode();
      dev_config_hal((int)"y_worse_phy");
      return 0;
    }
  }
  sw_version = pic1704_get_sw_version(g_chain_info[2 * total_chain], &v18);
  if ( sw_version )
  {
    V_LOCK(sw_version);
    v8 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v8);
    hash_on_plug = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/backend/device/platform_device_hal.c",
                     157,
                     "dev_init_hal",
                     12,
                     83,
                     60,
                     v19);
    goto LABEL_9;
  }
  V_LOCK(0);
  v15 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v15);
  v13 = g_zc;
  v14 = 77;
LABEL_12:
  zlog(
    v13,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "dev_init_hal",
    12,
    v14,
    100,
    v19);
  return -1;
}
