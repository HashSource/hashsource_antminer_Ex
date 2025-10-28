int __fastcall net_mining_start_eth_2282(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  int v6; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "net_mining_start_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "net_mining_start_eth_2282",
    25,
    10954,
    40,
    v3);
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 0, 0);
  sub_106D34(a1, 28, 0);
  sub_106D34(a1, 26, 28);
  v6 = *(_DWORD *)(a1 + 1060);
  if ( *(_DWORD *)(a1 + 1060) )
    sub_106D34(a1, 27, *(__int64 *)(v6 + 8) >> 7);
  if ( (unsigned __int16)asic_select_0 > 5u && (unsigned __int16)asic_select_1 > 5u )
  {
    sub_106D34(a1, 9, 458781);
  }
  else
  {
    sub_106D34(a1, 9, 0);
    if ( (unsigned __int16)asic_select_0 <= 5u )
      sub_106F8C(a1, asic_select_0, 9, 458781);
    if ( (unsigned __int16)asic_select_1 <= 5u )
      sub_106F8C(a1, asic_select_1, 9, 458781);
  }
  set_initial_interval_time_eth_2282(a1, internal_time);
  *(_BYTE *)(a1 + 279) = 1;
  *(_BYTE *)(a1 + 278) = 1;
  return 0;
}
