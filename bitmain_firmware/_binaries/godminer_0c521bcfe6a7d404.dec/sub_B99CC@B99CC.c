int __fastcall sub_B99CC(int a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r0
  _BYTE v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = open_pic(LOBYTE(g_chain_info[2 * a1]));
  if ( v2 < 0 )
  {
    V_LOCK(v2);
    v7 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v7);
    v6 = 145;
    goto LABEL_7;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    v4 = printf("chain offset %d, id %d, reset pic error!\n", a1, g_chain_info[2 * a1]);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    v6 = 151;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/platform_device_hal.c",
      167,
      "dev_init_pic_for_one_chain",
      26,
      v6,
      100,
      v8);
    return -1;
  }
  usleep(0x493E0u);
  if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
  {
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    printf("chain offset %d, id %d, pic jump to app error!\n", a1, g_chain_info[2 * a1]);
    return -1;
  }
}
