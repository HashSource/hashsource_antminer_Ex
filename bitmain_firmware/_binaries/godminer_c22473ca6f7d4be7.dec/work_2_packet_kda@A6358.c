int __fastcall work_2_packet_kda(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  _WORD *v7; // r10
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r12
  _DWORD *v12; // r0
  int v13; // t1
  int v14; // r9
  int v15; // lr
  int v16; // r12
  int v17; // r9
  int v18; // lr
  int v19; // r12
  char *v20; // r6
  int v21; // r3
  char v22; // r1
  char v23; // r12
  char v24; // r1
  char *v25; // r3
  _BYTE *v26; // r2
  char v27; // t1
  const void *v28; // r0
  int v29; // r4
  void *v30; // r0
  __int16 v31; // r0
  int v32; // r3
  int v34; // r3
  int *v35; // r12
  int *v36; // r7
  int v37; // r1
  int v38; // r0
  const char *v39; // r9
  _BYTE *v40; // r7
  int v41; // t1
  int v42; // r3
  const char *v43; // r9
  int v44; // r7
  int v45; // r5
  int v46; // r1
  int v47; // r4
  int v48; // t1
  int v49; // r3
  int v50; // r1
  int v51; // r1
  int v54; // [sp+1Ch] [bp-2010h]
  int *v55; // [sp+20h] [bp-200Ch]
  int v56; // [sp+24h] [bp-2008h]
  char v57[4056]; // [sp+28h] [bp-2004h] BYREF
  char v58[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v7 = (_WORD *)(a2 + 396);
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v8 = (_DWORD *)a2;
  v9 = *(unsigned __int8 *)(v5 + 50816);
  v10 = a2 + 8;
  v11 = *(_DWORD *)(v10 + 352);
  v54 = v10;
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v9 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v9 + 1460));
  v13 = v8[91];
  v8 += 91;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v8[5];
  v18 = v8[6];
  v19 = v8[7];
  v12[4] = v8[4];
  v20 = (char *)(a2 + 72);
  v12[6] = v18;
  v12[7] = v19;
  v12[5] = v17;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 50816) + 16) << 6)), (const char *)v10);
  memcpy((void *)(v5 + 286 * *(unsigned __int8 *)(v5 + 50816) + 9216), (const void *)(a2 + 72), 0x11Eu);
  v21 = 3 * *(unsigned __int8 *)(v5 + 50816) + 45824;
  v22 = *(_BYTE *)(a2 + 398);
  *(_WORD *)(v5 + v21) = *v7;
  *(_BYTE *)(v5 + v21 + 2) = v22;
  v23 = *(_BYTE *)(v5 + 50816);
  a3[3] = v23;
  *(_BYTE *)(v5 + 50816) = (v23 + 1) & 0x7F;
  memset(a3 + 4, 0, 0x11Eu);
  v24 = *(_BYTE *)(a2 + 398);
  v25 = (char *)(a2 + 350);
  v26 = a3 + 6;
  *((_WORD *)a3 + 2) = *v7;
  a3[6] = v24;
  do
  {
    v27 = *--v25;
    *++v26 = v27;
  }
  while ( v25 != v20 );
  LOWORD(v28) = -11536;
  HIWORD(v28) = (unsigned int)&unk_16C0F0 >> 16;
  v29 = memcmp(v28, (const void *)(a2 + 72), 0x11Eu);
  if ( !v29 )
  {
    V_LOCK();
    LOWORD(v34) = 26976;
    LOWORD(v35) = -14512;
    HIWORD(v35) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v34) = (unsigned int)off_135C90 >> 16;
    v36 = v35;
    v55 = v35;
    logfmt_raw(v58, 0x1000u, 0, v34);
    V_UNLOCK();
    LOWORD(v37) = -16468;
    v38 = *v36;
    HIWORD(v37) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
    LOWORD(v39) = -24656;
    v40 = a3 - 1;
    zlog(v38, v37, 154, "work_2_packet_kda", 17, 130, 80, v58);
    v56 = (unsigned __int8)a3[3];
    do
    {
      v41 = (unsigned __int8)*++v40;
      HIWORD(v39) = (unsigned int)"div4_seq_one_lane" >> 16;
      snprintf(&v57[v29], 4096 - v29, v39, v41);
      v29 += 2;
    }
    while ( v40 != a3 + 291 );
    V_LOCK();
    LOWORD(v42) = -16312;
    HIWORD(v42) = (unsigned int)&unk_13B378 >> 16;
    logfmt_raw(v58, 0x1000u, 0, v42, v57);
    V_UNLOCK();
    LOWORD(v43) = -24656;
    v44 = a2 + 357;
    v45 = a2 + 71;
    LOWORD(v46) = -16468;
    v47 = 0;
    HIWORD(v46) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
    zlog(*v55, v46, 154, "dump_work_kda", 13, 86, 60, v58);
    do
    {
      v48 = *(unsigned __int8 *)++v45;
      HIWORD(v43) = (unsigned int)"div4_seq_one_lane" >> 16;
      snprintf(&v57[v47], 4096 - v47, v43, v48);
      v47 += 2;
    }
    while ( v44 != v45 );
    V_LOCK();
    LOWORD(v49) = -16296;
    HIWORD(v49) = (unsigned int)&unk_13B388 >> 16;
    logfmt_raw(v58, 0x1000u, 0, v49, v54, v56);
    V_UNLOCK();
    LOWORD(v50) = -16468;
    HIWORD(v50) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
    zlog(*v55, v50, 154, "dump_work_kda", 13, 92, 60, v58);
    V_LOCK();
    logfmt_raw(v58, 0x1000u, 0, "dump work: %s", v57);
    V_UNLOCK();
    LOWORD(v51) = -16468;
    HIWORD(v51) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
    zlog(*v55, v51, 154, "dump_work_kda", 13, 93, 60, v58);
  }
  LOWORD(v30) = -11536;
  HIWORD(v30) = (unsigned int)&unk_16C0F0 >> 16;
  memcpy(v30, v20, 0x11Eu);
  v31 = BM_CRC16(a3 + 2, 288);
  a3[291] = v31;
  a3[290] = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 292;
  if ( !v32 || !*(_BYTE *)(a1 + 146) )
    return 0;
  memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
  chip_setting_ticket_value_kda(a1, 26);
  *(_BYTE *)(a1 + 145) = 0;
  return 0;
}
