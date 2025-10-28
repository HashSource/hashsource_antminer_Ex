int __fastcall misc_reinit_hns(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v6, v2, *(int *)(a1 + 248));
  LOWORD(v3) = -7764;
  HIWORD(v3) = (unsigned int)"%04x" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, v3);
  V_UNLOCK();
  LOWORD(v4) = -8280;
  HIWORD(v4) = (unsigned int)"e_cycle_limit" >> 16;
  zlog(g_zc, v4, 174, "misc_reinit_hns", 15, 551, 40, v8);
  sub_908A0(a1);
  return 0;
}
