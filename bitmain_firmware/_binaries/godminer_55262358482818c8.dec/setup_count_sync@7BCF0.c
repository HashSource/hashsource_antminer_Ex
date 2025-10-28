int __fastcall setup_count_sync(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = -20852;
  HIWORD(v2) = (unsigned int)"art_dcr" >> 16;
  V_LOCK();
  LOWORD(v5) = -17388;
  HIWORD(v5) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 928);
  V_UNLOCK();
  LOWORD(v6) = -17724;
  HIWORD(v6) = (unsigned int)&unk_16BAAC >> 16;
  zlog(g_zc, v6, 174, v2 + 948, 16, 237, 20, v8);
  sub_792A0(a1, a2, 202, 0);
  sub_792A0(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_792A0(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
