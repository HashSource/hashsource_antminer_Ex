int __fastcall read_rx_debug_reg2_one_lane(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  char *v7; // r1
  int v8; // r8
  int v9; // r7
  int v10; // r7
  int *v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r8
  int v17; // [sp+20h] [bp-102Ch]
  _DWORD v18[7]; // [sp+28h] [bp-1024h] BYREF
  int v19; // [sp+44h] [bp-1008h]
  char v20[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -7948;
  HIWORD(v7) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v8) = -24664;
  HIWORD(v8) = (unsigned int)"_lane" >> 16;
  a4 <<= 12;
  V_INT((int)v18, v7, *(int *)(a1 + 140));
  LOWORD(v9) = -22412;
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v17 = v9;
  v10 = a4 | 1;
  logfmt_raw(v20, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v17, v8 - 3692);
  V_UNLOCK();
  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  v12 = *v11;
  v13 = v8 - 3664;
  LOWORD(v14) = -25512;
  v15 = a4 | 0x16;
  HIWORD(v14) = (unsigned int)"one" >> 16;
  a4 |= 0x1Au;
  zlog(v12, v14, 154, v13, 27, 9215, 60, v20);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D6FC(a1, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D6FC(a1, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D6FC(a1, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, 0);
  return 0;
}
