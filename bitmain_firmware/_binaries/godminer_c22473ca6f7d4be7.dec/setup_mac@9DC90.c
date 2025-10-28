int __fastcall setup_mac(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = -22412;
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, "setup_mac");
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -25512;
  HIWORD(v4) = (unsigned int)"one" >> 16;
  zlog(*v3, v4, 154, "setup_mac", 9, 11457, 20, v6);
  sub_5C100(a1, 159, -1);
  usleep(0x2710u);
  return 0;
}
