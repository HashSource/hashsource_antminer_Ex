int __fastcall settime_based_notify_ntime(const char *a1)
{
  int v1; // r0
  int v2; // r4
  unsigned int v4; // r6
  int v5; // r3
  int v6; // r1
  struct timeval tv; // [sp+10h] [bp-1008h] BYREF
  char v8[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = strtol(a1, 0, 16);
  if ( v1 )
    v2 = ((unsigned __int8)byte_1955BD ^ 1) & 1;
  else
    v2 = 0;
  if ( v2 )
  {
    v4 = v1;
    tv.tv_usec = 0;
    tv.tv_sec = 0;
    gettimeofday(&tv, 0);
    if ( tv.tv_sec < v4 )
    {
      tv.tv_sec = v4;
      settimeofday(&tv, 0);
      V_LOCK();
      LOWORD(v5) = -26628;
      HIWORD(v5) = (unsigned int)"" >> 16;
      logfmt_raw(v8, 0x1000u, 0, v5);
      V_UNLOCK();
      LOWORD(v6) = -27588;
      HIWORD(v6) = (unsigned int)"et: invalid parameters" >> 16;
      zlog(g_zc, v6, 155, "settime_based_notify_ntime", 26, 383, 60, v8);
      byte_1955BD = 1;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
