int __fastcall setup_clk(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v6; // [sp+28h] [bp-1024h] BYREF
  int v7; // [sp+48h] [bp-1004h] BYREF
  int v8; // [sp+4Ch] [bp-1000h]
  int v9; // [sp+50h] [bp-FFCh]
  int v10; // [sp+54h] [bp-FF8h]

  V_LOCK(a1);
  V_INT((int)&v6, "chain");
  v2 = logfmt_raw((int)&v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_clk",
    9,
    527,
    60,
    &v7);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 164);
  HIWORD(v9) = 32;
  v7 = 1;
  LOBYTE(v9) = 1;
  v3(a1, &v7);
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 164);
  LOBYTE(v9) = 1;
  v7 = 0;
  HIWORD(v9) = 16;
  v4(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1179649;
  v10 = 0;
  v8 = 0;
  v7 = 4727297;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1310721;
  v10 = 0;
  v8 = 0;
  v7 = 2105857;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1048577;
  v10 = 0;
  v8 = 0;
  v7 = 7;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 2097153;
  v10 = 0;
  v8 = 0;
  v7 = 15;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1441793;
  v10 = 0;
  v8 = 0;
  v7 = -2147483633;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 3211265;
  v10 = 0;
  v8 = 0;
  v7 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 164))(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}
