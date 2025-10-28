int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  _DWORD v8[1026]; // [sp+24h] [bp-1010h] BYREF
  int v9; // [sp+102Ch] [bp-8h]

  v9 = 0;
  v8[1025] = 0;
  v8[1024] = 2;
  chain_reset_low(g_chain_info[2 * a1]);
  sleep(1u);
  if ( platform_is_pic_mcu_en() )
  {
    v9 += pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    v9 += pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
  }
  if ( !a3 && platform_is_pic_mcu_en() )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en() || (v9 += pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1), v9 == 3) )
  {
    if ( opt_algo != 11 && opt_algo != 12 )
      sleep(1u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    chain_reset_low(g_chain_info[2 * a1]);
    sleep(1u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "chain %d, pic init failed, err:%d!!!", g_chain_info[2 * a1], v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/platform_device_hal.c",
      164,
      "power_on_hal",
      12,
      481,
      100,
      v8);
    return -1;
  }
}
