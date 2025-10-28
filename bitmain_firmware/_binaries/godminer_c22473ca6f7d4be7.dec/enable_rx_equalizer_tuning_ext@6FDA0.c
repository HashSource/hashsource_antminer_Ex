int __fastcall enable_rx_equalizer_tuning_ext(int a1, int a2, int a3)
{
  char v4; // r6
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r4
  int v10; // r9
  _BOOL4 v11; // r7
  int v12; // r6
  unsigned __int16 v13; // r5
  int v15; // [sp+2Ch] [bp-1048h]
  int v16; // [sp+30h] [bp-1044h]
  _WORD *v17; // [sp+38h] [bp-103Ch]
  int v20; // [sp+4Ch] [bp-1028h]
  _DWORD v21[7]; // [sp+50h] [bp-1024h] BYREF
  int v22; // [sp+6Ch] [bp-1008h] BYREF
  _DWORD v23[3]; // [sp+70h] [bp-1004h] BYREF
  __int16 v24; // [sp+7Ch] [bp-FF8h] BYREF

  v4 = a2;
  V_LOCK();
  LOWORD(v5) = -7948;
  HIWORD(v5) = (unsigned int)&loc_12D594 >> 16;
  v20 = 0;
  V_INT((int)v21, v5, *(int *)(a1 + 140));
  LOWORD(v6) = -22412;
  HIWORD(v6) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    (char *)v23,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    v6,
    "enable_rx_equalizer_tuning_ext");
  V_UNLOCK();
  LOWORD(v7) = -14512;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v8) = -25512;
  HIWORD(v8) = (unsigned int)"one" >> 16;
  zlog(*v7, v8, 154, "enable_rx_equalizer_tuning_ext", 30, 3545, 60, v23);
  v16 = (unsigned __int8)(v4 - 1) + 1;
  v23[0] = 100991489;
  v23[1] = 235735561;
  v23[2] = 134677248;
  v24 = 3851;
  do
  {
    v17 = (_WORD *)((char *)&v22 + 3);
    do
    {
      v9 = *((unsigned __int8 *)v17 + 1);
      v17 = (_WORD *)((char *)v17 + 1);
      if ( a2 )
      {
        v10 = 0;
        do
        {
          v11 = (unsigned __int8)v10 <= 3u && v9 == 3;
          if ( !v11 && *(_BYTE *)(a3 + 8 * (v9 + 2 * v20) + v10) )
          {
            v12 = (unsigned __int16)((_WORD)v10 << 12) | 1;
            serdes_apb_write_1_chip(a1, v20, v9, v12, -4194305);
            v15 = (unsigned __int16)((_WORD)v10 << 12) | 0x2F;
            serdes_apb_write_1_chip(a1, v20, v9, v15, 0);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -4194305);
            serdes_apb_write_1_chip(a1, v20, v9, v15, 0x400000);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -4194305);
            serdes_apb_write_1_chip(a1, v20, v9, v15, 0);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -2049);
            serdes_apb_write_1_chip(a1, v20, v9, (unsigned __int16)((_WORD)v10 << 12) | 0x37, 2048);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -1073741825);
            v13 = ((_WORD)v10 << 12) | 0x98;
            serdes_apb_write_1_chip(a1, v20, v9, (unsigned __int16)((_WORD)v10 << 12) | 0x7E, 0x40000000);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -16777217);
            serdes_apb_write_1_chip(a1, v20, v9, v13, 0);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -16777217);
            serdes_apb_write_1_chip(a1, v20, v9, v13, 0x1000000);
            check_d54_one_lane(a1, (unsigned __int8)v20, v9, (unsigned __int8)v10, 8u);
            serdes_apb_write_1_chip(a1, v20, v9, v12, -16777217);
            serdes_apb_write_1_chip(a1, v20, v9, v13, 0);
            serdes_apb_write_1_chip(a1, v20, v9, v12, 0);
            check_d54_one_lane(a1, (unsigned __int8)v20, v9, (unsigned __int8)v10, 0);
          }
          ++v10;
        }
        while ( v10 != v16 );
      }
    }
    while ( v17 != (__int16 *)((char *)&v24 + 1) );
    ++v20;
  }
  while ( v20 != 8 );
  return 0;
}
