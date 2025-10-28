int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int v4; // [sp+18h] [bp-1004h] BYREF

  if ( !platform_is_pic_mcu_en() )
    return 0;
  if ( LOBYTE(g_chain_info[2 * a1 + 1]) == 1 )
  {
    if ( open_pic(g_chain_info[2 * a1]) < 0 )
    {
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, "chain offset %d, id %d, open pic error!\n", a1, g_chain_info[2 * a1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/platform_device_hal.c",
        164,
        "dev_init_pic_for_one_chain",
        26,
        153,
        100,
        &v4);
      return -1;
    }
    if ( !pic1704_reset(g_chain_info[2 * a1]) )
    {
      printf("chain offset %d, id %d, reset pic error!\n", a1, g_chain_info[2 * a1]);
      V_LOCK();
      logfmt_raw(&v4, 0x1000u, 0, "Sweep error string = J%d:5.", g_chain_info[2 * a1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/platform_device_hal.c",
        164,
        "dev_init_pic_for_one_chain",
        26,
        159,
        100,
        &v4);
      return -1;
    }
    usleep(0x493E0u);
    if ( !pic1704_jump_to_app(g_chain_info[2 * a1]) )
    {
      printf("chain offset %d, id %d, pic jump to app error!\n", a1, g_chain_info[2 * a1]);
      return -1;
    }
    usleep(0x493E0u);
    return 0;
  }
  printf("Chain offset %d is invalid\n", a1);
  return -1;
}
