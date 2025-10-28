int __fastcall set_lane_data_cross_eth_2282(int a1)
{
  _BYTE v3[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v5; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v4, *(int *)(a1 + 272));
  logfmt_raw(
    v3,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "%s...",
    "set_lane_data_cross_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_lane_data_cross_eth_2282",
    28,
    882,
    60,
    v3);
  return 0;
}
