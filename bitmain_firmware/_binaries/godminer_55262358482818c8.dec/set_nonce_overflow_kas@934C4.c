int __fastcall set_nonce_overflow_kas(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -7712;
  HIWORD(v2) = (unsigned int)"cle limit value %08x" >> 16;
  V_LOCK();
  LOWORD(v5) = -5740;
  HIWORD(v5) = (unsigned int)"io drive strenth %08x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, v2 + 600, a2);
  V_UNLOCK();
  LOWORD(v6) = -6092;
  HIWORD(v6) = (unsigned int)", expected freq: %.2f" >> 16;
  zlog(g_zc, v6, 174, v2 + 624, 22, 111, 40, v8);
  sub_91230(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
