int __fastcall set_initial_interval_time_rvn(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 896;
  HIWORD(v2) = (unsigned int)"x reg:%02x, core_id:%d" >> 16;
  V_LOCK();
  LOWORD(v5) = -17388;
  HIWORD(v5) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 788);
  V_UNLOCK();
  LOWORD(v6) = 5292;
  HIWORD(v6) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v6, 174, v2 + 820, 29, 238, 20, v8);
  sub_A3FA8(a1, 9, a2);
  usleep(0x2710u);
  return 0;
}
