int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r8
  int v7; // r4
  int v8; // r6
  int v9; // r4
  char v10; // t1
  unsigned int v11; // r12
  int v12; // r6
  _DWORD *v14; // r7
  int *v15; // r0
  int v16; // r8
  char *v17; // r0
  const char *v18; // r2
  int v19; // r1
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r1
  int *v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r2
  int v35; // r1
  int v36; // r1
  int v37; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v40; // [sp+24h] [bp-17FCh]
  int v41; // [sp+28h] [bp-17F8h]
  int v42; // [sp+2Ch] [bp-17F4h]
  int v43; // [sp+30h] [bp-17F0h]
  int v44; // [sp+34h] [bp-17ECh]
  __int16 v45; // [sp+38h] [bp-17E8h]
  char v46; // [sp+3Ah] [bp-17E6h]
  int v47[1024]; // [sp+820h] [bp-1000h] BYREF

  v37 = a1;
  v5 = pthread_mutex_lock(&stru_1B402C);
  if ( v5 )
  {
    LOWORD(v20) = 31332;
    HIWORD(v20) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v12 = -4;
    v21 = *v20;
    v22 = v20[1];
    v23 = v20[2];
    v24 = v20[3];
    v20 += 4;
    s = v21;
    v40 = v22;
    v41 = v23;
    v42 = v24;
    v25 = v20[1];
    v43 = *v20;
    LOWORD(v44) = v25;
    BYTE2(v44) = BYTE2(v25);
    V_LOCK();
    logfmt_raw((char *)v47, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v26) = 31156;
    HIWORD(v26) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v26, 174, "i2c_write", 9, 412, 100, v47);
    return v12;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v37, &ptr) )
  {
    LOWORD(v27) = 31684;
    HIWORD(v27) = (unsigned int)"in %d size, error: %s" >> 16;
    v12 = -2;
    v28 = *v27;
    v29 = v27[1];
    v30 = v27[2];
    v31 = v27[3];
    v27 += 4;
    s = v28;
    v40 = v29;
    v41 = v30;
    v42 = v31;
    v32 = v27[1];
    v33 = v27[2];
    v43 = *v27;
    v44 = v32;
    v45 = v33;
    v46 = BYTE2(v33);
    V_LOCK();
    logfmt_raw((char *)v47, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 418;
LABEL_20:
    LOWORD(v35) = 31156;
    HIWORD(v35) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v35, 174, "i2c_write", 9, v34, 100, v47);
    pthread_mutex_unlock(&stru_1B402C);
    return v12;
  }
  v6 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) < 0 )
    {
      v12 = -1;
      snprintf((char *)&s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v47, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v36) = 31156;
      HIWORD(v36) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v36, 174, "i2c_write", 9, 455, 100, v47);
      free(ptr);
      pthread_mutex_unlock(&stru_1B402C);
      return v12;
    }
    if ( a3 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_8;
      }
      v14 = ptr;
      v12 = v5;
      v15 = _errno_location();
      v16 = v14[1];
      v17 = strerror(*v15);
      LOWORD(v18) = 31752;
      HIWORD(v18) = (unsigned int)"02x not ready for write" >> 16;
      snprintf((char *)&s, 0x800u, v18, v14 + 4, v16, v5, a3, v17);
      V_LOCK();
      logfmt_raw((char *)v47, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v19) = 31156;
      HIWORD(v19) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v19, 174, "i2c_write", 9, 466, 100, v47);
      goto LABEL_9;
    }
    goto LABEL_17;
  }
  if ( !sub_D194C() )
  {
    v12 = -1;
    free(ptr);
    snprintf(
      (char *)&s,
      0x800u,
      "i2c_writ: %s 0x%02x not ready for write",
      (const char *)ptr + 16,
      *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw((char *)v47, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 433;
    goto LABEL_20;
  }
  fpga_read(48, v47);
  if ( a3 )
  {
    v7 = a2 + a3;
    v8 = a2 - 1;
    v9 = v7 - 1;
    do
    {
      v10 = *(_BYTE *)++v8;
      HIBYTE(v47[0]) = HIBYTE(v47[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v11 = *((_DWORD *)ptr + 1);
      LOBYTE(v47[0]) = v10;
      HIBYTE(v47[0]) = HIBYTE(v47[0]) & 0xFC | 1;
      BYTE2(v47[0]) = (16 * ((v11 >> 4) & 0xF)) | (v11 >> 1) & 7;
      fpga_write(48, v47[0]);
    }
    while ( v9 != v8 );
LABEL_8:
    v12 = a3;
    goto LABEL_9;
  }
LABEL_17:
  v12 = 0;
LABEL_9:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v12;
}
