int __fastcall dev_init_hal(int a1)
{
  int v1; // r0
  int v2; // r4
  int hash_on_plug; // r0
  unsigned int v4; // r8
  int v5; // r3
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  int sw_version; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r0
  char v21; // [sp+27h] [bp-1005h] BYREF
  _BYTE v22[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  v2 = v1;
  if ( v1 )
  {
    V_LOCK(v1);
    v19 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/platform_device_hal.c",
      163,
      "dev_init_hal",
      12,
      55,
      100,
      v22);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug(0);
    v4 = hash_on_plug;
    v5 = total_chain;
    do
    {
      while ( ((v4 >> v2) & 1) == 0 )
      {
        if ( ++v2 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v5] = v2;
      LOBYTE(g_chain_info[2 * v5 + 1]) = 1;
      V_LOCK(hash_on_plug);
      v6 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/platform_device_hal.c",
        163,
        "dev_init_hal",
        12,
        65,
        60,
        v22);
      hash_on_plug = platform_is_pic_mcu_en();
      if ( hash_on_plug )
      {
        if ( open_pic((unsigned __int8)v2) < 0 )
        {
          V_LOCK((unsigned __int8)v2);
          v15 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v15);
          v16 = g_zc;
          v17 = 69;
LABEL_14:
          zlog(
            v16,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/backend/device/platform_device_hal.c",
            163,
            "dev_init_hal",
            12,
            v17,
            100,
            v22);
          return -1;
        }
        pic1704_reset(v2);
        usleep(0x493E0u);
        pic1704_jump_to_app(v2);
        usleep(0x493E0u);
        sw_version = pic1704_get_sw_version(g_chain_info[2 * total_chain], &v21);
        if ( !sw_version )
        {
          V_LOCK(0);
          v18 = logfmt_raw((int)v22, 0x1000u);
          V_UNLOCK(v18);
          v16 = g_zc;
          v17 = 80;
          goto LABEL_14;
        }
        V_LOCK(sw_version);
        v11 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v11);
        hash_on_plug = zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bui"
                         "ld/godminer-origin_godminer-new/backend/device/platform_device_hal.c",
                         163,
                         "dev_init_hal",
                         12,
                         86,
                         60,
                         v22);
      }
      ++v2;
      v5 = ++total_chain;
    }
    while ( v2 != 16 );
LABEL_7:
    if ( a1 != v5 )
    {
      V_LOCK(hash_on_plug);
      v12 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v12);
      v13 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/device/platform_device_hal.c",
              163,
              "dev_init_hal",
              12,
              94,
              100,
              v22);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/platform_device_hal.c",
        163,
        "dev_init_hal",
        12,
        95,
        100,
        v22);
    }
    v7 = fpga_reset();
    V_LOCK(v7);
    v8 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/platform_device_hal.c",
      163,
      "dev_init_hal",
      12,
      99,
      60,
      v22);
    enable_bypass_mode();
    dev_config_hal((int)"r_info_eth_bm2280");
    return 0;
  }
}
