int __fastcall enable_rx_equalizer_tuning_one_lane(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r7
  int v13; // r6
  char v15[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v4) = 32688;
  HIWORD(v4) = (unsigned int)&unk_1372E0 >> 16;
  V_LOCK();
  LOWORD(v9) = -24384;
  HIWORD(v9) = (unsigned int)"es_phy_bist_external_phy1tx_phy2rx" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v9, v4 + 1788, a2, a3, a4);
  V_UNLOCK();
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  v12 = (unsigned __int16)((_WORD)a4 << 12) | 1;
  zlog(*v10, v11, 154, v4 + 1824, 35, 3488, 60, v15);
  sub_5D8A4(a1, a3, v12, -4194305);
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_5D8A4(a1, a3, v12, -4194305);
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0x400000);
  sub_5D8A4(a1, a3, v12, -4194305);
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x2F, 0);
  sub_5D8A4(a1, a3, v12, -2049);
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x37, 2048);
  sub_5D8A4(a1, a3, v12, -1073741825);
  v13 = (unsigned __int16)((_WORD)a4 << 12) | 0x98;
  sub_5D8A4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x7E, 0x40000000);
  sub_5D8A4(a1, a3, v12, -16777217);
  sub_5D8A4(a1, a3, v13, 0);
  sub_5D8A4(a1, a3, v12, -16777217);
  sub_5D8A4(a1, a3, v13, 0x1000000);
  check_d54_one_lane(a1, a2, a3, a4, 8u);
  sub_5D8A4(a1, a3, v12, -16777217);
  sub_5D8A4(a1, a3, v13, 0);
  sub_5D8A4(a1, a3, v12, 0);
  check_d54_one_lane(a1, a2, a3, a4, 0);
  return 0;
}
