int __fastcall open_core_clk_tops(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  int v5; // [sp+28h] [bp-1020h] BYREF
  _DWORD v6[2]; // [sp+48h] [bp-1000h] BYREF
  int v7; // [sp+50h] [bp-FF8h]
  int v8; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  V_INT((int)&v5, "chain");
  v2 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "open_core_clk_tops",
    18,
    124,
    60,
    v6);
  v7 = 1441792;
  v8 = 0;
  v6[1] = 0;
  v6[0] = -2147483641;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  LOBYTE(v7) = 1;
  v3(a1, v6);
  usleep(0x2710u);
  return 0;
}
