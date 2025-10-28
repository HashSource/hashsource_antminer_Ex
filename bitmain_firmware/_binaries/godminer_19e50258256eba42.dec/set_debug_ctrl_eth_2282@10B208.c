int __fastcall set_debug_ctrl_eth_2282(int a1, int a2)
{
  _BYTE v5[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v7; // [sp+104Ch] [bp-10h]

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
    "%s...",
    "set_debug_ctrl_eth_2282",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_debug_ctrl_eth_2282",
    23,
    589,
    60,
    v5);
  return 0;
}
