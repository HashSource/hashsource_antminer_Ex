int __fastcall read_rx_debug_reg2(int a1, int a2, _BYTE *a3, unsigned __int16 a4)
{
  char *v7; // r1
  int v8; // r6
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r9
  unsigned __int16 v12; // r7
  int v13; // r6
  int v14; // r8
  int v15; // r2
  unsigned int v16; // r7
  _DWORD v18[7]; // [sp+28h] [bp-1020h] BYREF
  int v19; // [sp+44h] [bp-1004h]
  char v20[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v7) = -7948;
  HIWORD(v7) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v18, v7, *(int *)(a1 + 140));
  LOWORD(v8) = -22412;
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    v20,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    v8,
    "read_rx_debug_reg2");
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "read_rx_debug_reg2", 18, 9184, 60, v20);
  if ( a4 )
  {
    LOWORD(v11) = 0;
    do
    {
      v12 = (_WORD)v11 << 12;
      v13 = (unsigned __int16)((_WORD)v11 << 12) | 1;
      v14 = (unsigned __int16)((_WORD)v11 << 12) | 0x16;
      v11 = (unsigned __int16)(v11 + 1);
      sub_5D8A4(a1, (unsigned __int8)a3, v12 | 1, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v12 | 0x16, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v12 | 1, -9);
      v15 = v12 | 0x16;
      v16 = v12 | 0x1A;
      sub_5D8A4(a1, (unsigned __int8)a3, v15, 8);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
      sub_5D6FC(a1, a3, v16);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 8);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
      sub_5D6FC(a1, a3, v16);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 8);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
      sub_5D6FC(a1, a3, v16);
      sub_5D8A4(a1, (unsigned __int8)a3, v13, 0);
    }
    while ( v11 != a4 );
  }
  return 0;
}
