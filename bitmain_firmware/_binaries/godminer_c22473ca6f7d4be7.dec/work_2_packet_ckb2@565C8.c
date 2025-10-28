int __fastcall work_2_packet_ckb2(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r5
  int v9; // r0
  int v10; // r12
  int v11; // r9
  _DWORD *v12; // r2
  int v13; // r7
  int v14; // lr
  int v15; // r12
  int v16; // r7
  int v17; // lr
  int v18; // r12
  int *v19; // r2
  int v20; // r4
  int v21; // lr
  int v22; // r12
  int v23; // r1
  int v24; // r3
  char v25; // r2
  int v26; // r3
  _BYTE *v27; // r1
  int v28; // r12
  int v29; // r0
  int v30; // r2
  const void *v31; // r0
  int v32; // r4
  _DWORD *v33; // r3
  int v34; // r0
  int v35; // r1
  int v36; // r2
  __int16 v37; // r0
  int v38; // r3
  int v40; // r3
  int *v41; // r12
  int *v42; // r5
  const char *v43; // r7
  int v44; // r1
  int v45; // r0
  int v46; // r5
  int v47; // r6
  int v48; // t1
  int v49; // r3
  int v50; // r1
  int v51; // r1
  int v52; // [sp+14h] [bp-2018h]
  int v54; // [sp+1Ch] [bp-2010h]
  int v55; // [sp+20h] [bp-200Ch]
  int *v56; // [sp+24h] [bp-2008h]
  char v57[4056]; // [sp+28h] [bp-2004h] BYREF
  char v58[4100]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  v54 = a2 + 8;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 15872);
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  v11 = a2 + 40;
  *(_DWORD *)(v6 + 4 * (v9 + 2816)) = v10;
  v12 = (_DWORD *)(v6 + 32 * (v9 + 368));
  v13 = *(_DWORD *)(a2 + 96);
  v14 = *(_DWORD *)(a2 + 100);
  v15 = *(_DWORD *)(a2 + 104);
  *v12 = *(_DWORD *)(a2 + 92);
  v12[1] = v13;
  v12[2] = v14;
  v12[3] = v15;
  v16 = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(a2 + 116);
  v18 = *(_DWORD *)(a2 + 120);
  v12[4] = *(_DWORD *)(a2 + 108);
  v12[5] = v16;
  v12[6] = v17;
  v12[7] = v18;
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 15872) + 32)), (const char *)(a2 + 8));
  v19 = (int *)(a2 + 40);
  v20 = v6 + 48 * *(unsigned __int8 *)(v6 + 15872) + 5120;
  do
  {
    v21 = *v19;
    v19 += 4;
    v22 = *(v19 - 3);
    v20 += 16;
    v23 = *(v19 - 2);
    v24 = *(v19 - 1);
    *(_DWORD *)(v20 - 16) = v21;
    *(_DWORD *)(v20 - 12) = v22;
    *(_DWORD *)(v20 - 8) = v23;
    *(_DWORD *)(v20 - 4) = v24;
  }
  while ( v19 != (int *)(a2 + 88) );
  v25 = *(_BYTE *)(v7 + 3584);
  v26 = a2 + 40;
  v27 = a3 + 4;
  v52 = a2 + 88;
  a3[3] = v25;
  *(_BYTE *)(v7 + 3584) = (v25 + 1) & 0x7F;
  do
  {
    v26 += 16;
    v27 += 16;
    v28 = *(_DWORD *)(v26 - 12);
    v29 = *(_DWORD *)(v26 - 8);
    v30 = *(_DWORD *)(v26 - 4);
    *((_DWORD *)v27 - 4) = *(_DWORD *)(v26 - 16);
    *((_DWORD *)v27 - 3) = v28;
    *((_DWORD *)v27 - 2) = v29;
    *((_DWORD *)v27 - 1) = v30;
  }
  while ( v26 != v52 );
  LOWORD(v31) = -12100;
  HIWORD(v31) = (unsigned int)&unk_16BEBC >> 16;
  v32 = memcmp(v31, (const void *)(a2 + 40), 0x30u);
  if ( !v32 )
  {
    V_LOCK();
    LOWORD(v40) = 26976;
    LOWORD(v41) = -14512;
    HIWORD(v41) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v40) = (unsigned int)off_135C90 >> 16;
    v42 = v41;
    v56 = v41;
    LOWORD(v43) = 25416;
    logfmt_raw(v58, 0x1000u, 0, v40);
    V_UNLOCK();
    LOWORD(v44) = 28064;
    v45 = *v42;
    HIWORD(v44) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    v46 = a2 + 39;
    v47 = a2 + 87;
    zlog(v45, v44, 156, "work_2_packet_ckb2", 18, 117, 80, v58);
    v55 = (unsigned __int8)a3[3];
    do
    {
      v48 = *(unsigned __int8 *)++v46;
      HIWORD(v43) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
      snprintf(&v57[v32], 4096 - v32, v43, v48);
      v32 += 3;
    }
    while ( v46 != v47 );
    V_LOCK();
    LOWORD(v49) = 27152;
    HIWORD(v49) = (unsigned int)&unk_135D40 >> 16;
    logfmt_raw(v58, 0x1000u, 0, v49, v54, v55);
    V_UNLOCK();
    LOWORD(v50) = 28064;
    HIWORD(v50) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    zlog(*v56, v50, 156, "dump_work_ckb2", 14, 84, 20, v58);
    V_LOCK();
    logfmt_raw(v58, 0x1000u, 0, "dump work: %s", v57);
    V_UNLOCK();
    LOWORD(v51) = 28064;
    HIWORD(v51) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ae/backend_ae.c" >> 16;
    zlog(*v56, v51, 156, "dump_work_ckb2", 14, 85, 20, v58);
  }
  v33 = &last_header_ckb2;
  do
  {
    v11 += 16;
    v33 += 4;
    v34 = *(_DWORD *)(v11 - 12);
    v35 = *(_DWORD *)(v11 - 8);
    v36 = *(_DWORD *)(v11 - 4);
    *(v33 - 4) = *(_DWORD *)(v11 - 16);
    *(v33 - 3) = v34;
    *(v33 - 2) = v35;
    *(v33 - 1) = v36;
  }
  while ( v11 != v52 );
  v37 = BM_CRC16(a3 + 2, 50);
  a3[53] = v37;
  a3[52] = HIBYTE(v37);
  v38 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 54;
  if ( v38 && *(_BYTE *)(a1 + 146) )
  {
    memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
    chip_setting_ticket_value_ckb2(a1, 25);
    *(_BYTE *)(a1 + 145) = 0;
  }
  return 0;
}
