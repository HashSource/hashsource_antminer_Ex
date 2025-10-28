int frontend_runtime_instance()
{
  int v0; // r4
  int v2; // r3
  int v3; // r1
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = dword_1957A4;
  if ( !dword_1957A4 )
  {
    V_LOCK();
    LOWORD(v2) = -21464;
    HIWORD(v2) = (unsigned int)"frontend_interface.c" >> 16;
    logfmt_raw(v4, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -21628;
    HIWORD(v3) = (unsigned int)" define Frontend_Base" >> 16;
    zlog(g_zc, v3, 160, "frontend_runtime_instance", 25, 79, 100, v4);
  }
  return v0;
}
