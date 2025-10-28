int __fastcall set_core_reset_kas(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -7712;
  HIWORD(v1) = (unsigned int)"cle limit value %08x" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 1056);
  V_UNLOCK();
  LOWORD(v4) = -6092;
  HIWORD(v4) = (unsigned int)", expected freq: %.2f" >> 16;
  zlog(g_zc, v4, 174, v1 + 1076, 18, 173, 40, v6);
  sub_91230(a1, 68, 2);
  return 0;
}
