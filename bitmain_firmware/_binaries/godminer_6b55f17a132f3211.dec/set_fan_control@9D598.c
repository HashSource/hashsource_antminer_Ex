int __fastcall set_fan_control(int a1)
{
  int v2; // r0
  int v3; // [sp+14h] [bp-1804h] BYREF
  char v4[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v5[4096]; // [sp+818h] [bp-1000h] BYREF

  v3 = 0;
  if ( platform_inited[0] )
  {
    fpga_write(132, a1);
    return fpga_read(132, &v3);
  }
  else
  {
    strcpy(v4, "platform not inited");
    V_LOCK(*(_DWORD *)"platform not inited");
    v2 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v2);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
             173,
             "set_fan_control",
             15,
             346,
             100,
             v5);
  }
}
