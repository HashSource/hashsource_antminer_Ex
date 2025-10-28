int __fastcall serdes_initial_seq_1_by_vendor(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v4; // r8
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r7
  __int16 v11; // r4
  int v13; // [sp+14h] [bp-Ch]
  char v14[4100]; // [sp+20h] [bp+0h] BYREF

  v4 = a4;
  v13 = a4;
  V_LOCK();
  LOWORD(v7) = -24624;
  HIWORD(v7) = (unsigned int)"_lane" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v7, "serdes_initial_seq_1_by_vendor");
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v8, v9, 154, "serdes_initial_seq_1_by_vendor", 30, 3299, 60, v14);
  sub_5C158(a1, a3, 144, 252182532);
  sub_5C158(a1, a3, 145, -2147438529);
  sub_5C158(a1, a3, 144, 839027724);
  sub_5C158(a1, a3, 145, -2147438590);
  sub_5C158(a1, a3, 144, -1073676160);
  sub_5C158(a1, a3, 145, -2147438589);
  sub_5C158(a1, a3, 144, 252182532);
  sub_5C158(a1, a3, 145, -2147434433);
  sub_5C158(a1, a3, 144, 839027724);
  sub_5C158(a1, a3, 145, -2147434494);
  sub_5C158(a1, a3, 144, -1073676160);
  sub_5C158(a1, a3, 145, -2147434493);
  if ( v4 )
  {
    LOWORD(v10) = 0;
    do
    {
      v11 = (_WORD)v10 << 12;
      v10 = (unsigned __int16)(v10 + 1);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x6E, 17694978);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x1D, 134283265);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x2A, 504234034);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x19, 267913217);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x1A, -1610579952);
      sub_5D8A4(a1, a3, v11 & 0xF000 | 0x47, 338179136);
    }
    while ( v10 != v13 );
  }
  return 0;
}
