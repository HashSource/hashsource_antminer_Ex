int __fastcall set_single_chip_frequency_eth_2282(int a1, int a2, char a3)
{
  float v3; // s0
  _BYTE v8[44]; // [sp+40h] [bp-102Ch] BYREF
  _DWORD v9[7]; // [sp+1040h] [bp-2Ch] BYREF
  int v10; // [sp+105Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v9, *(int *)(a1 + 272));
  logfmt_raw(
    v8,
    0x1000u,
    0,
    v10,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    "set_single_chip_frequency_eth_2282 begin, chip-%d set %f",
    (unsigned __int8)a3,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_single_chip_frequency_eth_2282",
    34,
    1312,
    20,
    v8);
  sub_100980(a1, a2, 0, a3);
  return 0;
}
