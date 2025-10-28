int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v6; // r6
  int v7; // r6
  int v8; // r0
  int v10; // r0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v6 = pic1704_reset(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  v7 = v6 + pic1704_jump_to_app(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(g_chain_info[2 * a1], a2);
  v8 = pic1704_enable_disable_dc_dc(g_chain_info[2 * a1], 1);
  if ( v7 + v8 == 3 )
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
    V_LOCK(v8);
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "power_on_hal",
      12,
      372,
      100,
      v11);
    return -1;
  }
}
