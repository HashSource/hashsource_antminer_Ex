int __fastcall fan_get_realtime_speed(int a1)
{
  const char *v1; // r7
  int v2; // r6
  int v4; // r5
  unsigned int v6; // [sp+14h] [bp-1804h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v8[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v1) = 18208;
  LOWORD(v2) = 18032;
  v4 = 8;
  v6 = 0;
  while ( 1 )
  {
    fpga_read(8, &v6);
    HIWORD(v1) = (unsigned int)"atform/7020/7020_fan.c" >> 16;
    snprintf(s, 0x800u, v1, v6);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    HIWORD(v2) = (unsigned int)"nit platform first!!" >> 16;
    zlog(g_zc, v2, 174, "fan_get_realtime_speed", 22, 56, 20, v8);
    if ( ((v6 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v4 )
      return -1;
  }
  return 120 * (unsigned __int8)v6;
}
