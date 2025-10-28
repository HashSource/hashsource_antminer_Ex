int __fastcall check_bist_tx_running_one_lane(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r4
  _DWORD *v10; // r7
  unsigned __int8 *v11; // r4
  int v12; // r1
  int back; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r1
  int v20; // [sp+20h] [bp-10ACh]
  unsigned __int8 *v21; // [sp+38h] [bp-1094h]
  _DWORD v22[7]; // [sp+48h] [bp-1084h] BYREF
  int v23; // [sp+64h] [bp-1068h]
  _DWORD v24[7]; // [sp+68h] [bp-1064h] BYREF
  int v25; // [sp+84h] [bp-1048h]
  _QWORD v26[8]; // [sp+88h] [bp-1044h] BYREF
  char v27[4100]; // [sp+C8h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v9) = -22412;
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v22, v8, *(int *)(a1 + 140));
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v20 = v9;
  v11 = (unsigned __int8 *)v26;
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    v20,
    "check_bist_tx_running_one_lane");
  V_UNLOCK();
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  zlog(*v10, v12, 154, "check_bist_tx_running_one_lane", 30, 8853, 60, v27);
  back = serdes_apb_read_back(a1, a2, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x4A, (int)v26);
  if ( back > 0 )
  {
    v21 = (unsigned __int8 *)&v26[back];
    do
    {
      if ( (*((_DWORD *)v11 + 1) & 0x200) != 0 )
      {
        V_LOCK();
        LOWORD(v14) = -23332;
        HIWORD(v14) = (unsigned int)"og_mux_ETH" >> 16;
        logfmt_raw(v27, 0x1000u, 0, v14, a4, *v11, v11[1]);
        V_UNLOCK();
        v15 = *v10;
        v16 = 60;
        v17 = 8859;
      }
      else
      {
        V_LOCK();
        V_INT((int)v24, "chain", *(int *)(a1 + 140));
        logfmt_raw(
          v27,
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
          "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
          a4,
          *v11,
          v11[1],
          *((_DWORD *)v11 + 1));
        V_UNLOCK();
        v15 = *v10;
        v16 = 100;
        v17 = 8862;
      }
      LOWORD(v18) = -25512;
      HIWORD(v18) = (unsigned int)"one" >> 16;
      zlog(v15, v18, 154, "check_bist_tx_running_one_lane", 30, v17, v16, v27);
      v11 += 8;
    }
    while ( v11 != v21 );
  }
  return 0;
}
