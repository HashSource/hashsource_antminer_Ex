int __fastcall setup_all_chip_eth(int a1)
{
  float v1; // s15
  int v3; // r0
  unsigned int v4; // r4
  int v5; // r8
  int v6; // r0
  unsigned int v7; // r3
  int result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r3
  void (__fastcall *v16)(int, int, int); // r3
  int v17; // r1
  int v18; // r0
  int v19; // r0
  bool v20; // zf
  _DWORD v21[4]; // [sp+28h] [bp-1034h] BYREF
  int v22; // [sp+38h] [bp-1024h] BYREF
  _BYTE v23[4100]; // [sp+58h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v22, "chain");
  v3 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_all_chip_eth",
    18,
    12294,
    60,
    v23);
  v4 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( v4 )
  {
    v5 = 3;
    while ( 1 )
    {
      v6 = sub_5CC34(a1, v4);
      if ( *(_DWORD *)(a1 + 236) < v4 )
      {
        v9 = dev_ctrl(v6);
        (*(void (__fastcall **)(_DWORD))(v9 + 28))(*(_DWORD *)(a1 + 136));
        v10 = usleep((__useconds_t)&loc_493E0);
        v11 = dev_ctrl(v10);
        v12 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v11 + 24))(
                *(_DWORD *)(a1 + 136),
                *(_DWORD *)(a1 + 764),
                *(_DWORD *)(a1 + 776));
        v13 = dev_ctrl(v12);
        (*(void (__fastcall **)(_DWORD))(v13 + 36))(*(_DWORD *)(a1 + 136));
      }
      usleep((__useconds_t)&loc_493E0);
      v7 = *(_DWORD *)(a1 + 236);
      if ( v7 >= v4 )
        break;
      if ( !--v5 )
        return 3;
    }
    if ( v7 != v4 )
      return 3;
  }
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 296) - 1;
  do
    *(_BYTE *)++v15 = v14++;
  while ( v14 != 8 );
  v16 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v17 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 1;
  v16(a1, v17, 8);
  sub_5CC34(a1, 8);
  setup_clk(a1);
  v18 = set_debug_ctrl(a1, 19);
  v21[2] = 4718593;
  v21[0] = 1;
  v21[1] = 0;
  v21[3] = 0;
  V_LOCK(v18);
  v19 = logfmt_raw((int)v23, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_ETH",
    26,
    480,
    60,
    v23);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v21);
  result = *(unsigned __int8 *)(a1 + 268);
  v20 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v20 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
