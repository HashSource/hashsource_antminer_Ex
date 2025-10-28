int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int is_pic_mcu_en; // r6
  int v8; // r6
  int v9; // r3
  int v10; // r1
  int v11; // r6
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  chain_reset_low(g_chain_info[2 * a1]);
  sleep(1u);
  is_pic_mcu_en = platform_is_pic_mcu_en();
  if ( is_pic_mcu_en )
  {
    v11 = pic1704_reset(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    is_pic_mcu_en = v11 + pic1704_jump_to_app(g_chain_info[2 * a1]);
    usleep(0x493E0u);
  }
  if ( !a3 && platform_is_pic_mcu_en() )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  if ( !platform_is_pic_mcu_en()
    || (v8 = is_pic_mcu_en + pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1), v8 == 3) )
  {
    if ( (unsigned int)(opt_algo - 11) > 1 )
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
    LOWORD(v9) = 30056;
    HIWORD(v9) = (unsigned int)"ud, get zynq bt8d %08x\n" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v9, g_chain_info[2 * a1], v8);
    V_UNLOCK();
    LOWORD(v10) = 29584;
    HIWORD(v10) = (unsigned int)"platform init failed!" >> 16;
    zlog(g_zc, v10, 167, "power_on_hal", 12, 457, 100, v12);
    return -1;
  }
}
