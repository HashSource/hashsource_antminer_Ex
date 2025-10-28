int get_max_voltage()
{
  double v0; // d0
  int v1; // r4
  int v4; // r1
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_195C10;
  if ( byte_195C10 )
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
  else
  {
    V_LOCK();
    LOWORD(v4) = 28468;
    HIWORD(v4) = (unsigned int)"%s, power has not init!" >> 16;
    LOWORD(v5) = 27800;
    HIWORD(v5) = (unsigned int)"r" >> 16;
    logfmt_raw(v7, 0x1000u, v1, v5, v4);
    V_UNLOCK();
    LOWORD(v6) = 26816;
    HIWORD(v6) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v6, 153, "get_max_voltage", 15, 525, 100, v7);
    return -1;
  }
}
