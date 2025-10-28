int __fastcall softreset_all_chip_ks5(int *a1)
{
  int v2; // r7
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int *, _DWORD *); // r3
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  _DWORD v12[2]; // [sp+48h] [bp-1004h] BYREF
  int v13; // [sp+50h] [bp-FFCh]
  int v14; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = -3880;
  V_LOCK();
  LOWORD(v3) = 23936;
  HIWORD(v3) = (unsigned int)"p" >> 16;
  HIWORD(v2) = (unsigned int)"%08x" >> 16;
  V_INT((int)v10, v3, a1[62]);
  LOWORD(v4) = -5564;
  HIWORD(v4) = (unsigned int)" " >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v4);
  V_UNLOCK();
  LOWORD(v5) = -2320;
  HIWORD(v5) = (unsigned int)&unk_16F6D8 >> 16;
  zlog(g_zc, v5, 174, v2 + 1316, 22, 628, 40, v12);
  V_LOCK();
  LOWORD(v6) = -26716;
  HIWORD(v6) = (unsigned int)"ackend/chip_setting.c" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v6, v2 + 1340, 68);
  V_UNLOCK();
  LOWORD(v7) = -26872;
  HIWORD(v7) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v7, 153, v2 + 1376, 35, 123, 20, v12);
  v13 = 0;
  v12[0] = 3;
  v14 = 0;
  v8 = (void (__fastcall *)(int *, _DWORD *))a1[66];
  HIWORD(v13) = 68;
  LOBYTE(v13) = 1;
  v12[1] = 0;
  v8(a1, v12);
  sub_9A160((int)a1, 10, 0);
  sub_9A4A8(a1, 127);
  return 0;
}
