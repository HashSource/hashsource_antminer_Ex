int __fastcall fan_get_realtime_speed(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  unsigned int v6; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+818h] [bp-1000h] BYREF

  v2 = 8;
  v6 = 0;
  while ( 1 )
  {
    fpga_read(8, &v6);
    v3 = snprintf(s, 0x800u, "FAN_SPEED fpga value = 0x%x", v6);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_fan.c",
      174,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v8);
    if ( ((v6 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v2 )
      return -1;
  }
  return 120 * (unsigned __int8)v6;
}
