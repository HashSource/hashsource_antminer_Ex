int __fastcall setup_mac_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 896;
  HIWORD(v1) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 1460);
  V_UNLOCK();
  LOWORD(v4) = 5292;
  HIWORD(v4) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v4, 174, v1 + 1476, 13, 524, 20, v6);
  sub_A3FA8(a1, 143, 33489407);
  usleep(0x2710u);
  return 0;
}
