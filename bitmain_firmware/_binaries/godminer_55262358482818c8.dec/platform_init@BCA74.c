int platform_init()
{
  int *v1; // r3
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r8
  int v8; // r11
  int v9; // r3
  const char *v10; // r10
  int v11; // r6
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r7
  int v16; // r3
  int *v17; // r1
  int v18; // r2
  int v19; // r0
  int v20; // r1
  int *v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int *v37; // r8
  char *v38; // r3
  int v39; // r11
  const char *v40; // r10
  int *v41; // r7
  unsigned int v42; // r6
  int v43; // t1
  int *v44; // lr
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // lr
  int v58; // r1
  const char *v59; // r2
  int *v60; // r12
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r12
  int v66; // r0
  int v67; // r3
  int v68; // r1
  int *v69; // r3
  int v70; // r0
  int v71; // r1
  int v72; // r2
  int v73; // r3
  int *v74; // r12
  int v75; // r0
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r12
  int v80; // [sp+14h] [bp-1818h]
  unsigned int v81; // [sp+14h] [bp-1818h]
  int c; // [sp+18h] [bp-1814h]
  char *format; // [sp+1Ch] [bp-1810h]
  char *formata; // [sp+1Ch] [bp-1810h]
  int v85; // [sp+24h] [bp-1808h] BYREF
  int v86; // [sp+28h] [bp-1804h] BYREF
  int v87; // [sp+2Ch] [bp-1800h]
  int v88; // [sp+30h] [bp-17FCh]
  int v89; // [sp+34h] [bp-17F8h]
  int v90; // [sp+38h] [bp-17F4h]
  int v91; // [sp+3Ch] [bp-17F0h]
  int v92; // [sp+40h] [bp-17ECh]
  int v93; // [sp+44h] [bp-17E8h]
  int v94; // [sp+48h] [bp-17E4h]
  int v95; // [sp+4Ch] [bp-17E0h]
  int v96; // [sp+50h] [bp-17DCh]
  int v97; // [sp+54h] [bp-17D8h]
  int v98; // [sp+58h] [bp-17D4h]
  char v99; // [sp+5Ch] [bp-17D0h]
  _DWORD v100[1025]; // [sp+828h] [bp-1004h] BYREF

  v85 = 0;
  if ( platform_inited[0] )
    return 0;
  LOWORD(v1) = 17616;
  HIWORD(v1) = (unsigned int)"_common.c" >> 16;
  v2 = *v1;
  v3 = v1[1];
  v4 = v1[2];
  v5 = v1[3];
  v86 = v2;
  v87 = v3;
  v88 = v4;
  LOWORD(v89) = v5;
  V_LOCK();
  logfmt_raw((char *)v100, 0x1000u, 0, &v86);
  V_UNLOCK();
  LOWORD(v6) = 17424;
  HIWORD(v6) = (unsigned int)"_control" >> 16;
  zlog(g_zc, v6, 177, "platform_init", 13, 53, 60, v100);
  if ( fpga_init() )
  {
    LOWORD(v60) = 17632;
    HIWORD(v60) = (unsigned int)"r ioctl" >> 16;
    c = -1;
    v61 = *v60;
    v62 = v60[1];
    v63 = v60[2];
    v64 = v60[3];
    v65 = v60[4];
    v86 = v61;
    v87 = v62;
    v88 = v63;
    v89 = v64;
    LOBYTE(v90) = v65;
    V_LOCK();
    logfmt_raw((char *)v100, 0x1000u, 0, &v86);
    V_UNLOCK();
    v66 = g_zc;
    v67 = 57;
LABEL_26:
    LOWORD(v68) = 17424;
    HIWORD(v68) = (unsigned int)"_control" >> 16;
    zlog(v66, v68, 177, "platform_init", 13, v67, 100, v100);
    return c;
  }
  if ( hal_init() )
  {
    LOWORD(v69) = 17652;
    HIWORD(v69) = (unsigned int)"t" >> 16;
    c = -1;
    v70 = *v69;
    v71 = v69[1];
    v72 = v69[2];
    v73 = v69[3];
    v86 = v70;
    v87 = v71;
    v88 = v72;
    v89 = v73;
    V_LOCK();
    logfmt_raw((char *)v100, 0x1000u, 0, &v86);
    V_UNLOCK();
    v66 = g_zc;
    v67 = 63;
    goto LABEL_26;
  }
  if ( gpio_init() )
  {
    LOWORD(v74) = 17668;
    HIWORD(v74) = (unsigned int)"iled" >> 16;
    c = -2;
    v75 = *v74;
    v76 = v74[1];
    v77 = v74[2];
    v78 = v74[3];
    v79 = v74[4];
    v86 = v75;
    v87 = v76;
    v88 = v77;
    v89 = v78;
    LOBYTE(v90) = v79;
    V_LOCK();
    logfmt_raw((char *)v100, 0x1000u, 0, &v86);
    V_UNLOCK();
    v66 = g_zc;
    v67 = 69;
    goto LABEL_26;
  }
  v7 = 0;
  memset(&dword_1B3140, 0, 0x124u);
  v8 = hal_chain_max_num();
  if ( v8 > 0 )
  {
    LOWORD(v9) = 17424;
    LOWORD(v10) = 17720;
    HIWORD(v9) = (unsigned int)"_control" >> 16;
    v80 = v9;
    v11 = 0;
    while ( 1 )
    {
      v14 = hal_chain_plug_addr(v11);
      v15 = v14;
      if ( v14 < 0 )
        break;
      gpio_export(v14);
      gpio_direction(v15, 0);
      gpio_read(v15, &v85);
      if ( v85 == 1 )
      {
        v16 = 9 * v7++;
        dword_1B3140 = v7;
        v17 = &platform_inited[2 * v16];
        v18 = v17[3];
        v17[2] = v11;
        v17[3] = v18 + 1;
        platform_inited[2 * v16 + 4 + v18] = v11;
        v19 = hal_chain_reset_addr(v11);
        format = (char *)v19;
        if ( v19 < 0 )
          goto LABEL_12;
        gpio_export(v19);
        ++v11;
        gpio_direction((int)format, 1);
        gpio_write((int)format, 0);
        if ( v8 == v11 )
          goto LABEL_17;
      }
      else
      {
        HIWORD(v10) = (unsigned int)"get slot for chain %d" >> 16;
        snprintf((char *)&v86, 0x800u, v10, v15);
        V_LOCK();
        logfmt_raw((char *)v100, 0x1000u, 0, &v86);
        V_UNLOCK();
        v12 = g_zc;
        v13 = 114;
LABEL_11:
        zlog(v12, v80, 177, "platform_init", 13, v13, 80, v100);
LABEL_12:
        if ( v8 == ++v11 )
          goto LABEL_17;
      }
    }
    LOWORD(v59) = 17688;
    HIWORD(v59) = (unsigned int)"led" >> 16;
    snprintf((char *)&v86, 0x800u, v59, v11);
    V_LOCK();
    logfmt_raw((char *)v100, 0x1000u, 0, &v86);
    V_UNLOCK();
    v12 = g_zc;
    v13 = 83;
    goto LABEL_11;
  }
LABEL_17:
  v100[0] = 0;
  fpga_read(0, v100);
  v85 = v100[0];
  snprintf((char *)&v86, 0x800u, "HARDWARE_VERSION = 0x%x", v100[0]);
  V_LOCK();
  logfmt_raw((char *)v100, 0x1000u, 0, &v86);
  V_UNLOCK();
  LOWORD(v20) = 17424;
  HIWORD(v20) = (unsigned int)"_control" >> 16;
  zlog(g_zc, v20, 177, "platform_init", 13, 119, 60, v100);
  LOWORD(v21) = 17772;
  HIWORD(v21) = (unsigned int)"HARDWARE_VERSION = 0x%x" >> 16;
  v22 = *v21;
  v23 = v21[1];
  v24 = v21[2];
  v25 = v21[3];
  v21 += 4;
  v86 = v22;
  v87 = v23;
  v88 = v24;
  v89 = v25;
  v26 = *v21;
  v27 = v21[1];
  v28 = v21[2];
  v29 = v21[3];
  v21 += 4;
  v90 = v26;
  v91 = v27;
  v92 = v28;
  v93 = v29;
  v30 = *v21;
  v31 = v21[1];
  v32 = v21[2];
  v33 = v21[3];
  v21 += 4;
  v94 = v30;
  v95 = v31;
  v96 = v32;
  v97 = v33;
  v34 = v21[1];
  v98 = *v21;
  v99 = v34;
  V_LOCK();
  logfmt_raw((char *)v100, 0x1000u, 0, &v86);
  V_UNLOCK();
  LOWORD(v35) = 17424;
  HIWORD(v35) = (unsigned int)"_control" >> 16;
  zlog(g_zc, v35, 177, "platform_dump_capability", 24, 26, 60, v100);
  snprintf((char *)&v86, 0x800u, "board num = %d", dword_1B3140);
  V_LOCK();
  logfmt_raw((char *)v100, 0x1000u, 0, &v86);
  V_UNLOCK();
  LOWORD(v36) = 17424;
  HIWORD(v36) = (unsigned int)"_control" >> 16;
  zlog(g_zc, v36, 177, "platform_dump_capability", 24, 27, 60, v100);
  if ( dword_1B3140 )
  {
    v37 = &dword_1B3140;
    LOWORD(v39) = 17424;
    LOWORD(v38) = 17844;
    HIWORD(v39) = (unsigned int)"_control" >> 16;
    HIWORD(v38) = (unsigned int)"====" >> 16;
    v81 = 0;
    formata = v38;
    do
    {
      snprintf((char *)&v86, 0x800u, formata, v37[1], v37[2]);
      V_LOCK();
      logfmt_raw((char *)v100, 0x1000u, 0, &v86);
      V_UNLOCK();
      zlog(g_zc, v39, 177, "platform_dump_capability", 24, 31, 60, v100);
      if ( v37[2] )
      {
        LOWORD(v40) = 17876;
        v41 = v37 + 2;
        v42 = 0;
        do
        {
          v43 = v41[1];
          ++v41;
          HIWORD(v40) = (unsigned int)" = %d, chain num = %d" >> 16;
          snprintf((char *)&v86, 0x800u, v40, v43);
          V_LOCK();
          logfmt_raw((char *)v100, 0x1000u, 0, &v86);
          V_UNLOCK();
          ++v42;
          zlog(g_zc, v39, 177, "platform_dump_capability", 24, 34, 60, v100);
        }
        while ( v37[2] > v42 );
      }
      v37 += 18;
      ++v81;
    }
    while ( dword_1B3140 > v81 );
  }
  LOWORD(v44) = 17892;
  HIWORD(v44) = (unsigned int)" = %d" >> 16;
  v45 = *v44;
  v46 = v44[1];
  v47 = v44[2];
  v48 = v44[3];
  v44 += 4;
  v86 = v45;
  v87 = v46;
  v88 = v47;
  v89 = v48;
  v49 = *v44;
  v50 = v44[1];
  v51 = v44[2];
  v52 = v44[3];
  v44 += 4;
  v90 = v49;
  v91 = v50;
  v92 = v51;
  v93 = v52;
  v53 = *v44;
  v54 = v44[1];
  v55 = v44[2];
  v56 = v44[3];
  v57 = v44[4];
  v94 = v53;
  v95 = v54;
  v96 = v55;
  v97 = v56;
  LOWORD(v98) = v57;
  BYTE2(v98) = BYTE2(v57);
  V_LOCK();
  logfmt_raw((char *)v100, 0x1000u, 0, &v86);
  V_UNLOCK();
  LOWORD(v58) = 17424;
  HIWORD(v58) = (unsigned int)"_control" >> 16;
  zlog(g_zc, v58, 177, "platform_dump_capability", 24, 37, 60, v100);
  platform_inited[0] = 1;
  fan_init();
  ui_init();
  uart_init();
  return 0;
}
