int __fastcall i2c_write_reg(int a1, char *a2, int a3, int a4, int a5)
{
  int v7; // r4
  _DWORD *v8; // r9
  int v9; // r7
  char *v10; // r4
  char *v11; // r6
  char v12; // r9
  char v13; // t1
  char v14; // t1
  unsigned int v15; // lr
  int v16; // r6
  _DWORD *v18; // r7
  int *v19; // r0
  int v20; // r8
  char *v21; // r0
  const char *v22; // r2
  int v23; // r1
  int *v24; // r12
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  int v34; // r2
  int v35; // r1
  int *v36; // lr
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r1
  int *v42; // lr
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r2
  int v51; // r1
  int v52; // r1
  int v53; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v56; // [sp+24h] [bp-17FCh]
  int v57; // [sp+28h] [bp-17F8h]
  int v58; // [sp+2Ch] [bp-17F4h]
  int v59; // [sp+30h] [bp-17F0h]
  int v60; // [sp+34h] [bp-17ECh]
  int v61; // [sp+38h] [bp-17E8h]
  int v62; // [sp+3Ch] [bp-17E4h]
  int v63; // [sp+40h] [bp-17E0h]
  __int16 v64; // [sp+44h] [bp-17DCh]
  int v65[1024]; // [sp+820h] [bp-1000h] BYREF

  v53 = a1;
  if ( a3 != 1 )
  {
    LOWORD(v24) = 31944;
    HIWORD(v24) = (unsigned int)"n %d size, error: %s" >> 16;
    v16 = -3;
    v25 = *v24;
    v26 = v24[1];
    v27 = v24[2];
    v28 = v24[3];
    v24 += 4;
    s = v25;
    v56 = v26;
    v57 = v27;
    v58 = v28;
    v29 = *v24;
    v30 = v24[1];
    v31 = v24[2];
    v32 = v24[3];
    v24 += 4;
    v59 = v29;
    v60 = v30;
    v61 = v31;
    v62 = v32;
    v33 = v24[1];
    v63 = *v24;
    v64 = v33;
    V_LOCK();
    logfmt_raw((char *)v65, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 587;
LABEL_20:
    LOWORD(v35) = 31156;
    HIWORD(v35) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v35, 174, "i2c_write_reg", 13, v34, 100, v65);
    return v16;
  }
  v7 = pthread_mutex_lock(&stru_1B402C);
  if ( v7 )
  {
    LOWORD(v36) = 31332;
    HIWORD(v36) = (unsigned int)"atform/7020/7020_i2c.c" >> 16;
    v16 = -4;
    v37 = *v36;
    v38 = v36[1];
    v39 = v36[2];
    v40 = v36[3];
    v36 += 4;
    s = v37;
    v56 = v38;
    v57 = v39;
    v58 = v40;
    v41 = v36[1];
    v59 = *v36;
    LOWORD(v60) = v41;
    BYTE2(v60) = BYTE2(v41);
    V_LOCK();
    logfmt_raw((char *)v65, 0x1000u, 0, &s);
    V_UNLOCK();
    v34 = 593;
    goto LABEL_20;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v53, &ptr) )
  {
    LOWORD(v42) = 31984;
    HIWORD(v42) = (unsigned int)"ytes register address" >> 16;
    v16 = -2;
    v43 = *v42;
    v44 = v42[1];
    v45 = v42[2];
    v46 = v42[3];
    v42 += 4;
    s = v43;
    v56 = v44;
    v57 = v45;
    v58 = v46;
    v47 = v42[1];
    v48 = v42[2];
    v49 = v42[3];
    v59 = *v42;
    v60 = v47;
    v61 = v48;
    LOWORD(v62) = v49;
    BYTE2(v62) = BYTE2(v49);
    V_LOCK();
    logfmt_raw((char *)v65, 0x1000u, 0, &s);
    V_UNLOCK();
    v50 = 599;
LABEL_23:
    LOWORD(v51) = 31156;
    HIWORD(v51) = (unsigned int)"se init platform first!" >> 16;
    zlog(g_zc, v51, 174, "i2c_write_reg", 13, v50, 100, v65);
    pthread_mutex_unlock(&stru_1B402C);
    return v16;
  }
  v8 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) < 0 )
    {
      v16 = -1;
      snprintf((char *)&s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v65, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v52) = 31156;
      HIWORD(v52) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v52, 174, "i2c_write_reg", 13, 637, 100, v65);
      free(ptr);
      pthread_mutex_unlock(&stru_1B402C);
      return v16;
    }
    write(*((_DWORD *)ptr + 3), a2, 1u);
    if ( a5 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a4 + v7), 1u) == 1 )
      {
        if ( a5 == ++v7 )
          goto LABEL_9;
      }
      v18 = ptr;
      v16 = v7;
      v19 = _errno_location();
      v20 = v18[1];
      v21 = strerror(*v19);
      LOWORD(v22) = 32052;
      HIWORD(v22) = (unsigned int)"x not ready for write" >> 16;
      snprintf((char *)&s, 0x800u, v22, v18 + 4, v20, v7, a5, v21);
      V_LOCK();
      logfmt_raw((char *)v65, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v23) = 31156;
      HIWORD(v23) = (unsigned int)"se init platform first!" >> 16;
      zlog(g_zc, v23, 174, "i2c_write_reg", 13, 649, 100, v65);
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  if ( !sub_D194C() )
  {
    v16 = -1;
    free(ptr);
    snprintf((char *)&s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw((char *)v65, 0x1000u, 0, &s);
    V_UNLOCK();
    v50 = 614;
    goto LABEL_23;
  }
  fpga_read(48, v65);
  if ( a5 )
  {
    v9 = a4 - 1;
    v10 = &a2[a5 - 1];
    v11 = a2 - 1;
    do
    {
      v13 = *++v11;
      v12 = v13;
      v14 = *(_BYTE *)++v9;
      HIBYTE(v65[0]) = HIBYTE(v65[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v15 = *((_DWORD *)ptr + 1);
      BYTE1(v65[0]) = v12;
      LOBYTE(v65[0]) = v14;
      HIBYTE(v65[0]) = HIBYTE(v65[0]) & 0xFC | 1;
      BYTE2(v65[0]) = (16 * ((v15 >> 4) & 0xF)) | (v15 >> 1) & 7;
      fpga_write(48, v65[0]);
    }
    while ( v10 != v11 );
LABEL_9:
    v16 = a5;
    goto LABEL_10;
  }
LABEL_18:
  v16 = 0;
LABEL_10:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v16;
}
