int __fastcall set_bt8d_control(int a1)
{
  int v2; // r0
  _BYTE v3[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return fpga_write(60, a1);
  V_LOCK(*(_DWORD *)"platform not inited");
  v2 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v2);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
           177,
           "set_bt8d_control",
           16,
           387,
           100,
           v3);
}
