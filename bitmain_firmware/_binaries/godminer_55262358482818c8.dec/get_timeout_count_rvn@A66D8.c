int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r3
  int v3; // r1
  int v4; // r4
  char v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -17388;
  HIWORD(v2) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, "get_timeout_count_rvn");
  V_UNLOCK();
  LOWORD(v3) = 5292;
  HIWORD(v3) = (unsigned int)&unk_171494 >> 16;
  v4 = 69;
  zlog(g_zc, v3, 174, "get_timeout_count_rvn", 21, 254, 20, v6);
  do
  {
    sub_A4418(a1, 255, v4++, 0);
    usleep(0x2710u);
  }
  while ( v4 != 75 );
  return 0;
}
