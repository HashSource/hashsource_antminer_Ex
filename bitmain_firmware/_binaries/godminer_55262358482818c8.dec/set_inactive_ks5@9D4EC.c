int __fastcall set_inactive_ks5(int a1)
{
  int v1; // r4
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -3880;
  HIWORD(v1) = (unsigned int)"%08x" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3, v1 + 1276);
  V_UNLOCK();
  LOWORD(v4) = -2320;
  HIWORD(v4) = (unsigned int)&unk_16F6D8 >> 16;
  zlog(g_zc, v4, 174, v1 + 1296, 16, 181, 40, v6);
  (*(void (__fastcall **)(int))(a1 + 260))(a1);
  usleep(0x2710u);
  return 0;
}
