int __fastcall sub_AD3C4(int a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  v2 = open_pic(LOBYTE(g_chain_info[2 * a1]));
  if ( v2 < 0 )
  {
    V_LOCK(v2);
    v9 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v9);
    v6 = 143;
    v7 = g_zc;
    LOWORD(v8) = -30040;
    goto LABEL_7;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    v4 = printf("chain_offset %d, chain %, reset pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    v6 = 149;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp"
                                   "/debug/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c";
LABEL_7:
    HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/deb"
                               "ug/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(v7, v8, 163, "dev_init_pic_for_one_chain", 26, v6, 100, v10);
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
    printf("chain_offset %d, chain %, pic jump to app error!", total_chain, g_chain_info[2 * total_chain]);
    return -1;
  }
}
