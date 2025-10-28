int __fastcall open_serdes_clk_close_core_clk(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  _DWORD v5[2]; // [sp+10h] [bp-1004h] BYREF
  int v6; // [sp+18h] [bp-FFCh]
  int v7; // [sp+1Ch] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "open_serdes_clk_close_core_clk",
    30,
    217,
    20,
    v5);
  v6 = 1441792;
  v7 = 0;
  v5[1] = 0;
  v5[0] = -2147483642;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v6) = 1;
  v3(a1, v5);
  usleep(0x2710u);
  return 0;
}
