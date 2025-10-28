int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int is_pic_mcu_en; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r6
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  chain_reset_low(g_chain_info[2 * a1]);
  sleep(1u);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    v10 = pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    is_pic_mcu_en = v10 + pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
  }
  if ( !a3 && platform_is_pic_mcu_en() )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en()
    || (v8 = pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1), is_pic_mcu_en + v8 == 3) )
  {
    if ( opt_algo != 11 )
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
    V_LOCK(v8);
    v9 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/platform_device_hal.c",
      167,
      "power_on_hal",
      12,
      490,
      100,
      v11);
    return -1;
  }
}
