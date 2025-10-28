int __fastcall overwrite_to_24G(int a1, int a2, int a3, int a4)
{
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r7
  int v11; // r9
  int v12; // r8
  int v13; // r6
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -24312;
  HIWORD(v7) = (unsigned int)"rx" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v7, "overwrite_to_24G", a3);
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v8, v9, 154, "overwrite_to_24G", 16, 8152, 60, v15);
  if ( a4 == 8 )
  {
    v13 = 61443;
    v12 = 61448;
    v11 = 61442;
    v10 = 61441;
  }
  else
  {
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 2;
    v12 = (unsigned __int16)((_WORD)a4 << 12) | 8;
    v13 = (unsigned __int16)((_WORD)a4 << 12) | 3;
  }
  sub_5C158(a1, a3, 144, -1009);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 64);
  sub_5C158(a1, a3, 145, -2147450878);
  sub_5D8A4(a1, a3, v10, -196609);
  sub_5D8A4(a1, a3, v11, 0x20000);
  sub_5D8A4(a1, a3, v10, -4);
  sub_5D8A4(a1, a3, v12, 2);
  sub_5D8A4(a1, a3, v10, -196609);
  sub_5D8A4(a1, a3, v12, 196608);
  sub_5D8A4(a1, a3, v10, -196609);
  sub_5D8A4(a1, a3, v13, 196608);
  sub_5C158(a1, a3, 144, -786433);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 786432);
  sub_5C158(a1, a3, 145, -2147450818);
  sub_5C158(a1, a3, 144, -8388609);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0x800000);
  sub_5C158(a1, a3, 145, -2147450808);
  sub_5C158(a1, a3, 144, -805306369);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 805306368);
  sub_5C158(a1, a3, 145, -2147450804);
  sub_5D8A4(a1, a3, v10, 0);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147442687);
  return 0;
}
