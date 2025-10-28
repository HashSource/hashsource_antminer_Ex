int __fastcall config_rxifrx_sigdet_ovr(int a1, int a2, unsigned __int8 a3, int a4)
{
  char *v7; // r1
  int v8; // r4
  int v9; // r4
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r8
  int v13; // r7
  int v15; // [sp+20h] [bp-1028h]
  _DWORD v16[7]; // [sp+28h] [bp-1020h] BYREF
  int v17; // [sp+44h] [bp-1004h]
  char v18[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v7) = -7948;
  HIWORD(v7) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v16, v7, *(int *)(a1 + 140));
  LOWORD(v8) = -22412;
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  v15 = v8;
  v9 = 61441;
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    v15,
    "config_rxifrx_sigdet_ovr");
  V_UNLOCK();
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  v12 = 61593;
  v13 = 61567;
  zlog(*v10, v11, 154, "config_rxifrx_sigdet_ovr", 0x18u, 9124, 60, v18);
  if ( a4 != 8 )
  {
    v9 = 1;
    v12 = 153;
    v13 = 127;
  }
  sub_5D8A4(a1, a3, v9, -134217729);
  sub_5D8A4(a1, a3, v12, 0x8000000);
  sub_5D8A4(a1, a3, v9, 0x7FFFFFFF);
  sub_5D8A4(a1, a3, v13, 0x80000000);
  sub_5D8A4(a1, a3, v9, 0);
  return 0;
}
