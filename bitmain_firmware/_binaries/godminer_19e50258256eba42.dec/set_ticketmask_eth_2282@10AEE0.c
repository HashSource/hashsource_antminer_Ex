int __fastcall set_ticketmask_eth_2282(int a1, int a2)
{
  _BYTE v5[44]; // [sp+38h] [bp-102Ch] BYREF
  _DWORD v6[7]; // [sp+1038h] [bp-2Ch] BYREF
  int v7; // [sp+1054h] [bp-10h]

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
    "%s 0x%08x",
    "set_ticketmask_eth_2282",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_ticketmask_eth_2282",
    23,
    564,
    40,
    v5);
  sub_106D34(a1, 26, a2);
  *(_DWORD *)(a1 + 472) = a2;
  usleep(0x2710u);
  return 0;
}
