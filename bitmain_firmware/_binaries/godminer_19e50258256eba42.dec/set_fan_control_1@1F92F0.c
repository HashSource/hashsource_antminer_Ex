int __fastcall set_fan_control_1(int a1)
{
  char v2[2048]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v3[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v4; // [sp+181Ch] [bp-8h] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    fpga_write(160, a1);
    return fpga_read(160, &v4);
  }
  else
  {
    strcpy(v2, "platform not inited");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
             180,
             "set_fan_control_1",
             17,
             1018,
             100,
             v3);
  }
}
