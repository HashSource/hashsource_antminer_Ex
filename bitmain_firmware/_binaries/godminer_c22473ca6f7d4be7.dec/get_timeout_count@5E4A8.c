int __fastcall get_timeout_count(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r4
  char v7[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -22412;
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, "get_timeout_count");
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -25512;
  HIWORD(v4) = (unsigned int)"one" >> 16;
  v5 = 23;
  zlog(*v3, v4, 154, "get_timeout_count", 17, 272, 0x14u, v7);
  do
  {
    sub_5C3C4(a1, 255, v5++, 0);
    usleep(0x2710u);
  }
  while ( v5 != 29 );
  return 0;
}
