int get_temperature_12_15()
{
  char v2[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h] BYREF

  v4 = 0;
  if ( platform_inited )
  {
    fpga_read(44, &v4);
    return v4;
  }
  else
  {
    strcpy(v2, "platform not inited");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_common.c",
      180,
      "get_temperature_12_15",
      21,
      989,
      100,
      v3);
    return 0;
  }
}
