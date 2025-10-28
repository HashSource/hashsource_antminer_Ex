int __fastcall start_temp_monitor_base(void *arg)
{
  int v1; // r3
  int v2; // r1
  int v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( pthread_create((pthread_t *)&dword_195960, 0, (void *(*)(void *))check_working_temp, arg) )
  {
    V_LOCK();
    LOWORD(v4) = -14244;
    HIWORD(v4) = (unsigned int)"eq_compensate_thread" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v4);
    V_UNLOCK();
    LOWORD(v5) = -14932;
    HIWORD(v5) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v5, 169, "start_temp_monitor_base", 23, 461, 100, v6);
    return 5;
  }
  else
  {
    pthread_detach(dword_195960);
    V_LOCK();
    LOWORD(v1) = -14216;
    HIWORD(v1) = (unsigned int)" monitor create failed" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v1);
    V_UNLOCK();
    LOWORD(v2) = -14932;
    HIWORD(v2) = (unsigned int)"%d, set voltage to %d" >> 16;
    zlog(g_zc, v2, 169, "start_temp_monitor_base", 23, 465, 60, v6);
    return 0;
  }
}
