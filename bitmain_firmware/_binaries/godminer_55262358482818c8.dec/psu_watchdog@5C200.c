int psu_watchdog()
{
  double v0; // d0
  int v1; // r5
  int v2; // r3
  int v3; // r1
  int v4; // r7
  int v5; // r9
  int v6; // r5
  int current_voltage; // r6
  double v8; // d12
  double v9; // d13
  const char *v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r1
  int v16; // r1
  int power_status; // r6
  int v18; // r5
  int v19; // r1
  int result; // r0
  bool v21; // zf
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r3
  int v26; // r1
  int v27; // [sp+4h] [bp-1010h]
  char v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = bitmain_set_watchdog(1);
  V_LOCK();
  LOWORD(v2) = 25084;
  HIWORD(v2) = (unsigned int)"iled!" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v2, v1);
  V_UNLOCK();
  LOWORD(v3) = 24876;
  HIWORD(v3) = (unsigned int)"ad" >> 16;
  zlog(g_zc, v3, 159, "psu_watchdog", 12, 77, 60, v28);
  if ( v1 != 1 )
  {
    V_LOCK();
    LOWORD(v25) = 25116;
    HIWORD(v25) = (unsigned int)"ower watchdog: 0x%04x" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v25, "psu_watchdog");
    V_UNLOCK();
    LOWORD(v26) = 24876;
    HIWORD(v26) = (unsigned int)"ad" >> 16;
    zlog(g_zc, v26, 159, "psu_watchdog", 12, 79, 100, v28);
    return 0;
  }
  v4 = 0;
  LOWORD(v5) = 25252;
  v6 = 0;
  while ( 1 )
  {
    pthread_setcancelstate(1, 0);
    read_feedback_voltage(0);
    current_voltage = get_current_voltage();
    if ( !is_power_on() )
      goto LABEL_15;
    if ( v0 < 0.0 )
    {
      V_LOCK();
      LOWORD(v24) = 25152;
      HIWORD(v24) = (unsigned int)"wer watchdog failed!" >> 16;
      ++v4;
      logfmt_raw(v28, 0x1000u, 0, v24);
      V_UNLOCK();
      v12 = g_zc;
      v13 = 100;
      v14 = 89;
LABEL_13:
      LOWORD(v15) = 24876;
      HIWORD(v15) = (unsigned int)"ad" >> 16;
      zlog(v12, v15, 159, "psu_watchdog", 12, v14, v13, v28);
      goto LABEL_14;
    }
    v8 = (double)current_voltage;
    v9 = v0 * 100.0;
    if ( v0 * 100.0 > (double)current_voltage * 1.1 || v9 < v8 * 0.9 )
    {
      V_LOCK();
      v10 = "rise";
      LOWORD(v11) = 25200;
      ++v4;
      if ( v9 - v8 <= 0.0 )
        v10 = "drop";
      HIWORD(v11) = (unsigned int)" failed!, pls check <<" >> 16;
      logfmt_raw(v28, 0x1000u, 0, v11, v10, current_voltage, v0 * 100.0);
      V_UNLOCK();
      v12 = g_zc;
      v13 = 80;
      v14 = 93;
      goto LABEL_13;
    }
    v4 = 0;
LABEL_14:
    V_LOCK();
    HIWORD(v5) = (unsigned int)"to %.2f, pls check <<" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v5, current_voltage, v27, v0 * 100.0);
    V_UNLOCK();
    LOWORD(v16) = 24876;
    HIWORD(v16) = (unsigned int)"ad" >> 16;
    zlog(g_zc, v16, 159, "psu_watchdog", 12, 99, 20, v28);
LABEL_15:
    power_status = bitmain_get_power_status();
    if ( !power_status )
      break;
    V_LOCK();
    v18 = v6 + 1;
    logfmt_raw(v28, 0x1000u, 0, ">> power status error, ret %d, err_times %d <<", power_status, v18);
    V_UNLOCK();
    LOWORD(v19) = 24876;
    HIWORD(v19) = (unsigned int)"ad" >> 16;
    result = zlog(g_zc, v19, 159, "psu_watchdog", 12, 106, 80, v28);
    v21 = v18 == 3;
    if ( v18 <= 3 )
      v21 = v4 == 0;
    if ( !v21 )
      return result;
    power_status = v18;
LABEL_4:
    v6 = power_status;
    pthread_setcancelstate(0, 0);
    pthread_testcancel();
    sleep(0xAu);
  }
  if ( v4 <= 3 )
    goto LABEL_4;
  V_LOCK();
  LOWORD(v22) = 25340;
  HIWORD(v22) = (unsigned int)"et %d, err_times %d <<" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v22);
  V_UNLOCK();
  LOWORD(v23) = 24876;
  HIWORD(v23) = (unsigned int)"ad" >> 16;
  return zlog(g_zc, v23, 159, "psu_watchdog", 12, 113, 100, v28);
}
