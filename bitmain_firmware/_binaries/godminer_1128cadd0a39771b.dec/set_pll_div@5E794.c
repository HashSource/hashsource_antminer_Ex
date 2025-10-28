int __fastcall set_pll_div(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, char **); // r3
  char *v5; // [sp+10h] [bp-1004h] BYREF
  int v6; // [sp+14h] [bp-1000h]
  int v7; // [sp+18h] [bp-FFCh]
  int v8; // [sp+1Ch] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_pll_div",
    11,
    224,
    20,
    &v5);
  v7 = 0;
  v5 = "v_is_valid_hal";
  v8 = 0;
  v3 = *(void (__fastcall **)(int, char **))(a1 + 164);
  v6 = 0;
  LOBYTE(v7) = 1;
  HIWORD(v7) = 24;
  v3(a1, &v5);
  usleep(0x2710u);
  v7 = 1572865;
  v8 = 0;
  v6 = 0;
  v5 = "_is_valid_hal";
  (*(void (__fastcall **)(int, char **))(a1 + 164))(a1, &v5);
  usleep(0x2710u);
  return 0;
}
