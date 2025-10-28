int __fastcall close_one_chip_cores_ks5(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  int v6; // r1
  int v7; // r3
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  _DWORD v11[2]; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+50h] [bp-FF8h]
  int v13; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v4) = 23936;
  HIWORD(v4) = (unsigned int)"p" >> 16;
  V_INT((int)v9, v4, *(int *)(a1 + 248));
  LOWORD(v5) = -5672;
  HIWORD(v5) = (unsigned int)"eq to low, chip id %d" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = -2320;
  HIWORD(v6) = (unsigned int)&unk_16F6D8 >> 16;
  zlog(g_zc, v6, 174, "close_one_chip_cores_ks5", 24, 713, 40, v11);
  v7 = *(_DWORD *)(a1 + 356);
  v12 = 1835008;
  v13 = 0;
  v11[1] = 0;
  v11[0] = -1069408496;
  BYTE1(v12) = v7 * a2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v11);
  return 0;
}
