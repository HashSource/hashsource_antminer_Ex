int __fastcall load_32G_advance(int a1, int a2, unsigned __int8 a3)
{
  char *v5; // r1
  int v6; // r7
  int v7; // r4
  _DWORD *v8; // r2
  int v9; // r1
  _DWORD v11[7]; // [sp+28h] [bp-1020h] BYREF
  int v12; // [sp+44h] [bp-1004h]
  char v13[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v5) = -7948;
  HIWORD(v5) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v6) = 32688;
  HIWORD(v6) = (unsigned int)&unk_1372E0 >> 16;
  V_INT((int)v11, v5, *(int *)(a1 + 140));
  LOWORD(v7) = -22412;
  HIWORD(v7) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v7, v6 + 3620);
  V_UNLOCK();
  LOWORD(v8) = -14512;
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  zlog(*v8, v9, 154, v6 + 3640, 16, 8638, 60, v13);
  sub_5C158(a1, a3, 144, 0x7FFFFFFF);
  sub_5C158(a1, a3, 145, -2147450879);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147450807);
  sub_5C158(a1, a3, 144, 0);
  sub_5C158(a1, a3, 145, -2147450879);
  return 0;
}
