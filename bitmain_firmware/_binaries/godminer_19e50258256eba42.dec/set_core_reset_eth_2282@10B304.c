int __fastcall set_core_reset_eth_2282(int a1)
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
    "set_core_reset_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_core_reset_eth_2282",
    23,
    597,
    60,
    v3);
  sub_106D34(a1, 240, 0x80000000);
  usleep((__useconds_t)&stru_186A0);
  sub_106BA8(a1, 68, 13);
  usleep((__useconds_t)&stru_186A0);
  sub_106BA8(a1, 68, 15);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
