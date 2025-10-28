int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  unsigned int hash_on_plug; // r8
  int v3; // r3
  int v5; // r0
  int v6; // r3
  unsigned __int8 v8; // [sp+27h] [bp-1005h] BYREF
  char v9[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "platform init failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/platform_device_hal.c",
      167,
      "dev_init_hal",
      12,
      59,
      100,
      v9);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    v3 = total_chain;
    do
    {
      while ( ((hash_on_plug >> v1) & 1) == 0 )
      {
        if ( ++v1 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v3] = v1;
      LOBYTE(g_chain_info[2 * v3 + 1]) = 1;
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "chain_offset %d, chain %d", total_chain, g_chain_info[2 * total_chain]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/platform_device_hal.c",
        167,
        "dev_init_hal",
        12,
        69,
        60,
        v9);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(
            v9,
            0x1000u,
            0,
            "chain_offset %d, chain %d, open pic error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v5 = g_zc;
          v6 = 73;
LABEL_14:
          zlog(
            v5,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/device/platform_device_hal.c",
            167,
            "dev_init_hal",
            12,
            v6,
            100,
            v9);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v8) )
        {
          V_LOCK();
          logfmt_raw(
            v9,
            0x1000u,
            0,
            "chain_offset %d, chain %d, get_sw_version error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v5 = g_zc;
          v6 = 84;
          goto LABEL_14;
        }
        V_LOCK();
        logfmt_raw(
          v9,
          0x1000u,
          0,
          "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
          total_chain,
          g_chain_info[2 * total_chain],
          v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/platform_device_hal.c",
          167,
          "dev_init_hal",
          12,
          90,
          60,
          v9);
      }
      ++v1;
      v3 = ++total_chain;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v3 )
    {
      set_miner_6060info_board_num_less_than_design_err(1);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/platform_device_hal.c",
        167,
        "dev_init_hal",
        12,
        99,
        100,
        v9);
    }
    fpga_reset();
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "reset fpga");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/platform_device_hal.c",
      167,
      "dev_init_hal",
      12,
      103,
      60,
      v9);
    enable_bypass_mode();
    dev_config_hal("l");
    return 0;
  }
}
