int __fastcall setup_count_sync_rvn(int a1, unsigned __int8 a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 896;
  HIWORD(v2) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_LOCK();
  LOWORD(v5) = -17388;
  HIWORD(v5) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 1076);
  V_UNLOCK();
  LOWORD(v6) = 5292;
  HIWORD(v6) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v6, 174, v2 + 1100, 20, 301, 20, v8);
  sub_A409C(a1, a2, 202, 0);
  sub_A409C(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_A409C(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
