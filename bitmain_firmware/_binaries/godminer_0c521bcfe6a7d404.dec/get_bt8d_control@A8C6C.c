int get_bt8d_control()
{
  int v1; // r0
  int v2; // [sp+14h] [bp-1804h] BYREF
  char v3[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v4[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 0;
  if ( platform_inited[0] )
  {
    fpga_read(60, &v2);
    return v2;
  }
  else
  {
    strcpy(v3, "platform not inited");
    V_LOCK(*(_DWORD *)"platform not inited");
    v1 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
      177,
      "get_bt8d_control",
      16,
      374,
      100,
      v4);
    return 0;
  }
}
