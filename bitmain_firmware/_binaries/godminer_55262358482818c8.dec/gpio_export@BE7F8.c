int __fastcall gpio_export(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r6
  const char *v5; // r2
  size_t v6; // r0
  const char *v7; // r2
  int v8; // r1
  const char *v10; // r2
  int v11; // r1
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // lr
  int v18; // r1
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // lr
  int v29; // r1
  const char *v30; // r2
  int v31; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v33; // [sp+50h] [bp-1800h] BYREF
  int v34; // [sp+54h] [bp-17FCh]
  int v35; // [sp+58h] [bp-17F8h]
  int v36; // [sp+5Ch] [bp-17F4h]
  int v37; // [sp+60h] [bp-17F0h]
  int v38; // [sp+64h] [bp-17ECh]
  int v39; // [sp+68h] [bp-17E8h]
  int v40; // [sp+6Ch] [bp-17E4h]
  __int16 v41; // [sp+70h] [bp-17E0h]
  char v42; // [sp+72h] [bp-17DEh]
  char v43[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32A4) )
  {
    LOWORD(v12) = 19080;
    HIWORD(v12) = (unsigned int)"n not registered before" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v17 = v12[4];
    v33 = v13;
    v34 = v14;
    v35 = v15;
    v36 = v16;
    LOWORD(v37) = v17;
    BYTE2(v37) = BYTE2(v17);
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, &v33);
    V_UNLOCK();
    LOWORD(v18) = 18736;
    HIWORD(v18) = (unsigned int)"exist" >> 16;
    zlog(g_zc, v18, 175, "gpio_export", 11, 220, 100, v43);
    return -1;
  }
  else
  {
    LOWORD(v2) = 19100;
    HIWORD(v2) = (unsigned int)"ore" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      LOWORD(v3) = 19152;
      HIWORD(v3) = (unsigned int)" %d already exported" >> 16;
      v4 = open64(v3);
      if ( v4 < 0 )
      {
        LOWORD(v19) = 19176;
        HIWORD(v19) = (unsigned int)"/sys/class/gpio/export" >> 16;
        v20 = *v19;
        v21 = v19[1];
        v22 = v19[2];
        v23 = v19[3];
        v19 += 4;
        v33 = v20;
        v34 = v21;
        v35 = v22;
        v36 = v23;
        v24 = *v19;
        v25 = v19[1];
        v26 = v19[2];
        v27 = v19[3];
        v28 = v19[4];
        v37 = v24;
        v38 = v25;
        v39 = v26;
        v40 = v27;
        v41 = v28;
        v42 = BYTE2(v28);
        V_LOCK();
        logfmt_raw(v43, 0x1000u, 0, &v33);
        V_UNLOCK();
        LOWORD(v29) = 18736;
        HIWORD(v29) = (unsigned int)"exist" >> 16;
        zlog(g_zc, v29, 175, "gpio_export", 11, 237, 100, v43);
        pthread_mutex_unlock(&stru_1B32A4);
        return -2;
      }
      else
      {
        LOWORD(v5) = 24136;
        HIWORD(v5) = (unsigned int)"l generated local work  %d" >> 16;
        v6 = snprintf(s, 0x40u, v5, a1);
        if ( write(v4, s, v6) < 0 )
        {
          LOWORD(v30) = 19212;
          HIWORD(v30) = (unsigned int)"en export for writing!" >> 16;
          snprintf((char *)&v33, 0x800u, v30, a1);
          V_LOCK();
          logfmt_raw(v43, 0x1000u, 0, &v33);
          V_UNLOCK();
          LOWORD(v31) = 18736;
          HIWORD(v31) = (unsigned int)"exist" >> 16;
          zlog(g_zc, v31, 175, "gpio_export", 11, 245, 100, v43);
          close(v4);
          pthread_mutex_unlock(&stru_1B32A4);
          return -3;
        }
        else
        {
          LOWORD(v7) = 19240;
          HIWORD(v7) = (unsigned int)"ed to export gpio %d!" >> 16;
          snprintf((char *)&v33, 0x800u, v7, a1);
          V_LOCK();
          logfmt_raw(v43, 0x1000u, 0, &v33);
          V_UNLOCK();
          LOWORD(v8) = 18736;
          HIWORD(v8) = (unsigned int)"exist" >> 16;
          zlog(g_zc, v8, 175, "gpio_export", 11, 250, 20, v43);
          close(v4);
          pthread_mutex_unlock(&stru_1B32A4);
          return 0;
        }
      }
    }
    else
    {
      LOWORD(v10) = 19124;
      HIWORD(v10) = (unsigned int)"/sys/class/gpio/gpio%d" >> 16;
      snprintf((char *)&v33, 0x800u, v10, a1);
      V_LOCK();
      logfmt_raw(v43, 0x1000u, 0, &v33);
      V_UNLOCK();
      LOWORD(v11) = 18736;
      HIWORD(v11) = (unsigned int)"exist" >> 16;
      zlog(g_zc, v11, 175, "gpio_export", 11, 228, 80, v43);
      pthread_mutex_unlock(&stru_1B32A4);
      return 0;
    }
  }
}
