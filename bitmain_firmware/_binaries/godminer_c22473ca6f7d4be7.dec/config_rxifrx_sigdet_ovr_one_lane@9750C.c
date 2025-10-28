int __fastcall config_rxifrx_sigdet_ovr_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4)
{
  char *v7; // r1
  int v8; // r8
  int v9; // r4
  int v10; // r5
  _DWORD *v11; // r2
  int v12; // r1
  int v14; // [sp+20h] [bp-102Ch]
  _DWORD v15[7]; // [sp+28h] [bp-1024h] BYREF
  int v16; // [sp+44h] [bp-1008h]
  char v17[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -7948;
  HIWORD(v7) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v8) = -24664;
  HIWORD(v8) = (unsigned int)"_lane" >> 16;
  V_INT((int)v15, v7, *(int *)(a1 + 140));
  LOWORD(v9) = -22412;
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v14 = v9;
  LOWORD(v9) = a4 << 12;
  v10 = (unsigned __int16)(a4 << 12) | 1;
  logfmt_raw(v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v14, v8 - 3916);
  V_UNLOCK();
  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  zlog(*v11, v12, 154, v8 - 3880, 33, 9140, 60, v17);
  sub_5D8A4(a1, a3, v10, -134217729);
  sub_5D8A4(a1, a3, v9 & 0xF000 | 0x99, 0x8000000);
  sub_5D8A4(a1, a3, v10, 0x7FFFFFFF);
  sub_5D8A4(a1, a3, v9 & 0xF000 | 0x7F, 0x80000000);
  sub_5D8A4(a1, a3, v10, 0);
  return 0;
}
