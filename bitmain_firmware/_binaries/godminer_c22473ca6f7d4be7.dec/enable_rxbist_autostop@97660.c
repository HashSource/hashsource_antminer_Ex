int __fastcall enable_rxbist_autostop(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  char *v8; // r1
  int v9; // r4
  int v10; // r4
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r9
  int v14; // r8
  int v16; // [sp+20h] [bp-102Ch]
  _DWORD v17[7]; // [sp+28h] [bp-1024h] BYREF
  int v18; // [sp+44h] [bp-1008h]
  char v19[4088]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v17, v8, *(int *)(a1 + 140));
  LOWORD(v9) = -22412;
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v16 = v9;
  v10 = 61441;
  logfmt_raw(
    v19,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    v16,
    "enable_rxbist_autostop");
  V_UNLOCK();
  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  v13 = 61457;
  v14 = 61459;
  zlog(*v11, v12, 154, "enable_rxbist_autostop", 22, 9152, 60, v19);
  if ( a4 != 8 )
  {
    v10 = 1;
    v13 = 17;
    v14 = 19;
  }
  sub_5D8A4(a1, a3, v10, -5);
  sub_5D8A4(a1, a3, v13, 4);
  sub_5D8A4(a1, a3, v10, -66060289);
  sub_5D8A4(a1, a3, v14, (a5 << 20) & 0x3F00000);
  sub_5D8A4(a1, a3, v10, 0);
  return 0;
}
