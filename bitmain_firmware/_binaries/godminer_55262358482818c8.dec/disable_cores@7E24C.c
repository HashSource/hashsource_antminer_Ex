int __fastcall disable_cores(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -20852;
  HIWORD(v1) = (unsigned int)"art_dcr" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 2520);
  V_UNLOCK();
  LOWORD(v4) = -17724;
  HIWORD(v4) = (unsigned int)&unk_16BAAC >> 16;
  zlog(g_zc, v4, 174, v1 + 2536, 13, 856, 20, v6);
  sub_79174(a1, 13, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
