int __fastcall iic_init(int a1)
{
  int v2; // r6
  int v3; // r3
  bool v4; // zf
  int v5; // r5
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r12
  int v13; // r12
  int v14; // r3
  int v15; // r1
  int *v16; // r0
  int v17; // r0
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r12
  int *v24; // r12
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int *v32; // lr
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // lr
  int *v38; // r2
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int *v44; // lr
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // lr
  int v50; // r3
  int v51; // r1
  int *v52; // lr
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // lr
  int v58; // r3
  int v59; // r1
  int v60; // [sp+10h] [bp-1800h] BYREF
  int v61; // [sp+14h] [bp-17FCh]
  int v62; // [sp+18h] [bp-17F8h]
  int v63; // [sp+1Ch] [bp-17F4h]
  int v64; // [sp+20h] [bp-17F0h]
  char v65; // [sp+24h] [bp-17ECh]
  char v66[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1B32C0) )
  {
    LOWORD(v52) = 19904;
    HIWORD(v52) = (unsigned int)"_reg" >> 16;
    v53 = *v52;
    v54 = v52[1];
    v55 = v52[2];
    v56 = v52[3];
    v5 = -4;
    v57 = v52[4];
    v60 = v53;
    v61 = v54;
    v62 = v55;
    v63 = v56;
    LOWORD(v64) = v57;
    BYTE2(v64) = BYTE2(v57);
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, &v60);
    V_UNLOCK();
    LOWORD(v58) = 19824;
    LOWORD(v59) = 19924;
    HIWORD(v58) = (unsigned int)"Failed to write value!" >> 16;
    HIWORD(v59) = (unsigned int)"g" >> 16;
    zlog(g_zc, v59, 174, v58, 8, 21, 100, v66);
    return v5;
  }
  if ( !a1 )
  {
    pthread_mutex_unlock(&stru_1B32C0);
    LOWORD(v38) = 32188;
    HIWORD(v38) = (unsigned int)"failed!" >> 16;
    v39 = *v38;
    v40 = v38[1];
    v41 = v38[2];
    v60 = v39;
    v61 = v40;
    LOWORD(v62) = v41;
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, &v60);
    V_UNLOCK();
    LOWORD(v42) = 19824;
    LOWORD(v43) = 19924;
    HIWORD(v42) = (unsigned int)"Failed to write value!" >> 16;
    HIWORD(v43) = (unsigned int)"g" >> 16;
    zlog(g_zc, v43, 174, v42, 8, 28, 100, v66);
  }
  v2 = *(unsigned __int16 *)(a1 + 4);
  if ( *(_WORD *)(a1 + 4) )
    goto LABEL_8;
  v3 = *(unsigned __int8 *)(a1 + 6);
  v4 = v3 == 4;
  if ( v3 != 4 )
    v4 = v3 == 10;
  if ( v4 )
  {
    v16 = hal_chain_i2c_dev(*(unsigned __int8 *)(a1 + 7));
    v17 = i2c_init((const char *)v16);
    v5 = v17;
    if ( v17 < 0 )
    {
      LOWORD(v32) = 20100;
      HIWORD(v32) = (unsigned int)"atform/7020/7020_iic.c" >> 16;
      v33 = *v32;
      v34 = v32[1];
      v35 = v32[2];
      v36 = v32[3];
      v5 = -1;
      v37 = v32[4];
      v60 = v33;
      v61 = v34;
      v62 = v35;
      v63 = v36;
      LOWORD(v64) = v37;
      BYTE2(v64) = BYTE2(v37);
      V_LOCK();
      logfmt_raw(v66, 0x1000u, v2, &v60);
      V_UNLOCK();
      v13 = 47;
    }
    else
    {
      if ( !i2c_ioctl(v17, 1795, 16 * *(unsigned __int8 *)(a1 + 6)) )
        goto LABEL_13;
      LOWORD(v18) = 20120;
      HIWORD(v18) = (unsigned int)".c" >> 16;
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      v5 = -1;
      v23 = v18[4];
      v60 = v19;
      v61 = v20;
      v62 = v21;
      v63 = v22;
      v64 = v23;
      V_LOCK();
      logfmt_raw(v66, 0x1000u, v2, &v60);
      V_UNLOCK();
      v13 = 55;
    }
  }
  else
  {
LABEL_8:
    v5 = i2c_init("power-api");
    if ( v5 < 0 )
    {
      LOWORD(v44) = 20100;
      HIWORD(v44) = (unsigned int)"atform/7020/7020_iic.c" >> 16;
      v45 = *v44;
      v46 = v44[1];
      v47 = v44[2];
      v48 = v44[3];
      v49 = v44[4];
      v60 = v45;
      v61 = v46;
      v62 = v47;
      v63 = v48;
      LOWORD(v64) = v49;
      BYTE2(v64) = BYTE2(v49);
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, &v60);
      V_UNLOCK();
      LOWORD(v50) = 19824;
      LOWORD(v51) = 19924;
      HIWORD(v50) = (unsigned int)"Failed to write value!" >> 16;
      HIWORD(v51) = (unsigned int)"g" >> 16;
      zlog(g_zc, v51, 174, v50, 8, 73, 100, v66);
    }
    if ( i2c_select(v5, *(unsigned __int16 *)(a1 + 4)) )
    {
      LOWORD(v24) = 20152;
      HIWORD(v24) = (unsigned int)"o i2c_ioctl" >> 16;
      v25 = *v24;
      v26 = v24[1];
      v27 = v24[2];
      v28 = v24[3];
      v24 += 4;
      v60 = v25;
      v61 = v26;
      v62 = v27;
      v63 = v28;
      v29 = v24[1];
      v64 = *v24;
      v65 = v29;
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, &v60);
      V_UNLOCK();
      LOWORD(v30) = 19824;
      LOWORD(v31) = 19924;
      HIWORD(v30) = (unsigned int)"Failed to write value!" >> 16;
      HIWORD(v31) = (unsigned int)"g" >> 16;
      zlog(g_zc, v31, 174, v30, 8, 82, 100, v66);
    }
    if ( !i2c_ioctl(v5, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      goto LABEL_13;
    LOWORD(v7) = 20120;
    HIWORD(v7) = (unsigned int)".c" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v12 = v7[4];
    v60 = v8;
    v61 = v9;
    v62 = v10;
    v63 = v11;
    v64 = v12;
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, &v60);
    V_UNLOCK();
    v13 = 87;
  }
  LOWORD(v14) = 19824;
  LOWORD(v15) = 19924;
  HIWORD(v14) = (unsigned int)"Failed to write value!" >> 16;
  HIWORD(v15) = (unsigned int)"g" >> 16;
  zlog(g_zc, v15, 174, v14, 8, v13, 100, v66);
LABEL_13:
  pthread_mutex_unlock(&stru_1B32C0);
  return v5;
}
