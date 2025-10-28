int __fastcall setup_clk(int a1)
{
  int v2; // r10
  char *v3; // r1
  int v4; // r5
  _DWORD *v5; // r2
  int v6; // r1
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  int v12; // [sp+48h] [bp-1004h] BYREF
  int v13; // [sp+4Ch] [bp-1000h]
  int v14; // [sp+50h] [bp-FFCh]
  int v15; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = -24664;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v2) = (unsigned int)"_lane" >> 16;
  V_INT((int)v10, v3, *(int *)(a1 + 140));
  LOWORD(v4) = -22412;
  HIWORD(v4) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw((char *)&v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v4, v2 - 2008);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v5, v6, 154, v2 - 1996, 9, 527, 60, &v12);
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v14) = 32;
  v12 = 1;
  LOBYTE(v14) = 1;
  v7(a1, &v12);
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v14) = 1;
  v12 = 0;
  HIWORD(v14) = 16;
  v8(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 1179649;
  v15 = 0;
  v13 = 0;
  v12 = 4727297;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 1310721;
  v15 = 0;
  v13 = 0;
  v12 = 2105857;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 1048577;
  v15 = 0;
  v13 = 0;
  v12 = 7;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 2097153;
  v15 = 0;
  v13 = 0;
  v12 = 15;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 1441793;
  v15 = 0;
  v13 = 0;
  v12 = -2147483633;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = 3211265;
  v15 = 0;
  v13 = 0;
  v12 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v12);
  usleep((__useconds_t)&stru_18694.st_info);
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}
