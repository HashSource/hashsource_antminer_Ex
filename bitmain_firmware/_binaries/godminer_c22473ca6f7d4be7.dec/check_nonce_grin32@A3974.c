int __fastcall check_nonce_grin32(int a1, int a2)
{
  int v2; // r8
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r11
  int v6; // r10
  void (**v7)(void); // r7
  int v8; // r6
  int *v9; // r10
  int *v10; // r6
  int v11; // r0
  int v12; // t1
  int v13; // r9
  int v14; // r0
  int *v15; // r0
  int *v16; // r10
  int v17; // r9
  int v18; // r11
  int (*v19)(const void *, const void *); // r3
  int v20; // r2
  int v21; // r11
  int v22; // r6
  int v23; // r7
  int (*v24)(const void *, const void *); // r8
  int v25; // r2
  int v26; // r3
  int v27; // t1
  int v28; // r3
  _DWORD *v29; // r5
  int v30; // r1
  int v31; // r12
  int v32; // r1
  int v33; // r7
  int v34; // lr
  int v35; // r3
  unsigned int v36; // r12
  unsigned int v37; // r1
  char *v38; // r0
  char v39; // r2
  bool v40; // zf
  unsigned __int64 v41; // r6
  int v43; // r3
  int v44; // r1
  char *v45; // r1
  int v46; // r1
  int v47; // [sp+24h] [bp-1218h]
  int v49; // [sp+44h] [bp-11F8h]
  void (**v50)(void); // [sp+48h] [bp-11F4h]
  int v51; // [sp+4Ch] [bp-11F0h]
  unsigned __int64 v52; // [sp+50h] [bp-11ECh]
  _DWORD s[8]; // [sp+58h] [bp-11E4h] BYREF
  struct timeval tv; // [sp+78h] [bp-11C4h] BYREF
  int v55; // [sp+80h] [bp-11BCh]
  int v56; // [sp+84h] [bp-11B8h]
  int v57; // [sp+88h] [bp-11B4h]
  int v58; // [sp+8Ch] [bp-11B0h]
  int v59; // [sp+90h] [bp-11ACh]
  int v60; // [sp+94h] [bp-11A8h]
  struct timeval v61[21]; // [sp+98h] [bp-11A4h] BYREF
  char v62[248]; // [sp+140h] [bp-10FCh] BYREF
  char v63[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = a2;
  v49 = *(_DWORD *)(a1 + 624);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v62, (const void *)(v49 + 246 * *(unsigned __int8 *)(a2 + 16) + 4096), 0xF6u);
  v4 = *(unsigned __int16 *)(v2 + 33);
  v5 = *(_DWORD *)(v2 + 25);
  v6 = *(_DWORD *)(v2 + 29);
  gettimeofday(&tv, 0);
  v7 = (void (**)(void))new_graph32(32, 25);
  (*((void (__fastcall **)(void (*)(void), char *, int, _DWORD, int, int, int, _DWORD))v7[23] + 18))(
    v7[23],
    v62,
    246,
    *((_DWORD *)v7[23] + 18),
    v5,
    v6,
    21,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(v2 + 35);
    do
    {
      v11 = ((int (__fastcall *)(void (**)(void), int, _DWORD))v7[29])(v7, *v10, 0);
      v12 = *v10++;
      v13 = v11;
      v14 = ((int (__fastcall *)(void (**)(void), int, int))v7[29])(v7, v12, 1);
      ((void (__fastcall *)(void (**)(void), int, int))v7[27])(v7, v14, v13);
    }
    while ( v10 != v9 );
  }
  v15 = (int *)((int (__fastcall *)(void (**)(void)))v7[28])(v7);
  v16 = v15;
  if ( v15 )
  {
    v17 = 0;
    if ( *v15 > 0 )
    {
      LOWORD(v19) = 12328;
      v20 = v15[1];
      HIWORD(v19) = (unsigned int)&loc_A2C38 >> 16;
      v50 = v7;
      v21 = 0;
      v51 = v2;
      v22 = v2 + 199;
      v23 = v2 + 31;
      v24 = v19;
      while ( 1 )
      {
        v25 = v20 + v17;
        v26 = v23;
        do
        {
          v27 = *(_DWORD *)(v25 + 4);
          v25 += 4;
          *(_DWORD *)(v26 + 4) = v3[v27];
          v26 += 4;
        }
        while ( v22 != v26 );
        qsort(v3, 0x2Au, 4u, v24);
        ++v21;
        v20 = v16[1];
        if ( v21 >= *v16 )
          break;
        v17 += 172;
      }
      v18 = *(unsigned __int8 *)(v20 + v17);
      v7 = v50;
      v2 = v51;
      v17 = v18;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  free_graph32(v7);
  gettimeofday(v61, 0);
  V_LOCK();
  LOWORD(v28) = -20288;
  LOWORD(v29) = -14512;
  HIWORD(v28) = (unsigned int)"ibration %08x" >> 16;
  HIWORD(v29) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(
    v63,
    0x1000u,
    0,
    v28,
    "findcycle_grin32",
    *v16,
    v61[0].tv_usec + (_DWORD)&loc_F4240 * v61[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  LOWORD(v30) = -18944;
  HIWORD(v30) = (unsigned int)"final pattern %08x" >> 16;
  zlog(*v29, v30, 160, "findcycle_grin32", 16, 378, 20, v63);
  V_LOCK();
  V_INT((int)&tv, "chain", *(int *)(a1 + 140));
  LOWORD(v31) = -20260;
  HIWORD(v31) = (unsigned int)"ore %x cmn status %x" >> 16;
  logfmt_raw(
    v63,
    0x1000u,
    0,
    v60,
    tv.tv_sec,
    tv.tv_usec,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v31,
    v47,
    *(_DWORD *)(v2 + 25),
    *(_DWORD *)(v2 + 29),
    *(unsigned __int8 *)(v2 + 16),
    *(unsigned __int16 *)(v2 + 33),
    v18);
  V_UNLOCK();
  LOWORD(v32) = -18944;
  HIWORD(v32) = (unsigned int)"final pattern %08x" >> 16;
  zlog(*v29, v32, 160, "check_nonce_grin32", 18, 392, 0x14u, v63);
  if ( v17 == 42 )
  {
    v33 = 0;
    memset(s, 0, sizeof(s));
    memset(v61, 0, sizeof(v61));
    do
    {
      v34 = 32 * v33;
      v35 = 0;
      v36 = *(_DWORD *)(v2 + 4 * (v33 + 8) + 3);
      do
      {
        v37 = v36 >> v35;
        v38 = &v63[(unsigned int)(v34 + v35) >> 3];
        v39 = (v34 + v35) & 7;
        v40 = ((v36 >> v35) & 1) == 0;
        if ( ((v36 >> v35) & 1) != 0 )
          LOBYTE(v37) = *(v38 - 416);
        ++v35;
        if ( !v40 )
          *(v38 - 416) = v37 | (1 << v39);
      }
      while ( v35 != 32 );
      ++v33;
    }
    while ( v33 != 42 );
    blake2b(s, (int)v61, 168);
    HIBYTE(v52) = s[0];
    BYTE3(v52) = s[1];
    BYTE4(v52) = HIBYTE(s[0]);
    BYTE5(v52) = BYTE2(s[0]);
    LOBYTE(v52) = HIBYTE(s[1]);
    BYTE1(v52) = BYTE2(s[1]);
    BYTE2(v52) = BYTE1(s[1]);
    BYTE6(v52) = BYTE1(s[0]);
    v41 = *(_QWORD *)(v49 + 8 * (*(unsigned __int8 *)(v2 + 16) + 384));
    if ( v52 > v41 )
    {
      V_LOCK();
      LOWORD(v43) = -18780;
      HIWORD(v43) = (unsigned int)"02x ethbist err cnt: %08x" >> 16;
      logfmt_raw(v63, 0x1000u, 0, v43, *(_DWORD *)(v2 + 25), *(_DWORD *)(v2 + 29), v52, v41);
      V_UNLOCK();
      LOWORD(v44) = -18944;
      HIWORD(v44) = (unsigned int)"final pattern %08x" >> 16;
      zlog(*v29, v44, 160, "check_nonce_grin32", 18, 420, 20, v63);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v45) = -7948;
    HIWORD(v45) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v61, v45, *(int *)(a1 + 140));
    logfmt_raw(
      v63,
      0x1000u,
      0,
      v61[3].tv_usec,
      v61[0].tv_sec,
      v61[0].tv_usec,
      v61[1].tv_sec,
      v61[1].tv_usec,
      v61[2].tv_sec,
      v61[2].tv_usec,
      v61[3].tv_sec,
      v61[3].tv_usec,
      "wc %d error_nonce",
      *(unsigned __int8 *)(v2 + 16));
    V_UNLOCK();
    LOWORD(v46) = -18944;
    HIWORD(v46) = (unsigned int)"final pattern %08x" >> 16;
    zlog(*v29, v46, 160, "check_nonce_grin32", 18, 394, 0x14u, v63);
    return 2;
  }
}
