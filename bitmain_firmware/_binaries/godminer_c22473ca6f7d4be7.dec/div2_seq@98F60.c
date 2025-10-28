int __fastcall div2_seq(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r7
  int v12; // r8
  int v13; // r10
  int v14; // r9
  int v15; // r11
  int v16; // r6
  char v18[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -24680;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  logfmt_raw(v18, 0x1000u, 0, v8, "div2_seq", a2, a3);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "div2_seq", 8u, 9725, 60, v18);
  if ( a4 == 8 )
  {
    v16 = 61578;
    v15 = 61582;
    v14 = 61581;
    v13 = 61580;
    v12 = 61579;
    v11 = 61441;
  }
  else
  {
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v12 = (unsigned __int16)((_WORD)a4 << 12) | 0x8B;
    v13 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v14 = (unsigned __int16)((_WORD)a4 << 12) | 0x8D;
    v15 = (unsigned __int16)((_WORD)a4 << 12) | 0x8E;
    v16 = (unsigned __int16)((_WORD)a4 << 12) | 0x8A;
  }
  sub_5D8A4(a1, a3, v11, 0xFFFF);
  sub_5D8A4(a1, a3, v12, -859045888);
  sub_5D8A4(a1, a3, v11, -65536);
  sub_5D8A4(a1, a3, v13, 52428);
  sub_5D8A4(a1, a3, v11, (int)&loc_FFFFC + 3);
  sub_5D8A4(a1, a3, v13, -859832320);
  sub_5D8A4(a1, a3, v11, -1048576);
  sub_5D8A4(a1, a3, v14, (int)&loc_CCCCC);
  sub_5D8A4(a1, a3, v11, 0xFFFFFF);
  sub_5D8A4(a1, a3, v14, -872415232);
  sub_5D8A4(a1, a3, v11, -16777216);
  sub_5D8A4(a1, a3, v15, 13421772);
  sub_5D8A4(a1, a3, v11, 4095);
  sub_5D8A4(a1, a3, v16, -858996736);
  sub_5D8A4(a1, a3, v11, -4096);
  sub_5D8A4(a1, a3, v12, 3276);
  sub_5D8A4(a1, a3, v11, 0);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147442687);
  return 0;
}
