int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v1; // r5
  int v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 44;
  HIWORD(v1) = (unsigned int)"d, reg:%02x, core_id:%d" >> 16;
  V_LOCK();
  LOWORD(v3) = -26716;
  HIWORD(v3) = (unsigned int)"ackend/chip_setting.c" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v3, v1, 52);
  V_UNLOCK();
  LOWORD(v4) = 368;
  HIWORD(v4) = (unsigned int)"ting_working_mode_ltc" >> 16;
  zlog(g_zc, v4, 179, v1 + 32, 31, 39, 20, v6);
  v6[2] = 3407873;
  v6[0] = 0;
  v6[1] = 0;
  v6[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v6);
}
