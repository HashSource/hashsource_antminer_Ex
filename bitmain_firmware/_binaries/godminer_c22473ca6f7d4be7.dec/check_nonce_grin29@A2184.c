int __fastcall check_nonce_grin29(int a1, int a2)
{
  int v2; // r11
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r10
  int v6; // r9
  struct timeval *v7; // r7
  int v8; // r6
  int *v9; // r8
  int *v10; // r6
  __int64 v11; // r0
  int v12; // t1
  int *v13; // r0
  int *v14; // r10
  int (*v15)(const void *, const void *); // r3
  int v16; // r2
  int v17; // r8
  int v18; // r9
  int v19; // r6
  int v20; // r7
  int (*v21)(const void *, const void *); // r11
  int v22; // r2
  int v23; // r3
  int v24; // t1
  int v25; // r6
  int v26; // r9
  int v27; // r3
  _DWORD *v28; // r5
  int v29; // r1
  char *v30; // r1
  int v31; // r1
  int v32; // lr
  int i; // r7
  int v34; // r3
  unsigned int v35; // r12
  unsigned int v36; // r1
  char *v37; // r0
  char v38; // r2
  bool v39; // zf
  unsigned __int64 v40; // r6
  char *v42; // r1
  int v43; // r1
  int v44; // r3
  int v45; // r1
  int v46; // [sp+24h] [bp-1210h]
  struct timeval *v47; // [sp+40h] [bp-11F4h]
  int v49; // [sp+48h] [bp-11ECh]
  int v50; // [sp+4Ch] [bp-11E8h]
  unsigned __int64 v51; // [sp+50h] [bp-11E4h]
  _DWORD s[8]; // [sp+58h] [bp-11DCh] BYREF
  struct timeval tv; // [sp+78h] [bp-11BCh] BYREF
  int v54; // [sp+80h] [bp-11B4h]
  int v55; // [sp+84h] [bp-11B0h]
  int v56; // [sp+88h] [bp-11ACh]
  int v57; // [sp+8Ch] [bp-11A8h]
  int v58; // [sp+90h] [bp-11A4h]
  int v59; // [sp+94h] [bp-11A0h]
  struct timeval v60[20]; // [sp+98h] [bp-119Ch] BYREF
  char v61[248]; // [sp+138h] [bp-10FCh] BYREF
  char v62[4100]; // [sp+230h] [bp-1004h] BYREF

  v2 = a2;
  v49 = *(_DWORD *)(a1 + 624);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v61, (const void *)(v49 + 246 * *(unsigned __int8 *)(a2 + 16) + 4352), 0xF6u);
  v4 = *(unsigned __int16 *)(v2 + 33);
  v5 = *(_DWORD *)(v2 + 25);
  v6 = *(_DWORD *)(v2 + 29);
  gettimeofday(&tv, 0);
  v7 = (struct timeval *)new_graph29(29, 21);
  (*(void (__fastcall **)(__suseconds_t, char *, int, _DWORD, int, int, int, _DWORD))(v7[11].tv_usec + 72))(
    v7[11].tv_usec,
    v61,
    246,
    *(_DWORD *)(v7[11].tv_usec + 72),
    v5,
    v6,
    25,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(v2 + 35);
    do
    {
      v11 = ((__int64 (__fastcall *)(struct timeval *, int))v7[14].tv_usec)(v7, *v10);
      v12 = *v10++;
      ((void (__fastcall *)(struct timeval *, _DWORD, int))v7[13].tv_usec)(
        v7,
        (2 * v11) & 0x1FFFFFFE | v12 & 1,
        (2 * HIDWORD(v11)) & 0x1FFFFFFE | v12 & 1);
    }
    while ( v10 != v9 );
  }
  v13 = (int *)((int (__fastcall *)(struct timeval *))v7[14].tv_sec)(v7);
  v14 = v13;
  if ( v13 )
  {
    if ( *v13 <= 0 )
    {
      v26 = 0;
      v25 = 0;
    }
    else
    {
      LOWORD(v15) = 5616;
      v16 = v13[1];
      v17 = 0;
      HIWORD(v15) = (unsigned int)&loc_A1200 >> 16;
      v47 = v7;
      v50 = v2;
      v18 = 0;
      v19 = v2 + 199;
      v20 = v2 + 31;
      v21 = v15;
      while ( 1 )
      {
        v22 = v16 + v17;
        v23 = v20;
        do
        {
          v24 = *(_DWORD *)(v22 + 4);
          v22 += 4;
          *(_DWORD *)(v23 + 4) = v3[v24];
          v23 += 4;
        }
        while ( v19 != v23 );
        qsort(v3, 0x2Au, 4u, v21);
        ++v18;
        v16 = v14[1];
        if ( v18 >= *v14 )
          break;
        v17 += 172;
      }
      v25 = *(unsigned __int8 *)(v16 + v17);
      v7 = v47;
      v2 = v50;
      v26 = v25;
    }
  }
  else
  {
    v26 = 0;
    v25 = 0;
  }
  LOWORD(v28) = -14512;
  free_graph29_0((void (**)(void))v7);
  gettimeofday(v60, 0);
  V_LOCK();
  LOWORD(v27) = -20288;
  HIWORD(v27) = (unsigned int)"ibration %08x" >> 16;
  HIWORD(v28) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(
    v62,
    0x1000u,
    0,
    v27,
    "findcycle_grin29",
    *v14,
    v60[0].tv_usec + (_DWORD)&loc_F4240 * v60[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  V_UNLOCK();
  LOWORD(v29) = -20480;
  HIWORD(v29) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
  zlog(*v28, v29, 160, "findcycle_grin29", 16, 408, 20, v62);
  V_LOCK();
  LOWORD(v30) = -7948;
  HIWORD(v30) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)&tv, v30, *(int *)(a1 + 140));
  logfmt_raw(
    v62,
    0x1000u,
    0,
    v59,
    tv.tv_sec,
    tv.tv_usec,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v46,
    *(_DWORD *)(v2 + 25),
    *(_DWORD *)(v2 + 29),
    *(unsigned __int8 *)(v2 + 16),
    *(unsigned __int16 *)(v2 + 33),
    v25);
  V_UNLOCK();
  LOWORD(v31) = -20480;
  HIWORD(v31) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
  zlog(*v28, v31, 160, "check_nonce_grin29", 18, 434, 0x14u, v62);
  if ( v26 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v60, 0, 0x99u);
    v32 = 0;
    for ( i = 0; i != 42; ++i )
    {
      v34 = 0;
      v35 = *(_DWORD *)(v2 + 4 * (i + 8) + 3) & 0x1FFFFFFF;
      do
      {
        v36 = v35 >> v34;
        v37 = &v62[(unsigned int)(v32 + v34) >> 3];
        v38 = (v32 + v34) & 7;
        v39 = ((v35 >> v34) & 1) == 0;
        if ( ((v35 >> v34) & 1) != 0 )
          LOBYTE(v36) = *(v37 - 408);
        ++v34;
        if ( !v39 )
          *(v37 - 408) = v36 | (1 << v38);
      }
      while ( v34 != 29 );
      v32 += 29;
    }
    blake2b(s, (int)v60, 153);
    HIBYTE(v51) = s[0];
    BYTE3(v51) = s[1];
    BYTE6(v51) = BYTE1(s[0]);
    BYTE1(v51) = BYTE2(s[1]);
    BYTE4(v51) = HIBYTE(s[0]);
    BYTE5(v51) = BYTE2(s[0]);
    BYTE2(v51) = BYTE1(s[1]);
    LOBYTE(v51) = HIBYTE(s[1]);
    v40 = *(_QWORD *)(v49 + 8 * (*(unsigned __int8 *)(v2 + 16) + 384));
    if ( v51 > v40 )
    {
      V_LOCK();
      LOWORD(v44) = -20192;
      HIWORD(v44) = (unsigned int)"chip_id %02x core_id %02x cmn locked" >> 16;
      logfmt_raw(v62, 0x1000u, 0, v44, *(_DWORD *)(v2 + 25), *(_DWORD *)(v2 + 29), v51, v40);
      V_UNLOCK();
      LOWORD(v45) = -20480;
      HIWORD(v45) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
      zlog(*v28, v45, 160, "check_nonce_grin29", 18, 462, 20, v62);
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
    LOWORD(v42) = -7948;
    HIWORD(v42) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v60, v42, *(int *)(a1 + 140));
    logfmt_raw(
      v62,
      0x1000u,
      0,
      v60[3].tv_usec,
      v60[0].tv_sec,
      v60[0].tv_usec,
      v60[1].tv_sec,
      v60[1].tv_usec,
      v60[2].tv_sec,
      v60[2].tv_usec,
      v60[3].tv_sec,
      v60[3].tv_usec,
      "wc %d error_nonce",
      *(unsigned __int8 *)(v2 + 16));
    V_UNLOCK();
    LOWORD(v43) = -20480;
    HIWORD(v43) = (unsigned int)"02x addr %04x, %08x, cmn lock failed" >> 16;
    zlog(*v28, v43, 160, "check_nonce_grin29", 18, 436, 0x14u, v62);
    return 2;
  }
}
