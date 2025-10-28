int __fastcall single_chip_net_mining_eth_2282(int a1, int a2)
{
  _BYTE v5[52]; // [sp+38h] [bp-1034h] BYREF
  _DWORD v6[7]; // [sp+1038h] [bp-34h] BYREF
  int v7; // [sp+1054h] [bp-18h]
  int v8; // [sp+105Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v6, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "chip-%d %s...",
    a2,
    "single_chip_net_mining_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_chip_net_mining_eth_2282",
    31,
    2011,
    60,
    v5);
  sub_106F8C(a1, a2, 15, 3);
  sub_106F8C(a1, a2, 0, 0);
  sub_106F8C(a1, a2, 28, 0);
  sub_106F8C(a1, a2, 26, 28);
  v8 = *(_DWORD *)(a1 + 1060);
  if ( *(_DWORD *)(a1 + 1060) )
    sub_106F8C(a1, a2, 27, *(__int64 *)(v8 + 8) >> 7);
  sub_106F8C(a1, a2, 9, 458781);
  sub_106F8C(a1, a2, 32, (unsigned __int8)internal_time);
  return 0;
}
