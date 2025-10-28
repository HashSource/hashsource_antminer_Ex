int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int v2; // r0
  int v4; // r0
  _BYTE v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
  {
    v2 = open_pic(LOBYTE(g_chain_info[2 * a1]));
    if ( v2 < 0 )
    {
      V_LOCK(v2);
      v4 = logfmt_raw((int)v5, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/platform_device_hal.c",
        157,
        "dev_init_pic_for_one_chain",
        26,
        135,
        100,
        v5);
      return -1;
    }
    else if ( pic1704_reset(g_chain_info[2 * a1]) )
    {
      usleep(0x493E0u);
      if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
      {
        usleep(0x493E0u);
        return 0;
      }
      else
      {
        printf("chain_offset %d, chain %, pic jump to app error!", total_chain, g_chain_info[2 * total_chain]);
        return -1;
      }
    }
    else
    {
      printf("chain_offset %d, chain %, reset pic error!", total_chain, g_chain_info[2 * total_chain]);
      return -1;
    }
  }
  else
  {
    printf("Chain offset %d is invalid\n", a1);
    return -1;
  }
}
