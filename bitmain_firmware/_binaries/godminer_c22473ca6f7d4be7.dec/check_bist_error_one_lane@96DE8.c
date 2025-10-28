int __fastcall check_bist_error_one_lane(int a1, int a2, int a3, int a4)
{
  __int16 v6; // r10
  int v7; // r4
  char *v8; // r1
  int v9; // r1
  int back; // r0
  int v11; // r10
  int v12; // r1
  unsigned __int8 *v13; // r4
  int v14; // r6
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r6
  int v19; // r6
  int v20; // r3
  int v21; // r1
  int v22; // r3
  int v23; // r6
  int v24; // r6
  int v25; // r3
  int v26; // r1
  int v27; // r3
  int v28; // r10
  int v29; // r2
  unsigned __int8 *v30; // r6
  int v31; // r8
  int v32; // r9
  int v33; // r3
  int v34; // r0
  int v35; // r2
  int v36; // r0
  _BYTE *v37; // r0
  _BYTE *v38; // r3
  _DWORD *v39; // r1
  unsigned int v40; // r2
  int v41; // r0
  int *v42; // r6
  int v43; // r10
  int v44; // r9
  int v45; // t1
  int v46; // r8
  int v47; // r0
  int v48; // t1
  int *v52; // [sp+30h] [bp-115Ch]
  __int16 v53; // [sp+34h] [bp-1158h]
  int v55; // [sp+40h] [bp-114Ch]
  int v56; // [sp+44h] [bp-1148h]
  _DWORD v57[7]; // [sp+48h] [bp-1144h] BYREF
  _DWORD v58[9]; // [sp+64h] [bp-1128h] BYREF
  _BYTE v59[64]; // [sp+88h] [bp-1104h] BYREF
  _BYTE v60[64]; // [sp+C8h] [bp-10C4h] BYREF
  _BYTE v61[128]; // [sp+108h] [bp-1084h] BYREF
  char v62[4100]; // [sp+188h] [bp-1004h] BYREF

  v6 = a4;
  LOWORD(v7) = -22412;
  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v57, v8, *(int *)(a1 + 140));
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    v62,
    0x1000u,
    0,
    v58[0],
    v57[0],
    v57[1],
    v57[2],
    v57[3],
    v57[4],
    v57[5],
    v57[6],
    v58[0],
    v7,
    "check_bist_error_one_lane");
  V_UNLOCK();
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(g_zc, v9, 154, "check_bist_error_one_lane", 25, 9070, 60, v62);
  v53 = v6 << 12;
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)(v6 << 12) | 0x10, (int)v59);
  if ( *(_DWORD *)(a1 + 236) != back )
  {
    v11 = back;
    V_LOCK();
    logfmt_raw(
      v62,
      0x1000u,
      0,
      "%s d'16 resp_num is not enough(%d<%d), bist err",
      "check_bist_error_one_lane",
      v11,
      *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    LOWORD(v12) = -25512;
    HIWORD(v12) = (unsigned int)"one" >> 16;
    zlog(g_zc, v12, 154, "check_bist_error_one_lane", 25, 9078, 100, v62);
  }
  v13 = v60;
  v14 = serdes_apb_read_back(a1, a2, a3, v53 & 0xF000 | 0x13, (int)v60);
  if ( *(_DWORD *)(a1 + 236) != v14 )
  {
    V_LOCK();
    LOWORD(v15) = -22872;
    HIWORD(v15) = (unsigned int)&unk_1399D8 >> 16;
    logfmt_raw(v62, 0x1000u, 0, v15, "check_bist_error_one_lane", v14, *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    LOWORD(v16) = -25512;
    HIWORD(v16) = (unsigned int)"one" >> 16;
    zlog(g_zc, v16, 154, "check_bist_error_one_lane", 25, 9084, 100, v62);
  }
  if ( v14 > 0 )
  {
    v17 = 4;
    v18 = 8 * v14 + 4;
    do
    {
      *(_DWORD *)&v61[v17 + 64] = *(_DWORD *)&v60[v17] >> 28;
      v17 += 8;
    }
    while ( v17 != v18 );
  }
  v19 = serdes_apb_read_back(a1, a2, a3, v53 & 0xF000 | 0x14, (int)v60);
  if ( *(_DWORD *)(a1 + 236) != v19 )
  {
    V_LOCK();
    LOWORD(v20) = -22872;
    HIWORD(v20) = (unsigned int)&unk_1399D8 >> 16;
    logfmt_raw(v62, 0x1000u, 0, v20, "check_bist_error_one_lane", v19, *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    LOWORD(v21) = -25512;
    HIWORD(v21) = (unsigned int)"one" >> 16;
    zlog(g_zc, v21, 154, "check_bist_error_one_lane", 25, 9090, 100, v62);
  }
  if ( v19 > 0 )
  {
    v22 = 4;
    v23 = 8 * v19 + 4;
    do
    {
      *(_DWORD *)&v61[v22 + 64] |= 16 * *(_DWORD *)&v60[v22];
      v22 += 8;
    }
    while ( v22 != v23 );
  }
  v24 = serdes_apb_read_back(a1, a2, a3, v53 & 0xF000 | 0x15, (int)v61);
  if ( *(_DWORD *)(a1 + 236) != v24 )
  {
    V_LOCK();
    LOWORD(v25) = -22872;
    HIWORD(v25) = (unsigned int)&unk_1399D8 >> 16;
    logfmt_raw(v62, 0x1000u, 0, v25, "check_bist_error_one_lane", v24, *(_DWORD *)(a1 + 236));
    V_UNLOCK();
    LOWORD(v26) = -25512;
    HIWORD(v26) = (unsigned int)"one" >> 16;
    zlog(g_zc, v26, 154, "check_bist_error_one_lane", 25, 9096, 100, v62);
  }
  if ( v24 > 0 )
  {
    LOWORD(v27) = -22540;
    LOWORD(v28) = -25512;
    v56 = a1;
    v29 = 8 * v24 + 4;
    HIWORD(v27) = (unsigned int)&unk_139B24 >> 16;
    v55 = v27;
    v30 = v59;
    v31 = 4;
    v32 = v29;
    do
    {
      if ( (*((_DWORD *)v30 + 1) & 0xE000000) != 0 )
      {
        V_LOCK();
        LOWORD(v33) = -22608;
        HIWORD(v33) = (unsigned int)&unk_139AE0 >> 16;
        logfmt_raw(
          v62,
          0x1000u,
          0,
          v33,
          a4,
          *v30,
          v30[1],
          (*((_DWORD *)v30 + 1) >> 25) & 7,
          *(_DWORD *)&v61[v31],
          *(_DWORD *)&v61[v31 + 64]);
        V_UNLOCK();
        v34 = g_zc;
        v35 = 9101;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v62, 0x1000u, 0, v55, a4, *v30, v30[1]);
        V_UNLOCK();
        v34 = g_zc;
        v35 = 9104;
      }
      HIWORD(v28) = (unsigned int)"one" >> 16;
      v31 += 8;
      zlog(v34, v28, 154, "check_bist_error_one_lane", 25, v35, 60, v62);
      v30 += 8;
    }
    while ( v31 != v32 );
    a1 = v56;
  }
  memset(&v58[1], 0, 0x20u);
  v36 = serdes_apb_read_back(a1, a2, a3, v53 & 0xF000 | 0x16, (int)v60);
  if ( v36 > 0 )
  {
    v37 = &v60[8 * v36];
    v38 = v60;
    v39 = v58;
    do
    {
      v40 = *((_DWORD *)v38 + 1);
      v38 += 8;
      v39[1] = v40 >> 12;
      ++v39;
    }
    while ( v38 != v37 );
  }
  v41 = serdes_apb_read_back(a1, a2, a3, v53 & 0xF000 | 0x17, (int)v60);
  if ( v41 > 0 )
  {
    v42 = v58;
    LOWORD(v43) = -22492;
    LOWORD(v44) = -25512;
    v52 = &v58[v41];
    do
    {
      v45 = v42[1];
      ++v42;
      v46 = v45 | (*((_DWORD *)v13 + 1) << 20);
      *v42 = v46;
      V_LOCK();
      v47 = v13[1];
      HIWORD(v43) = (unsigned int)&unk_139B54 >> 16;
      v48 = *v13;
      v13 += 8;
      logfmt_raw(v62, 0x1000u, 0, v43, a4, v48, v47, v46);
      V_UNLOCK();
      HIWORD(v44) = (unsigned int)"one" >> 16;
      zlog(g_zc, v44, 154, "check_bist_error_one_lane", 25, 9116, 60, v62);
    }
    while ( v52 != v42 );
  }
  return 0;
}
