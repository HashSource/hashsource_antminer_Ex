int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r1
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v6 = pic1704_reset(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v7 = v6 + pic1704_jump_to_app(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  v8 = v7 + pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( v8 == 3 )
  {
    usleep(0x493E0u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    chain_reset_low(g_chain_info[2 * a1]);
    usleep(0xF4240u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    chain_reset_low(g_chain_info[2 * a1]);
    usleep(0xF4240u);
    chain_reset_high(g_chain_info[2 * a1]);
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v10) = -544;
    HIWORD(v10) = (unsigned int)"ey_version:%d, eeprom_encryption_algorithm:%d" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v10, g_chain_info[2 * a1], v8);
    V_UNLOCK();
    LOWORD(v11) = -14512;
    HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v12) = -1132;
    HIWORD(v12) = (unsigned int)"_standard" >> 16;
    zlog(*v11, v12, 157, "power_on_hal", 12, 372, 100, v13);
    return -1;
  }
}
