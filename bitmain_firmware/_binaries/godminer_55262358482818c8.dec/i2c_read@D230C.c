int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r8
  int v7; // r9
  unsigned int v8; // r2
  _BYTE *v9; // r0
  int v10; // r6
  int v11; // r2
  _DWORD *v12; // r7
  int *v13; // r0
  int v14; // r8
  char *v15; // r0
  const char *v16; // r2
  int v17; // r1
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
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
  int v36; // [sp+14h] [bp-1810h] BYREF
  int v37; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v40; // [sp+24h] [bp-1800h]
  int v41; // [sp+28h] [bp-17FCh]
  int v42; // [sp+2Ch] [bp-17F8h]
  int v43; // [sp+30h] [bp-17F4h]
  int v44; // [sp+34h] [bp-17F0h]
  __int16 v45; // [sp+38h] [bp-17ECh]
  char v46[4100]; // [sp+820h] [bp-1004h] BYREF

  v36 = a1;
  v5 = pthread_mutex_lock(&stru_1B402C);
  if ( v5 )
  {
    LOWORD(v19) = 31468;
    HIWORD(v19) = (unsigned int)"ctx have been removed" >> 16;
    v10 = -4;
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v19 += 4;
    s = v20;
    v40 = v21;
    v41 = v22;
    v42 = v23;
    v24 = v19[1];
    v43 = *v19;
    LOWORD(v44) = v24;
    BYTE2(v44) = BYTE2(v24);
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    v25 = 323;
LABEL_23:
    LOWORD(v26) = 31156;
    HIWORD(v26) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v26, 174, "i2c_read", 8, v25, 100, v46);
    return v10;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v36, &ptr) )
  {
    v10 = -2;
    pthread_mutex_unlock(&stru_1B402C);
    LOWORD(v27) = 31492;
    HIWORD(v27) = (unsigned int)"failed get to i2c lock" >> 16;
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
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    v25 = 330;
    goto LABEL_23;
  }
  v6 = ptr;
  v7 = strcmp("power-api", (const char *)ptr + 16);
  if ( v7 )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) >= 0 )
    {
      if ( a3 )
      {
        while ( read(*((_DWORD *)ptr + 3), (void *)(a2 + v5), 1u) == 1 )
        {
          if ( ++v5 == a3 )
          {
            v10 = v5;
            goto LABEL_17;
          }
        }
        v12 = ptr;
        v10 = v5;
        v13 = _errno_location();
        v14 = v12[1];
        v15 = strerror(*v13);
        LOWORD(v16) = 31620;
        HIWORD(v16) = (unsigned int)"x%02x get ioctl failed" >> 16;
        snprintf((char *)&s, 0x800u, v16, v12 + 4, v14, v5, a3, v15);
        V_LOCK();
        logfmt_raw(v46, 0x1000u, 0, &s);
        V_UNLOCK();
        v11 = 384;
LABEL_16:
        LOWORD(v17) = 31156;
        HIWORD(v17) = (unsigned int)"se init platform first!" >> 16;
        zlog(g_zc, v17, 174, "i2c_read", 8, v11, 100, v46);
        goto LABEL_17;
      }
      goto LABEL_21;
    }
    v10 = -1;
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 373;
LABEL_26:
    LOWORD(v35) = 31156;
    HIWORD(v35) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v35, 174, "i2c_read", 8, v34, 100, v46);
    free(ptr);
    pthread_mutex_unlock(&stru_1B402C);
    return v10;
  }
  if ( !sub_D194C() )
  {
    v10 = -1;
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 343;
    goto LABEL_26;
  }
  fpga_read(48, &v37);
  if ( a3 )
  {
    do
    {
      HIBYTE(v37) = HIBYTE(v37) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v8 = *((_DWORD *)ptr + 1);
      HIBYTE(v37) |= 3u;
      BYTE2(v37) = (16 * ((v8 >> 4) & 0xF)) | (v8 >> 1) & 7;
      fpga_write(48, v37);
      v9 = (_BYTE *)(a2 + v7++);
      if ( !sub_D1998(v9) )
      {
        v10 = -1;
        snprintf((char *)&s, 0x800u, "i2c_read: %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v46, 0x1000u, 0, &s);
        V_UNLOCK();
        v11 = 362;
        goto LABEL_16;
      }
    }
    while ( a3 != v7 );
    v10 = a3;
    goto LABEL_17;
  }
LABEL_21:
  v10 = 0;
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v10;
}
