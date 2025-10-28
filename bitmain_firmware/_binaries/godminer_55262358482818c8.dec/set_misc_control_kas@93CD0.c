int __fastcall set_misc_control_kas(int a1)
{
  int v1; // r6
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -7712;
  HIWORD(v1) = (unsigned int)"cle limit value %08x" >> 16;
  V_LOCK();
  LOWORD(v3) = -17388;
  HIWORD(v3) = (unsigned int)"addr %04x reg_data %08x" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1 + 968);
  V_UNLOCK();
  LOWORD(v4) = -6092;
  HIWORD(v4) = (unsigned int)", expected freq: %.2f" >> 16;
  zlog(g_zc, v4, 174, v1 + 992, 20, 163, 40, v6);
  v6[2] = 1835009;
  v6[3] = 0;
  v6[1] = 0;
  v6[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
  usleep(0x2710u);
  return 0;
}
