int __fastcall enable_rx_equalizer_tuning(int a1, int a2, _BYTE *a3, int a4)
{
  char *v8; // r1
  int v9; // r10
  int v10; // r8
  int v11; // r8
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r6
  int v15; // r7
  int v16; // r12
  int v18; // [sp+20h] [bp-1034h]
  int v19; // [sp+2Ch] [bp-1028h]
  _DWORD v20[7]; // [sp+30h] [bp-1024h] BYREF
  int v21; // [sp+4Ch] [bp-1008h]
  char v22[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  v9 = 61495;
  V_INT((int)v20, v8, *(int *)(a1 + 140));
  LOWORD(v10) = -22412;
  HIWORD(v10) = (unsigned int)&unk_139BA4 >> 16;
  v18 = v10;
  v11 = 61487;
  logfmt_raw(
    v22,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    v18,
    "enable_rx_equalizer_tuning");
  V_UNLOCK();
  LOWORD(v12) = -14512;
  HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v13) = -25512;
  HIWORD(v13) = (unsigned int)"one" >> 16;
  v14 = 61441;
  v15 = 61592;
  zlog(*v12, v13, 154, "enable_rx_equalizer_tuning", 26, 3453, 60, v22);
  v16 = 61566;
  if ( a4 != 8 )
  {
    v14 = 1;
    v11 = 47;
    v16 = 126;
    v15 = 152;
    v9 = 55;
  }
  v19 = v16;
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -4194305);
  sub_5D8A4(a1, (unsigned __int8)a3, v11, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -4194305);
  sub_5D8A4(a1, (unsigned __int8)a3, v11, 0x400000);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -4194305);
  sub_5D8A4(a1, (unsigned __int8)a3, v11, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -2049);
  sub_5D8A4(a1, (unsigned __int8)a3, v9, 2048);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -1073741825);
  sub_5D8A4(a1, (unsigned __int8)a3, v19, 0x40000000);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -16777217);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -16777217);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0x1000000);
  check_d54(a1, a2, a3, a4, 8u);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -16777217);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
  check_d54(a1, a2, a3, a4, 0);
  return 0;
}
