int __fastcall i2c_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r4
  _DWORD *v8; // r9
  int v9; // r10
  int v10; // r7
  char v11; // t1
  int v12; // r12
  unsigned int v13; // r2
  _BYTE *v14; // r0
  int v15; // r6
  int v16; // r2
  _DWORD *v17; // r7
  int *v18; // r0
  int v19; // r8
  char *v20; // r0
  const char *v21; // r2
  int v22; // r1
  int *v24; // lr
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r1
  int *v31; // lr
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r1
  int v42; // [sp+14h] [bp-180Ch] BYREF
  int v43; // [sp+18h] [bp-1808h] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v46; // [sp+24h] [bp-17FCh]
  int v47; // [sp+28h] [bp-17F8h]
  int v48; // [sp+2Ch] [bp-17F4h]
  int v49; // [sp+30h] [bp-17F0h]
  int v50; // [sp+34h] [bp-17ECh]
  int v51; // [sp+38h] [bp-17E8h]
  __int16 v52; // [sp+3Ch] [bp-17E4h]
  char v53[4096]; // [sp+820h] [bp-1000h] BYREF

  v42 = a1;
  v7 = pthread_mutex_lock(&stru_1B402C);
  if ( v7 )
  {
    LOWORD(v24) = 31332;
    HIWORD(v24) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v15 = -1;
    v25 = *v24;
    v26 = v24[1];
    v27 = v24[2];
    v28 = v24[3];
    v24 += 4;
    s = v25;
    v46 = v26;
    v47 = v27;
    v48 = v28;
    v29 = v24[1];
    v49 = *v24;
    LOWORD(v50) = v29;
    BYTE2(v50) = BYTE2(v29);
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v30) = 31156;
    HIWORD(v30) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v30, 174, "i2c_read_reg", 12, 495, 100, v53);
    return v15;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v42, &ptr) )
  {
    LOWORD(v31) = 31816;
    HIWORD(v31) = (unsigned int)" in %d size, error: %s" >> 16;
    v15 = -2;
    v32 = *v31;
    v33 = v31[1];
    v34 = v31[2];
    v35 = v31[3];
    v31 += 4;
    s = v32;
    v46 = v33;
    v47 = v34;
    v48 = v35;
    v36 = v31[1];
    v37 = v31[2];
    v38 = v31[3];
    v49 = *v31;
    v50 = v36;
    v51 = v37;
    v52 = v38;
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v39) = 31156;
    HIWORD(v39) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v39, 174, "i2c_read_reg", 12, 501, 100, v53);
    pthread_mutex_unlock(&stru_1B402C);
    return v15;
  }
  v8 = ptr;
  v9 = strcmp("power-api", (const char *)ptr + 16);
  if ( v9 )
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) >= 0 )
    {
      if ( a5 )
      {
        do
        {
          write(*((_DWORD *)ptr + 3), (const void *)(a2 + v7), 1u);
          if ( read(*((_DWORD *)ptr + 3), (void *)(a4 + v7), 1u) != 1 )
          {
            v17 = ptr;
            v15 = v7;
            v18 = _errno_location();
            v19 = v17[1];
            v20 = strerror(*v18);
            LOWORD(v21) = 31876;
            HIWORD(v21) = (unsigned int)"%s 0x%02x read failed" >> 16;
            snprintf((char *)&s, 0x800u, v21, v17 + 4, v19, v7, a5, v20);
            V_LOCK();
            logfmt_raw(v53, 0x1000u, 0, &s);
            V_UNLOCK();
            v16 = 558;
            goto LABEL_16;
          }
          ++v7;
        }
        while ( a5 != v7 );
LABEL_19:
        v15 = a5;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v15 = -1;
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    v40 = 546;
LABEL_24:
    LOWORD(v41) = 31156;
    HIWORD(v41) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v41, 174, "i2c_read_reg", 12, v40, 100, v53);
    free(ptr);
    pthread_mutex_unlock(&stru_1B402C);
    return v15;
  }
  if ( !sub_D194C() )
  {
    v15 = -1;
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    v40 = 515;
    goto LABEL_24;
  }
  fpga_read(48, &v43);
  if ( a5 )
  {
    v10 = a2 - 1;
    while ( 1 )
    {
      v11 = *(_BYTE *)++v10;
      v12 = *(_DWORD *)ptr;
      BYTE1(v43) = v11;
      HIBYTE(v43) = HIBYTE(v43) & 0xE3 | (4 * (v12 & 7));
      v13 = *((_DWORD *)ptr + 1);
      HIBYTE(v43) |= 3u;
      BYTE2(v43) = (16 * ((v13 >> 4) & 0xF)) | (v13 >> 1) & 7;
      fpga_write(48, v43);
      v14 = (_BYTE *)(a4 + v9++);
      if ( !sub_D1998(v14) )
        break;
      if ( a5 == v9 )
        goto LABEL_19;
    }
    v15 = -1;
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v53, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = 535;
LABEL_16:
    LOWORD(v22) = 31156;
    HIWORD(v22) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v22, 174, "i2c_read_reg", 12, v16, 100, v53);
    goto LABEL_17;
  }
LABEL_20:
  v15 = 0;
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v15;
}
