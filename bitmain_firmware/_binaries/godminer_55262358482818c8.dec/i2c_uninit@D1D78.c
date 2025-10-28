int __fastcall i2c_uninit(int a1)
{
  const char *v1; // r2
  int v2; // r1
  int (**v3)(void); // r4
  int *v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r1
  int *v12; // r4
  const char *v13; // r2
  int v14; // r1
  int *v15; // lr
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  _DWORD v24[2]; // [sp+14h] [bp-1810h] BYREF
  int v25; // [sp+1Ch] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v27; // [sp+24h] [bp-1800h]
  int v28; // [sp+28h] [bp-17FCh]
  int v29; // [sp+2Ch] [bp-17F8h]
  int v30; // [sp+30h] [bp-17F4h]
  int v31; // [sp+34h] [bp-17F0h]
  int v32; // [sp+38h] [bp-17ECh]
  __int16 v33; // [sp+3Ch] [bp-17E8h]
  char v34[4100]; // [sp+820h] [bp-1004h] BYREF

  v24[0] = a1;
  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    LOWORD(v5) = 31332;
    HIWORD(v5) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[3];
    v5 += 4;
    s = v6;
    v27 = v7;
    v28 = v8;
    v29 = v9;
    v10 = v5[1];
    v30 = *v5;
    LOWORD(v31) = v10;
    BYTE2(v31) = BYTE2(v10);
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v11) = 31156;
    HIWORD(v11) = (unsigned int)"se init platform first!" >> 16;
    return zlog(g_zc, v11, 174, "i2c_uninit", 10, 151, 100, v34);
  }
  else
  {
    if ( exists_c_map((int *)dword_1B4048, (int)v24) == (int *)1 )
    {
      find_c_map((int *)dword_1B4048, (int)v24, &v25);
      v12 = (int *)v25;
      if ( !strcmp("power-api", (const char *)(v25 + 16)) )
      {
        close(v12[3]);
        v12 = (int *)v25;
      }
      free(v12);
      LOWORD(v13) = 31376;
      HIWORD(v13) = (unsigned int)"ck" >> 16;
      snprintf((char *)&s, 0x800u, v13, v24[0]);
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v14) = 31156;
      HIWORD(v14) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v14, 174, "i2c_uninit", 10, 164, 40, v34);
      remove_c_map((int *)dword_1B4048, (int)v24);
    }
    else
    {
      LOWORD(v1) = 31404;
      HIWORD(v1) = (unsigned int)"ctx %d has been removed" >> 16;
      snprintf((char *)&s, 0x800u, v1, v24[0]);
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v2) = 31156;
      HIWORD(v2) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v2, 174, "i2c_uninit", 10, 169, 80, v34);
    }
    v3 = (int (**)(void))new_iterator_c_map(dword_1B4048);
    if ( (*v3)() )
    {
      while ( ((int (__fastcall *)(int (**)(void)))*v3)(v3) )
        ;
      delete_iterator_c_map(v3);
    }
    else
    {
      delete_iterator_c_map(v3);
      dword_1B4044 = 0;
      dword_1B4048 = 0;
      delete_c_map(0);
      LOWORD(v15) = 31436;
      HIWORD(v15) = (unsigned int)"%d is not initialized" >> 16;
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v19 = v15[3];
      v15 += 4;
      s = v16;
      v27 = v17;
      v28 = v18;
      v29 = v19;
      v20 = v15[1];
      v21 = v15[2];
      v22 = v15[3];
      v30 = *v15;
      v31 = v20;
      v32 = v21;
      v33 = v22;
      V_LOCK();
      logfmt_raw(v34, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v23) = 31156;
      HIWORD(v23) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v23, 174, "i2c_uninit", 10, 187, 40, v34);
    }
    return pthread_mutex_unlock(&stru_1B402C);
  }
}
