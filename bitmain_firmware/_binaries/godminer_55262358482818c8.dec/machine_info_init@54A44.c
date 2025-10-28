int machine_info_init()
{
  int v0; // r3
  int v1; // r1
  int v2; // r0
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = -13924;
  HIWORD(v0) = (unsigned int)" total failed times:%d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = -14932;
  HIWORD(v1) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v1, 169, "machine_info_init", 17, 918, 60, v6);
  v2 = platform_topol_init();
  if ( v2 )
    exit(v2);
  V_LOCK();
  LOWORD(v3) = -13904;
  HIWORD(v3) = (unsigned int)"%d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = -14932;
  HIWORD(v4) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v4, 169, "machine_info_init", 17, 922, 60, v6);
  return 0;
}
