int __fastcall work_2_packet_ckb(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  int *v7; // r9
  int v8; // r4
  int v9; // r3
  _DWORD *v11; // r1
  int v12; // r12
  int v13; // r7
  _DWORD *v14; // r3
  _DWORD *v15; // r0
  int v16; // t1
  int v17; // r7
  int v18; // lr
  int v19; // r2
  int v20; // r8
  int v21; // r7
  int v22; // lr
  int *v23; // r2
  int v24; // r3
  int v25; // r5
  int v26; // lr
  int v27; // r12
  int v28; // r1
  char v29; // r1
  int *v30; // r3
  _BYTE *v31; // r2
  int v32; // r12
  int v33; // r0
  int v34; // r1
  const void *v35; // r0
  int v36; // r4
  _DWORD *v37; // r3
  int v38; // r0
  int v39; // r1
  int v40; // r2
  __int16 v41; // r0
  int v43; // r3
  const char *v44; // r7
  _DWORD *v45; // r11
  int v46; // r1
  char *v47; // r5
  char *v48; // r6
  int v49; // t1
  int v50; // r3
  int v51; // r1
  int v52; // r1
  int *v53; // [sp+10h] [bp-2014h]
  _DWORD *v54; // [sp+14h] [bp-2010h]
  int v56; // [sp+1Ch] [bp-2008h]
  char v57[4064]; // [sp+20h] [bp-2004h] BYREF
  char v58[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  v7 = a2 + 10;
  a3[1] = -86;
  v8 = v5 + 28672;
  v9 = *(_DWORD *)(a1 + 304);
  v11 = a2 + 2;
  if ( v9 == 1 )
    a3[2] = 48;
  v12 = *(unsigned __int8 *)(v5 + 31744);
  v13 = v11[20];
  v54 = v11;
  *(_QWORD *)(v5 + 8 * v12) = *((_QWORD *)v11 - 1);
  v14 = (_DWORD *)(v5 + 32 * (v12 + 736));
  *(_DWORD *)(v5 + 4 * (v12 + 5632)) = v13;
  v16 = a2[23];
  v15 = a2 + 23;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[4];
  v21 = v15[5];
  v22 = v15[6];
  v14[7] = v15[7];
  v14[4] = v20;
  v14[5] = v21;
  v14[6] = v22;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 31744) + 64)), (const char *)v11);
  v23 = v7;
  v24 = v5 + 48 * *(unsigned __int8 *)(v5 + 31744) + 10240;
  do
  {
    v25 = *v23;
    v23 += 4;
    v26 = *(v23 - 3);
    v24 += 16;
    v27 = *(v23 - 2);
    v28 = *(v23 - 1);
    *(_DWORD *)(v24 - 16) = v25;
    *(_DWORD *)(v24 - 12) = v26;
    *(_DWORD *)(v24 - 8) = v27;
    *(_DWORD *)(v24 - 4) = v28;
  }
  while ( v23 != a2 + 22 );
  v29 = *(_BYTE *)(v8 + 3072);
  v30 = v7;
  v31 = a3 + 4;
  v53 = v7 + 12;
  a3[3] = v29;
  *(_BYTE *)(v8 + 3072) = v29 + 1;
  do
  {
    v30 += 4;
    v31 += 16;
    v32 = *(v30 - 3);
    v33 = *(v30 - 2);
    v34 = *(v30 - 1);
    *((_DWORD *)v31 - 4) = *(v30 - 4);
    *((_DWORD *)v31 - 3) = v32;
    *((_DWORD *)v31 - 2) = v33;
    *((_DWORD *)v31 - 1) = v34;
  }
  while ( v30 != v53 );
  LOWORD(v35) = -12148;
  HIWORD(v35) = (unsigned int)&unk_16BE8C >> 16;
  v36 = memcmp(v35, v7, 0x30u);
  if ( !v36 )
  {
    V_LOCK();
    LOWORD(v43) = 26976;
    HIWORD(v43) = (unsigned int)off_135C90 >> 16;
    logfmt_raw(v58, 0x1000u, 0, v43);
    LOWORD(v45) = -14512;
    LOWORD(v44) = 25416;
    V_UNLOCK();
    HIWORD(v45) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v46) = 26996;
    HIWORD(v46) = (unsigned int)&unk_135CA4 >> 16;
    v47 = (char *)a2 + 39;
    v48 = (char *)a2 + 87;
    zlog(*v45, v46, 154, "work_2_packet_ckb", 17, 142, 80, v58);
    v56 = (unsigned __int8)a3[3];
    do
    {
      v49 = (unsigned __int8)*++v47;
      HIWORD(v44) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
      snprintf(&v57[v36], 4096 - v36, v44, v49);
      v36 += 3;
    }
    while ( v47 != v48 );
    V_LOCK();
    LOWORD(v50) = 27152;
    HIWORD(v50) = (unsigned int)&unk_135D40 >> 16;
    logfmt_raw(v58, 0x1000u, 0, v50, v54, v56);
    V_UNLOCK();
    LOWORD(v51) = 26996;
    HIWORD(v51) = (unsigned int)&unk_135CA4 >> 16;
    zlog(*v45, v51, 154, "dump_work_ckb", 13, 106, 20, v58);
    V_LOCK();
    logfmt_raw(v58, 0x1000u, 0, "dump work: %s", v57);
    V_UNLOCK();
    LOWORD(v52) = 26996;
    HIWORD(v52) = (unsigned int)&unk_135CA4 >> 16;
    zlog(*v45, v52, 154, "dump_work_ckb", 13, 107, 20, v58);
  }
  v37 = &last_header_ckb;
  do
  {
    v7 += 4;
    v37 += 4;
    v38 = *(v7 - 3);
    v39 = *(v7 - 2);
    v40 = *(v7 - 1);
    *(v37 - 4) = *(v7 - 4);
    *(v37 - 3) = v38;
    *(v37 - 2) = v39;
    *(v37 - 1) = v40;
  }
  while ( v7 != v53 );
  v41 = BM_CRC16(a3 + 2, 50);
  a3[53] = v41;
  a3[52] = HIBYTE(v41);
  *a4 = 54;
  return 0;
}
