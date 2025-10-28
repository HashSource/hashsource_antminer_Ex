int __fastcall setup_clk(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+28h] [bp-1020h] BYREF
  int v6; // [sp+48h] [bp-1000h] BYREF
  int v7; // [sp+4Ch] [bp-FFCh]
  int v8; // [sp+50h] [bp-FF8h]
  int v9; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = logfmt_raw((int)&v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "setup_clk",
    9,
    263,
    60,
    &v6);
  v8 = 2097153;
  v9 = 0;
  v7 = 0;
  v6 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  v8 = 1179649;
  v9 = 0;
  v7 = 0;
  v6 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  v8 = 1310721;
  v9 = 0;
  v7 = 0;
  v6 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_6FC34(a1, 240, 0x80000000);
  usleep(0x2710u);
  v8 = 1441793;
  v9 = 0;
  v7 = 0;
  v6 = -2147483641;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  v8 = 3211265;
  v9 = 0;
  v7 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 240);
  v6 = 0;
  v3(a1, &v6);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
