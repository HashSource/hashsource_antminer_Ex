int __fastcall gpio_direction(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r8
  bool v7; // zf
  size_t v8; // r2
  const char *v9; // r5
  const char *v10; // r2
  int v11; // r1
  int *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // lr
  int v19; // r1
  const char *v20; // r2
  int v21; // r1
  const char *v22; // r2
  int v23; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v25[4]; // [sp+50h] [bp-1800h] BYREF
  __int16 v26; // [sp+60h] [bp-17F0h]
  char v27; // [sp+62h] [bp-17EEh]
  char v28[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32A4) )
  {
    LOWORD(v13) = 19080;
    HIWORD(v13) = (unsigned int)"n not registered before" >> 16;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    v25[0] = v14;
    v25[1] = v15;
    v25[2] = v16;
    v25[3] = v17;
    v26 = v18;
    v27 = BYTE2(v18);
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, v25);
    V_UNLOCK();
    LOWORD(v19) = 18736;
    HIWORD(v19) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v19, 175, "gpio_direction", 14, 326, 100, v28);
    return -1;
  }
  else
  {
    LOWORD(v4) = 19428;
    HIWORD(v4) = (unsigned int)"port gpio %d success" >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v22) = 19464;
      HIWORD(v22) = (unsigned int)"pio/gpio%d/direction" >> 16;
      snprintf((char *)v25, 0x800u, v22, a1);
      V_LOCK();
      logfmt_raw(v28, 0x1000u, 0, v25);
      V_UNLOCK();
      LOWORD(v23) = 18736;
      HIWORD(v23) = (unsigned int)"exist" >> 16;
      zlog(g_zc, v23, 175, "gpio_direction", 14, 333, 100, v28);
      pthread_mutex_unlock(&stru_1B32A4);
      return -2;
    }
    else
    {
      v7 = a2 == 0;
      if ( a2 )
        v8 = 3;
      else
        v8 = 2;
      v9 = "out";
      if ( v7 )
        v9 = "in";
      if ( write(v5, v9, v8) < 0 )
      {
        LOWORD(v20) = 19512;
        HIWORD(v20) = (unsigned int)"irection for writing!" >> 16;
        snprintf((char *)v25, 0x800u, v20, a1, v9);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, v25);
        V_UNLOCK();
        LOWORD(v21) = 18736;
        HIWORD(v21) = (unsigned int)"exist" >> 16;
        zlog(g_zc, v21, 175, "gpio_direction", 14, 342, 100, v28);
        close(v6);
        pthread_mutex_unlock(&stru_1B32A4);
        return -3;
      }
      else
      {
        LOWORD(v10) = 19552;
        HIWORD(v10) = (unsigned int)"io %d direction %s !" >> 16;
        snprintf((char *)v25, 0x800u, v10, a1, v9);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, v25);
        V_UNLOCK();
        LOWORD(v11) = 18736;
        HIWORD(v11) = (unsigned int)"exist" >> 16;
        zlog(g_zc, v11, 175, "gpio_direction", 14, 349, 20, v28);
        close(v6);
        pthread_mutex_unlock(&stru_1B32A4);
        return 0;
      }
    }
  }
}
