int __fastcall softreset_all_chip_one_by_one_ks5(int *a1)
{
  char *v2; // r1
  int v3; // r6
  int v4; // r1
  int v5; // r6
  int v6; // r10
  int v7; // r1
  int v8; // r2
  void (__fastcall *v9)(int *, _DWORD *); // r3
  _DWORD v11[7]; // [sp+28h] [bp-1024h] BYREF
  int v12; // [sp+44h] [bp-1008h]
  _DWORD v13[2]; // [sp+48h] [bp-1004h] BYREF
  int v14; // [sp+50h] [bp-FFCh]
  int v15; // [sp+54h] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 23936;
  HIWORD(v2) = (unsigned int)"p" >> 16;
  V_INT((int)v11, v2, a1[62]);
  LOWORD(v3) = -5564;
  HIWORD(v3) = (unsigned int)" " >> 16;
  logfmt_raw((char *)v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v3);
  V_UNLOCK();
  LOWORD(v4) = -2320;
  HIWORD(v4) = (unsigned int)&unk_16F6D8 >> 16;
  zlog(g_zc, v4, 174, "softreset_all_chip_one_by_one_ks5", 33, 653, 40, v13);
  if ( a1[84] > 0 )
  {
    v5 = 0;
    LOWORD(v6) = -26716;
    do
    {
      V_LOCK();
      HIWORD(v6) = (unsigned int)"ackend/chip_setting.c" >> 16;
      logfmt_raw((char *)v13, 0x1000u, 0, v6, "ChipSetting_software_reset_one_asic_KS5_2382", 68);
      V_UNLOCK();
      LOWORD(v7) = -26872;
      HIWORD(v7) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
      zlog(g_zc, v7, 153, "ChipSetting_software_reset_one_asic_KS5_2382", 44, 136, 20, v13);
      v8 = a1[107];
      v14 = 0;
      v9 = (void (__fastcall *)(int *, _DWORD *))a1[66];
      v13[0] = 3;
      LOBYTE(v8) = v8 * v5;
      v13[1] = 0;
      HIWORD(v14) = 68;
      ++v5;
      v15 = 0;
      BYTE1(v14) = v8;
      v9(a1, v13);
      usleep(0x3E8u);
    }
    while ( a1[84] > v5 );
  }
  sub_9A160((int)a1, 10, 0);
  sub_9A4A8(a1, 127);
  return 0;
}
