int __fastcall disable_mac(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -24664;
  HIWORD(v1) = (unsigned int)"_lane" >> 16;
  V_LOCK();
  LOWORD(v3) = -22412;
  HIWORD(v3) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 - 2660);
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  zlog(*v4, v5, 154, v1 - 2648, 11, 11464, 20, v7);
  sub_5C100(a1, 159, 0);
  usleep(0x2710u);
  return 0;
}
