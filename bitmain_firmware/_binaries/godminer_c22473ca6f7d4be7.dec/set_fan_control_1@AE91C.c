int __fastcall set_fan_control_1(int a1)
{
  int v2; // [sp+14h] [bp-1804h] BYREF
  char v3[2040]; // [sp+18h] [bp-1800h] BYREF
  char v4[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 0;
  if ( platform_inited[0] )
  {
    fpga_write(160, a1);
    return fpga_read(160, &v2);
  }
  else
  {
    strcpy(v3, "platform not inited");
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/device/hal/platform/zynqmp/zynqmp_common.c",
             171,
             "set_fan_control_1",
             17,
             343,
             100,
             v4);
  }
}
