int __fastcall top_init_eth(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  void (__fastcall *v6)(int, int); // r3
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // r0
  int v14; // [sp+28h] [bp-1064h] BYREF
  _DWORD v15[8]; // [sp+48h] [bp-1044h] BYREF
  int v16; // [sp+68h] [bp-1024h] BYREF
  _BYTE v17[4100]; // [sp+88h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v14, "chain");
  v2 = logfmt_raw((int)v17, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "top_init_eth",
    12,
    1627,
    60,
    v17);
  v3 = sub_6A568((_DWORD *)a1);
  if ( v3 )
  {
    V_LOCK(v3);
    V_INT((int)v15, "chain");
    v13 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "top_init_eth",
      12,
      1631,
      100,
      v17);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 448) - 1;
    do
      *(_BYTE *)++v5 = v4++;
    while ( v4 != 8 );
    v6 = *(void (__fastcall **)(int, int))(a1 + 220);
    v7 = *(_DWORD *)(a1 + 448);
    *(_DWORD *)(a1 + 388) = 1;
    v6(a1, v7);
    sub_6A568((_DWORD *)a1);
    v8 = set_debug_ctrl(a1, 19);
    v15[2] = 4718593;
    v15[3] = 0;
    v15[1] = 0;
    v15[0] = 3;
    V_LOCK(v8);
    V_INT((int)&v16, "chain");
    v9 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/chip_setting.c",
      149,
      "ChipSetting_analog_mux_ETH",
      26,
      778,
      40,
      v17);
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v15);
    v10 = sub_68D6C(a1);
    v11 = *(unsigned __int8 *)(a1 + 420);
    if ( !v10 )
      *(_DWORD *)(a1 + 472) = 1;
    result = 0;
    if ( !v11 )
      *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  }
  return result;
}
