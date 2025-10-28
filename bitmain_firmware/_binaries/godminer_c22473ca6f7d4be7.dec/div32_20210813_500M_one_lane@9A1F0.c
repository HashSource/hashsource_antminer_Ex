int __fastcall div32_20210813_500M_one_lane(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v9; // r3
  _DWORD *v10; // r2
  int v11; // r1
  int v13; // [sp+Ch] [bp-1008h]
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v4) = -24664;
  HIWORD(v4) = (unsigned int)"_lane" >> 16;
  V_LOCK();
  v13 = a4;
  LOWORD(v9) = -24384;
  LOWORD(a4) = (_WORD)a4 << 12;
  HIWORD(v9) = (unsigned int)"es_phy_bist_external_phy1tx_phy2rx" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v9, v4 - 3212, a2, a3, v13);
  V_UNLOCK();
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  zlog(*v10, v11, 154, v4 - 3180, 28, 9932, 60, v14);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFF);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8B, -65536);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, -65536);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8C, 0xFFFF);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, (int)&loc_FFFFC + 3);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8C, 0);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, -1048576);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8D, 0);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFFF);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8D, -16777216);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, -16777216);
  sub_5D8A4(a1, a3, a4 & 0xF000 | 0x8E, 0xFFFFFF);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, 4095);
  sub_5D8A4(a1, a3, a4 & 0xF000 | 0x8A, 0);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, -4096);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 0x8B, 0);
  sub_5D8A4(a1, a3, (unsigned __int16)a4 | 1, 0);
  return 0;
}
