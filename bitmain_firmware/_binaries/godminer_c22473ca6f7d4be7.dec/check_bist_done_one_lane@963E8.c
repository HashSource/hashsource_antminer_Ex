int __fastcall check_bist_done_one_lane(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r4
  _DWORD *v10; // r6
  unsigned __int8 *v11; // r4
  int v12; // r1
  int back; // r0
  char *v14; // r9
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r3
  int v22; // [sp+20h] [bp-10A4h]
  unsigned __int8 *v23; // [sp+34h] [bp-1090h]
  _DWORD v24[7]; // [sp+40h] [bp-1084h] BYREF
  int v25; // [sp+5Ch] [bp-1068h]
  _DWORD v26[7]; // [sp+60h] [bp-1064h] BYREF
  int v27; // [sp+7Ch] [bp-1048h]
  _QWORD v28[8]; // [sp+80h] [bp-1044h] BYREF
  char v29[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v9) = -22412;
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v24, v8, *(int *)(a1 + 140));
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v22 = v9;
  v11 = (unsigned __int8 *)v28;
  logfmt_raw(
    v29,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    v22,
    "check_bist_done_one_lane");
  V_UNLOCK();
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  zlog(*v10, v12, 154, "check_bist_done_one_lane", 24, 8950, 60, v29);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x11, (int)v28);
  if ( back > 0 )
  {
    LOWORD(v14) = -7948;
    v23 = (unsigned __int8 *)&v28[back];
    do
    {
      v19 = *((_DWORD *)v11 + 1);
      if ( (v19 & 0x20000) != 0 || (v19 & 0x400) == 0 )
      {
        V_LOCK();
        HIWORD(v14) = (unsigned int)&loc_12D594 >> 16;
        V_INT((int)v26, v14, *(int *)(a1 + 140));
        logfmt_raw(
          v29,
          0x1000u,
          0,
          v27,
          v26[0],
          v26[1],
          v26[2],
          v26[3],
          v26[4],
          v26[5],
          v26[6],
          v27,
          "channel %1x, chip_id %02x core_id %02x bist error",
          a4,
          *v11,
          v11[1]);
        V_UNLOCK();
        v15 = *v10;
        v16 = 100;
        v17 = 8959;
      }
      else
      {
        V_LOCK();
        LOWORD(v20) = -22972;
        HIWORD(v20) = (unsigned int)&unk_139974 >> 16;
        logfmt_raw(v29, 0x1000u, 0, v20, a4, *v11, v11[1]);
        V_UNLOCK();
        v15 = *v10;
        v16 = 60;
        v17 = 8956;
      }
      LOWORD(v18) = -25512;
      HIWORD(v18) = (unsigned int)"one" >> 16;
      v11 += 8;
      zlog(v15, v18, 154, "check_bist_done_one_lane", 24, v17, v16, v29);
    }
    while ( v11 != v23 );
  }
  return 0;
}
