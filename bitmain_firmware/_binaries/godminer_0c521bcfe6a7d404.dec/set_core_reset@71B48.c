int __fastcall set_core_reset(int a1)
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
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "set_core_reset",
    14,
    148,
    60,
    &v7);
  sub_6FC34(a1, 240, 0x80000000);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 0;
  v7 = 13;
  v10 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 240);
  v8 = 0;
  LOBYTE(v9) = 1;
  HIWORD(v9) = 32;
  v3(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  v9 = 1;
  v10 = 0;
  v8 = 0;
  v7 = 15;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 240);
  HIWORD(v9) = 32;
  v4(a1, &v7);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
