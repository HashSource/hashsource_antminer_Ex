int power_off_2282_bringup()
{
  int v0; // r3
  _BYTE v2[12]; // [sp+10h] [bp-100Ch] BYREF
  unsigned __int8 v3; // [sp+1013h] [bp-9h] BYREF
  int sw_version; // [sp+1014h] [bp-8h]

  platform_init();
  open_pic(0);
  sleep(1u);
  sw_version = pic1704_get_sw_version(0, &v3);
  pic1704_reset(0);
  usleep(0x493E0u);
  pic1704_jump_to_app(0);
  usleep(0x493E0u);
  pic1704_enable_disable_dc_dc(0, 0);
  usleep(0x493E0u);
  if ( sw_version )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "chain_offset %d, chain %d, pic firmware verion = 0x%02x", 0, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "power_off_2282_bringup",
      22,
      8800,
      60,
      v2);
    printf("chain_offset %d, chain %d, pic firmware verion = 0x%02x\n", 0, 0, v3);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "chain_offset %d, chain %d, get_sw_version error!", 0, 0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "power_off_2282_bringup",
      22,
      8793,
      100,
      v2);
    printf("chain_offset %d, chain %d, get_sw_version error!\n", 0, 0);
    return -1;
  }
  return v0;
}
