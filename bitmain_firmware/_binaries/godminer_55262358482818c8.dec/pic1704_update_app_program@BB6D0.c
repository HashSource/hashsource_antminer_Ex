int __fastcall pic1704_update_app_program(int a1)
{
  int v2; // r1
  int v3; // r0
  FILE *v4; // r6
  char *v5; // r11
  char *v6; // r5
  unsigned int v7; // r0
  int v8; // r9
  int v9; // r7
  const char *v10; // r2
  int v11; // r2
  char *v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  const char *v17; // r2
  int v18; // r1
  const char *v20; // r2
  int v21; // r1
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r1
  const char *v26; // r2
  int v27; // r1
  int v28; // r3
  const char *v29; // r2
  int v30; // r1
  const char *v31; // r2
  int v32; // r1
  unsigned __int8 v33[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v35; // [sp+20h] [bp-1814h] BYREF
  int v36; // [sp+24h] [bp-1810h]
  int v37; // [sp+28h] [bp-180Ch]
  int v38; // [sp+2Ch] [bp-1808h]
  int v39[512]; // [sp+30h] [bp-1804h] BYREF
  char v40[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v41; // [sp+844h] [bp-FF0h]

  LOWORD(v2) = -13776;
  LOWORD(v3) = 16652;
  HIWORD(v2) = (unsigned int)"ide tx_master_pll_state_r" >> 16;
  HIWORD(v3) = (unsigned int)" should never happen!!" >> 16;
  *(_DWORD *)s = 0;
  v35 = 0;
  *(_DWORD *)&s[3] = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v4 = (FILE *)fopen64(v3, v2);
  if ( !v4 )
  {
    LOWORD(v31) = 16692;
    HIWORD(v31) = (unsigned int)"C33EP16GS202_app.txt" >> 16;
    snprintf((char *)v39, 0x800u, v31, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, v39);
    V_UNLOCK();
    LOWORD(v32) = 16368;
    HIWORD(v32) = (unsigned int)"close_pic" >> 16;
    v8 = -1;
    zlog(g_zc, v32, 168, "pic1704_update_app_program", 26, 275, 20, v40);
    return v8;
  }
  v5 = (char *)calloc(0x3700u, 1u);
  if ( !v5 )
  {
    LOWORD(v29) = 16748;
    HIWORD(v29) = (unsigned int)"GRAM failed chain[%d]!" >> 16;
    snprintf((char *)v39, 0x800u, v29, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, v39);
    V_UNLOCK();
    LOWORD(v30) = 16368;
    HIWORD(v30) = (unsigned int)"close_pic" >> 16;
    v8 = -1;
    zlog(g_zc, v30, 168, "pic1704_update_app_program", 26, 282, 20, v40);
    set_miner_6060info_malloc_failed_err(1);
    return v8;
  }
  v6 = v5;
  fseek(v4, 0, 0);
  do
  {
    v6 += 4;
    fgets(s, 7, v4);
    v7 = strtoul(s, 0, 16);
    *(v6 - 1) = v7;
    *(v6 - 4) = HIBYTE(v7);
    *(v6 - 3) = BYTE2(v7);
    *(v6 - 2) = BYTE1(v7);
  }
  while ( v5 + 14080 != v6 );
  fclose(v4);
  if ( pic1704_reset(a1) )
  {
    v8 = pic1704_erase_program(a1);
    if ( !v8 )
    {
      LOWORD(v10) = 16836;
      HIWORD(v10) = (unsigned int)"p error string = J%d:5." >> 16;
      snprintf((char *)v39, 0x800u, v10, "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v40, 0x1000u, 0, v39);
      V_UNLOCK();
      v11 = 318;
LABEL_12:
      LOWORD(v18) = 16368;
      HIWORD(v18) = (unsigned int)"close_pic" >> 16;
      zlog(g_zc, v18, 168, "pic1704_update_app_program", 26, v11, 20, v40);
      free(v5);
      return v8;
    }
    v9 = 0;
    do
    {
      v12 = &v5[16 * v9];
      v39[1] = (int)&v35;
      v13 = *(_DWORD *)v12;
      v14 = *((_DWORD *)v12 + 1);
      v15 = *((_DWORD *)v12 + 2);
      v16 = *((_DWORD *)v12 + 3);
      ++v9;
      HIBYTE(v39[0]) = a1;
      LOWORD(v39[0]) = 4098;
      v35 = v13;
      v36 = v14;
      v37 = v15;
      v38 = v16;
      BYTE2(v39[0]) = 2;
      v33[1] = 0;
      memset(v40, 0, sizeof(v40));
      v41 = 0;
      v33[0] = -1;
      if ( !sub_BB11C(v39[0], (int)&v35, (int)v40, v33) )
      {
        LOWORD(v17) = 16868;
        HIWORD(v17) = (unsigned int)" pic error chain[%d]!" >> 16;
        v8 = 0;
        snprintf((char *)v39, 0x800u, v17, "pic1704_update_app_program", a1);
        V_LOCK();
        logfmt_raw(v40, 0x1000u, 0, v39);
        V_UNLOCK();
        v11 = 338;
        goto LABEL_12;
      }
    }
    while ( v9 != 880 );
    if ( pic1704_reset(a1) )
    {
      v8 = 1;
      free(v5);
      return v8;
    }
    LOWORD(v26) = 16908;
    HIWORD(v26) = (unsigned int)"pic error chain[%d]!" >> 16;
    snprintf((char *)v39, 0x800u, v26, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, v39);
    V_UNLOCK();
    LOWORD(v27) = 16368;
    HIWORD(v27) = (unsigned int)"close_pic" >> 16;
    zlog(g_zc, v27, 168, "pic1704_update_app_program", 26, 348, 20, v40);
    V_LOCK();
    LOWORD(v28) = 16808;
    HIWORD(v28) = (unsigned int)" pic error chain[%d]!" >> 16;
    logfmt_raw(v40, 0x1000u, 0, v28, a1);
    V_UNLOCK();
    v23 = g_zc;
    v24 = 349;
  }
  else
  {
    LOWORD(v20) = 16776;
    HIWORD(v20) = (unsigned int)"alloc failed chain[%d]!" >> 16;
    snprintf((char *)v39, 0x800u, v20, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, v39);
    V_UNLOCK();
    LOWORD(v21) = 16368;
    HIWORD(v21) = (unsigned int)"close_pic" >> 16;
    zlog(g_zc, v21, 168, "pic1704_update_app_program", 26, 308, 20, v40);
    V_LOCK();
    LOWORD(v22) = 16808;
    HIWORD(v22) = (unsigned int)" pic error chain[%d]!" >> 16;
    logfmt_raw(v40, 0x1000u, 0, v22, a1);
    V_UNLOCK();
    v23 = g_zc;
    v24 = 309;
  }
  LOWORD(v25) = 16368;
  HIWORD(v25) = (unsigned int)"close_pic" >> 16;
  zlog(v23, v25, 168, "pic1704_update_app_program", 26, v24, 100, v40);
  free(v5);
  return 0;
}
