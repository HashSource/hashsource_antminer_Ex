int __fastcall fan_get_realtime_speed(int a1)
{
  char v4[16]; // [sp+1Ch] [bp-1810h] BYREF
  _BYTE v5[16]; // [sp+81Ch] [bp-1010h] BYREF
  int v6; // [sp+181Ch] [bp-10h] BYREF
  int v7; // [sp+1820h] [bp-Ch]
  int i; // [sp+1824h] [bp-8h]

  v6 = 0;
  v7 = 0;
  for ( i = 0; i <= 7; ++i )
  {
    fpga_read(8, &v6);
    v7 = 120 * (unsigned __int8)v6;
    snprintf(v4, 0x800u, "FAN%d_SPEED fpga value = 0x%x, fpga_id: %d, real_speed: %d", a1, v6, BYTE1(v6) & 7, v7);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_fan.c",
      177,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v5);
    if ( a1 == (BYTE1(v6) & 7) && v7 )
      return v7;
    if ( (BYTE1(v6) & 7) == a1 + 2 && v7 )
      return v7;
    usleep(0x2710u);
  }
  return -1;
}
