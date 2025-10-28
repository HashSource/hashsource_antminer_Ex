int __fastcall membist0(int a1)
{
  int v2; // r3
  _DWORD *v3; // r9
  int v4; // r1
  int v5; // r8
  char *v6; // r4
  _DWORD *v7; // r8
  _DWORD *v8; // r10
  int v9; // r4
  int v10; // r1
  char *v11; // r4
  int v12; // r0
  char *v13; // r5
  int v14; // r1
  char *v15; // r4
  int v16; // r0
  char *v17; // r5
  int v18; // r1
  char *v19; // r4
  int v20; // r0
  int v21; // r8
  char *v22; // r5
  int v23; // r1
  _DWORD *v24; // r4
  int v25; // r9
  int v26; // r10
  const char *v27; // r5
  int *v28; // r6
  int v29; // r3
  __int64 v30; // r0
  unsigned int v31; // r2
  bool v32; // cc
  int v33; // r2
  int v34; // t1
  int v35; // r3
  size_t v36; // r0
  char *v37; // r0
  int (**v38)(); // r0
  int v40; // r1
  char *v41; // [sp+30h] [bp-2E8h]
  int v42; // [sp+38h] [bp-2E0h]
  int v43; // [sp+3Ch] [bp-2DCh]
  char *ptr; // [sp+40h] [bp-2D8h]
  int v45; // [sp+44h] [bp-2D4h]
  int *v46; // [sp+54h] [bp-2C4h]
  _DWORD v47[5]; // [sp+64h] [bp-2B4h] BYREF
  _DWORD v48[7]; // [sp+78h] [bp-2A0h] BYREF
  int v49; // [sp+94h] [bp-284h]
  _DWORD v50[7]; // [sp+98h] [bp-280h] BYREF
  int v51; // [sp+B4h] [bp-264h]
  _DWORD v52[7]; // [sp+B8h] [bp-260h] BYREF
  int v53; // [sp+D4h] [bp-244h]
  _DWORD v54[7]; // [sp+D8h] [bp-240h] BYREF
  int v55; // [sp+F4h] [bp-224h]
  _DWORD v56[7]; // [sp+F8h] [bp-220h] BYREF
  int v57; // [sp+114h] [bp-204h]
  _DWORD s[128]; // [sp+118h] [bp-200h] BYREF
  char v59[4100]; // [sp+318h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -22412;
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  LOWORD(v3) = -14512;
  logfmt_raw(v59, 0x1000u, 0, v2, "membist0");
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  V_UNLOCK();
  LOWORD(v4) = -25512;
  HIWORD(v4) = (unsigned int)"one" >> 16;
  LOWORD(v5) = -22160;
  zlog(*v3, v4, 154, "membist0", 8, 11471, 20, v59);
  LOWORD(v6) = -7948;
  v47[0] = -2023406815;
  v47[1] = 1266163410;
  v47[2] = 2015285835;
  v47[3] = 517098360;
  v47[4] = -766805986;
  memset(s, 0, sizeof(s));
  v46 = v47;
  HIWORD(v5) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/backend/backend_eth/backend_eth.c" >> 16;
  v45 = v5;
  v7 = v3;
  HIWORD(v6) = (unsigned int)&loc_12D594 >> 16;
  v41 = v6;
  v42 = 0;
  ptr = (char *)malloc(0x600u);
  do
  {
    V_LOCK();
    v8 = v7;
    V_INT((int)v48, v41, *(int *)(a1 + 140));
    v9 = *v46++;
    v43 = 0;
    logfmt_raw(
      v59,
      0x1000u,
      0,
      v49,
      v48[0],
      v48[1],
      v48[2],
      v48[3],
      v48[4],
      v48[5],
      v48[6],
      v49,
      "membist final pattern %08x",
      v9);
    V_UNLOCK();
    LOWORD(v10) = -25512;
    HIWORD(v10) = (unsigned int)"one" >> 16;
    zlog(*v7, v10, 154, "membist0", 8, 11479, 60, v59);
    sub_5C100(a1, 164, v9);
    do
    {
      sub_5C158(a1, v43, 12, 1);
      sub_5C158(a1, v43, 160, 3);
      usleep((__useconds_t)&stru_18694.st_info);
      v11 = ptr;
      v12 = sub_5C3C4(a1, (unsigned __int16)v43, 161, ptr);
      if ( v12 > 0 )
      {
        v13 = &ptr[12 * v12];
        do
        {
          while ( (*(_DWORD *)v11 & 0x80) == 0 )
          {
            V_LOCK();
            v11 += 12;
            V_INT((int)v52, v41, *(int *)(a1 + 140));
            logfmt_raw(
              v59,
              0x1000u,
              0,
              v53,
              v52[0],
              v52[1],
              v52[2],
              v52[3],
              v52[4],
              v52[5],
              v52[6],
              v53,
              v45,
              (unsigned __int8)*(v11 - 8),
              (unsigned __int8)*(v11 - 4));
            V_UNLOCK();
            LOWORD(v14) = -25512;
            HIWORD(v14) = (unsigned int)"one" >> 16;
            zlog(*v8, v14, 154, "membist0", 8, 11495, 100, v59);
            if ( v11 == v13 )
              goto LABEL_10;
          }
          if ( (*(_DWORD *)v11 & 0xFFFFFF00) != 0 )
          {
            V_LOCK();
            V_INT((int)v50, v41, *(int *)(a1 + 140));
            logfmt_raw(
              v59,
              0x1000u,
              0,
              v51,
              v50[0],
              v50[1],
              v50[2],
              v50[3],
              v50[4],
              v50[5],
              v50[6],
              v51,
              "chip %02x core %02x membist err cnt: %08x",
              (unsigned __int8)v11[4],
              (unsigned __int8)v11[8],
              bswap32(*(_DWORD *)v11));
            V_UNLOCK();
            LOWORD(v40) = -25512;
            HIWORD(v40) = (unsigned int)"one" >> 16;
            zlog(*v8, v40, 154, "membist0", 8, 11491, 100, v59);
            s[16 * (unsigned __int8)v11[4] + v42] += bswap32(*(_DWORD *)v11) & 0x7FFFFF;
          }
          v11 += 12;
        }
        while ( v11 != v13 );
      }
LABEL_10:
      v15 = ptr;
      v16 = sub_5C3C4(a1, (unsigned __int16)v43, 162, ptr);
      if ( v16 > 0 )
      {
        v17 = &ptr[12 * v16];
        do
        {
          while ( (*(_DWORD *)v15 & 0xFFFFFF00) == 0 || (*(_DWORD *)v15 & 0x80) == 0 )
          {
            v15 += 12;
            if ( v15 == v17 )
              goto LABEL_16;
          }
          V_LOCK();
          v15 += 12;
          V_INT((int)v54, v41, *(int *)(a1 + 140));
          logfmt_raw(
            v59,
            0x1000u,
            0,
            v55,
            v54[0],
            v54[1],
            v54[2],
            v54[3],
            v54[4],
            v54[5],
            v54[6],
            v55,
            "chip %02x core %02x membist lost cnt: %08x",
            (unsigned __int8)*(v15 - 8),
            (unsigned __int8)*(v15 - 4),
            bswap32(*((_DWORD *)v15 - 3)));
          V_UNLOCK();
          LOWORD(v18) = -25512;
          HIWORD(v18) = (unsigned int)"one" >> 16;
          zlog(*v8, v18, 154, "membist0", 8, 11502, 100, v59);
          s[16 * (unsigned __int8)*(v15 - 8) + v42] += bswap32(*((_DWORD *)v15 - 3)) & 0x7FFFFF;
        }
        while ( v15 != v17 );
      }
LABEL_16:
      v19 = ptr;
      v20 = sub_5C3C4(a1, (unsigned __int16)v43, 163, ptr);
      if ( v20 > 0 )
      {
        LOWORD(v21) = -22076;
        v22 = &ptr[12 * v20];
        do
        {
          while ( (*(_DWORD *)v19 & 0xFFFF00) == 0 || (*(_DWORD *)v19 & 0xC0) == 0 )
          {
            v19 += 12;
            if ( v19 == v22 )
              goto LABEL_22;
          }
          V_LOCK();
          v19 += 12;
          V_INT((int)v56, v41, *(int *)(a1 + 140));
          HIWORD(v21) = (unsigned int)"check_nonce_eth, diff:%d" >> 16;
          logfmt_raw(
            v59,
            0x1000u,
            0,
            v57,
            v56[0],
            v56[1],
            v56[2],
            v56[3],
            v56[4],
            v56[5],
            v56[6],
            v57,
            v21,
            (unsigned __int8)*(v19 - 8),
            (unsigned __int8)*(v19 - 4),
            bswap32(*((_DWORD *)v19 - 3)));
          V_UNLOCK();
          LOWORD(v23) = -25512;
          HIWORD(v23) = (unsigned int)"one" >> 16;
          zlog(*v8, v23, 154, "membist0", 8, 11510, 100, v59);
          s[16 * (unsigned __int8)*(v19 - 8) + v42] += bswap32(*((_DWORD *)v19 - 3)) & 0x7FFF;
        }
        while ( v19 != v22 );
      }
LABEL_22:
      ++v43;
    }
    while ( v43 != 8 );
    v7 = v8;
    ++v42;
  }
  while ( v42 != 5 );
  v24 = s;
  LOWORD(v25) = 18172;
  LOWORD(v26) = -22496;
  LOWORD(v27) = -22032;
  free(ptr);
  memset(v59, 0, 0x40u);
  v28 = v47;
  do
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = v24[16 * v29++];
      v30 += v31;
    }
    while ( v29 != 8 );
    v32 = HIDWORD(v30) != 0;
    v34 = *v28++;
    v33 = v34;
    if ( !HIDWORD(v30) )
      v32 = (unsigned int)v30 > 0x800;
    if ( v32 )
    {
      HIWORD(v25) = (unsigned int)"stratum_capabilities_vbk" >> 16;
      v35 = v25;
    }
    else
    {
      HIWORD(v26) = (unsigned int)&unk_139B50 >> 16;
      v35 = v26;
    }
    HIWORD(v27) = (unsigned int)"te diff %d ans diff %d TICKET_MASK_ETH %d" >> 16;
    sprintf(v59, v27, v33, v35, v30);
    ++v24;
    v36 = strlen(v59);
    v37 = sub_5C834(v59, v36);
  }
  while ( v24 != &s[5] );
  v38 = dev_ctrl((int)v37);
  ((void (__fastcall *)(_DWORD))v38[18])(*(_DWORD *)(a1 + 136));
  return 0;
}
