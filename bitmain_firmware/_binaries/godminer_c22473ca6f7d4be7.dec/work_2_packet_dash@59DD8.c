int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r9
  int v8; // lr
  int v9; // r2
  int v10; // r0
  int v11; // r8
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r2
  int v15; // r8
  int v16; // lr
  int v17; // r12
  const void *v18; // r10
  int v19; // r12
  _BYTE *v20; // r2
  _BYTE *v21; // r3
  char v22; // r1
  const void *v23; // r0
  int v24; // r4
  void *v25; // r0
  __int16 v26; // r0
  int v27; // r3
  int v29; // r3
  int *v30; // r12
  int *v31; // r5
  const char *v32; // r7
  int v33; // r1
  int v34; // r0
  int v35; // r5
  int v36; // r6
  int v37; // t1
  int v38; // r3
  int v39; // r1
  int v40; // r1
  int v43; // [sp+1Ch] [bp-2010h]
  int v44; // [sp+20h] [bp-200Ch]
  int *v45; // [sp+24h] [bp-2008h]
  char v46[4056]; // [sp+28h] [bp-2004h] BYREF
  char v47[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v8 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v9 = 12 * (__int16)v7 + 19968;
  *(_DWORD *)(v5 + 4 * (v7 + 3840)) = v8;
  v43 = a2 + 8;
  v10 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v5 + v9) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(v5 + v9 + 4) = v10;
  v11 = *(_DWORD *)(a2 + 128);
  v12 = *(_DWORD *)(a2 + 132);
  v13 = *(_DWORD *)(a2 + 136);
  v14 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 496));
  *v14 = *(_DWORD *)(a2 + 124);
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v13;
  v15 = *(_DWORD *)(a2 + 144);
  v16 = *(_DWORD *)(a2 + 148);
  v17 = *(_DWORD *)(a2 + 152);
  v14[4] = *(_DWORD *)(a2 + 140);
  v18 = (const void *)(a2 + 40);
  v14[6] = v16;
  v14[7] = v17;
  v14[5] = v15;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 21504) + 5120), (const void *)(a2 + 40), 0x50u);
  v19 = *(unsigned __int8 *)(v5 + 21504);
  *(_QWORD *)(v5 + 8 * (v19 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v19;
  *(_BYTE *)(v5 + 21504) = (v19 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v20 = a3;
  v21 = (_BYTE *)a2;
  do
  {
    v22 = v21[40];
    v21 += 4;
    v20[7] = v22;
    v20[6] = v21[37];
    v20[5] = v21[38];
    v20[4] = v21[39];
    v20 += 4;
  }
  while ( v21 != (_BYTE *)(a2 + 80) );
  LOWORD(v23) = -12052;
  HIWORD(v23) = (unsigned int)&unk_16BEEC >> 16;
  v24 = memcmp(v23, (const void *)(a2 + 40), 0x50u);
  if ( !v24 )
  {
    V_LOCK();
    LOWORD(v29) = 26976;
    LOWORD(v30) = -14512;
    HIWORD(v30) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v29) = (unsigned int)off_135C90 >> 16;
    v31 = v30;
    v45 = v30;
    LOWORD(v32) = 25416;
    logfmt_raw(v47, 0x1000u, 0, v29);
    V_UNLOCK();
    LOWORD(v33) = 30144;
    v34 = *v31;
    HIWORD(v33) = (unsigned int)&sensors_ckb >> 16;
    v35 = a2 + 39;
    v36 = a2 + 119;
    zlog(v34, v33, 156, "work_2_packet_dash", 18, 122, 80, v47);
    v44 = (unsigned __int8)a3[3];
    do
    {
      v37 = *(unsigned __int8 *)++v35;
      HIWORD(v32) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
      snprintf(&v46[v24], 4096 - v24, v32, v37);
      v24 += 3;
    }
    while ( v35 != v36 );
    V_LOCK();
    LOWORD(v38) = 30700;
    HIWORD(v38) = (unsigned int)"e crc error calc value %04x expected value %04x\n" >> 16;
    logfmt_raw(v47, 0x1000u, 0, v38, v43, v44);
    V_UNLOCK();
    LOWORD(v39) = 30144;
    HIWORD(v39) = (unsigned int)&sensors_ckb >> 16;
    zlog(*v45, v39, 156, "dump_work_dash", 14, 78, 20, v47);
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, "dump work: %s", v46);
    V_UNLOCK();
    LOWORD(v40) = 30144;
    HIWORD(v40) = (unsigned int)&sensors_ckb >> 16;
    zlog(*v45, v40, 156, "dump_work_dash", 14, 79, 20, v47);
  }
  LOWORD(v25) = -12052;
  HIWORD(v25) = (unsigned int)&unk_16BEEC >> 16;
  memcpy(v25, v18, 0x50u);
  v26 = BM_CRC16(a3 + 2, 82);
  a3[85] = v26;
  a3[84] = HIBYTE(v26);
  v27 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 86;
  if ( !v27 || !*(_BYTE *)(a1 + 146) )
    return 0;
  set_ticket_mask_dash(a1, 35);
  *(_BYTE *)(a1 + 145) = 0;
  return 0;
}
