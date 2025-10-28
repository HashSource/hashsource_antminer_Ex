int __fastcall work_2_packet_hns(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r8
  const void *v8; // r11
  int v9; // r2
  int v10; // r12
  _DWORD *v11; // r0
  int v12; // r6
  int v13; // r4
  int v14; // lr
  int v15; // r4
  int v16; // lr
  const char *v17; // r6
  int v18; // r7
  int v19; // r5
  int v20; // r4
  int v21; // r1
  int v22; // t1
  int v23; // r3
  _DWORD *v24; // r5
  int v25; // r1
  int v26; // r3
  int v27; // r1
  const void *v28; // r0
  void *v29; // r0
  __int16 v30; // r0
  int v31; // r3
  int v33; // r3
  int v34; // r1
  int v35; // [sp+14h] [bp-2010h]
  int v36; // [sp+18h] [bp-200Ch]
  char v38[4064]; // [sp+20h] [bp-2004h] BYREF
  char v39[4100]; // [sp+1020h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (const void *)(a2 + 40);
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 42496);
  v35 = a2 + 8;
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  strcpy((char *)(v6 + 32 * (v9 + 32)), (const char *)(a2 + 8));
  v10 = *(unsigned __int8 *)(v6 + 42496);
  *(_DWORD *)(v6 + 4 * (v10 + 9472)) = *(_DWORD *)(a2 + 296);
  v11 = (_DWORD *)(v6 + 32 * (v10 + 1200));
  v12 = *(_DWORD *)(a2 + 304);
  v13 = *(_DWORD *)(a2 + 308);
  v14 = *(_DWORD *)(a2 + 312);
  *v11 = *(_DWORD *)(a2 + 300);
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v17 = *(const char **)(a2 + 320);
  v15 = *(_DWORD *)(a2 + 324);
  v16 = *(_DWORD *)(a2 + 328);
  v11[4] = *(_DWORD *)(a2 + 316);
  v11[5] = v17;
  LOWORD(v17) = 25416;
  v11[6] = v15;
  v18 = a2 + 295;
  v11[7] = v16;
  v19 = a2 + 39;
  v20 = 0;
  memcpy((void *)(v6 + ((*(unsigned __int8 *)(v6 + 42496) + 20) << 8)), v8, 0x100u);
  v21 = *(unsigned __int8 *)(v6 + 42496);
  a3[3] = v21;
  v36 = v21;
  *(_BYTE *)(v6 + 42496) = (v21 + 1) & 0x7F;
  do
  {
    v22 = *(unsigned __int8 *)++v19;
    HIWORD(v17) = (unsigned int)" no sensor chip temp exceed limit! (%d)" >> 16;
    snprintf(&v38[v20], 4096 - v20, v17, v22);
    v20 += 3;
  }
  while ( v19 != v18 );
  V_LOCK();
  LOWORD(v23) = -17464;
  HIWORD(v23) = (unsigned int)&unk_13AEF8 >> 16;
  LOWORD(v24) = -14512;
  HIWORD(v24) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v39, 0x1000u, 0, v23, v35, v36);
  V_UNLOCK();
  LOWORD(v25) = -17424;
  HIWORD(v25) = (unsigned int)&unk_13AF20 >> 16;
  zlog(*v24, v25, 154, "dump_work_hns", 13, 84, 20, v39);
  V_LOCK();
  LOWORD(v26) = 27192;
  HIWORD(v26) = (unsigned int)&unk_135D68 >> 16;
  logfmt_raw(v39, 0x1000u, 0, v26, v38);
  V_UNLOCK();
  LOWORD(v27) = -17424;
  HIWORD(v27) = (unsigned int)&unk_13AF20 >> 16;
  zlog(*v24, v27, 154, "dump_work_hns", 13, 85, 20, v39);
  memcpy(a3 + 4, v8, 0x100u);
  LOWORD(v28) = -11792;
  HIWORD(v28) = (unsigned int)&unk_16BFF0 >> 16;
  if ( !memcmp(v28, v8, 0x100u) )
  {
    V_LOCK();
    LOWORD(v33) = 26976;
    HIWORD(v33) = (unsigned int)off_135C90 >> 16;
    logfmt_raw(v39, 0x1000u, 0, v33);
    V_UNLOCK();
    LOWORD(v34) = -17424;
    HIWORD(v34) = (unsigned int)&unk_13AF20 >> 16;
    zlog(*v24, v34, 154, "work_2_packet_hns", 17, 118, 80, v39);
  }
  LOWORD(v29) = -11792;
  HIWORD(v29) = (unsigned int)&unk_16BFF0 >> 16;
  memcpy(v29, v8, 0x100u);
  v30 = BM_CRC16(a3 + 2, 258);
  a3[261] = v30;
  a3[260] = HIBYTE(v30);
  v31 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 262;
  if ( !v31 || !*(_BYTE *)(a1 + 146) )
    return 0;
  memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
  chip_setting_ticket_value_hns(a1, 26);
  *(_BYTE *)(a1 + 145) = 0;
  return 0;
}
