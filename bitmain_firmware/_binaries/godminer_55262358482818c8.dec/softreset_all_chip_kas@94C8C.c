int __fastcall softreset_all_chip_kas(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v9; // [sp+20h] [bp-28h]
  _DWORD v10[7]; // [sp+28h] [bp-20h] BYREF
  int v11; // [sp+44h] [bp-4h]
  _DWORD v12[1024]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v10, v2, *(int *)(a1 + 248));
  LOWORD(v3) = -5564;
  HIWORD(v3) = (unsigned int)" " >> 16;
  v9 = v3;
  v4 = 10;
  logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v9);
  V_UNLOCK();
  LOWORD(v5) = -6092;
  HIWORD(v5) = (unsigned int)", expected freq: %.2f" >> 16;
  zlog(g_zc, v5, 174, &unk_16E6D8, 22, 629, 40, v12);
  V_LOCK();
  LOWORD(v6) = -26716;
  HIWORD(v6) = (unsigned int)"ackend/chip_setting.c" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v6, "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  LOWORD(v7) = -26872;
  HIWORD(v7) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v7, 153, "ChipSetting_software_reset_KAS_2380", 35, 123, 20, v12);
  v12[3] = 0;
  v12[0] = 3;
  v12[2] = 4456449;
  v12[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v12);
  do
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas(a1);
    --v4;
  }
  while ( v4 );
  sub_91230(a1, 10, 0);
  sub_91344((int *)a1, 127);
  return 0;
}
