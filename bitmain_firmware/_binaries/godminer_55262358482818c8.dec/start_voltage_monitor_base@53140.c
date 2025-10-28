int __fastcall start_voltage_monitor_base(void *arg)
{
  int v1; // r3
  int v2; // r1
  int v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( pthread_create((pthread_t *)&dword_195958, 0, (void *(*)(void *))check_working_voltage, arg) )
  {
    V_LOCK();
    LOWORD(v4) = -14372;
    HIWORD(v4) = (unsigned int)"mpensate:%d, bias:%d" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v4);
    V_UNLOCK();
    LOWORD(v5) = -14932;
    HIWORD(v5) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v5, 169, "start_voltage_monitor_base", 26, 422, 100, v6);
    return 5;
  }
  else
  {
    pthread_detach(dword_195958);
    V_LOCK();
    LOWORD(v1) = -14340;
    HIWORD(v1) = (unsigned int)"monitor create failed" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v1);
    V_UNLOCK();
    LOWORD(v2) = -14932;
    HIWORD(v2) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v2, 169, "start_voltage_monitor_base", 26, 426, 60, v6);
    return 0;
  }
}
