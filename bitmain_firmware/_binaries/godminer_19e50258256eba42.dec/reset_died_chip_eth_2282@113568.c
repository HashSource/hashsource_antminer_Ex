int __fastcall reset_died_chip_eth_2282(int a1, int a2)
{
  int (**v2)(); // r0
  _BYTE v6[12]; // [sp+38h] [bp-104Ch] BYREF
  _DWORD v7[7]; // [sp+1038h] [bp-4Ch] BYREF
  int v8; // [sp+1054h] [bp-30h]
  _DWORD v9[7]; // [sp+1058h] [bp-2Ch] BYREF
  int v10; // [sp+1074h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "chip-%d %s...",
    a2,
    "reset_died_chip_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reset_died_chip_eth_2282",
    24,
    2051,
    60,
    v6);
  chain_reset(*(_DWORD *)(a1 + 264));
  sub_106F8C(a1, a2, 15, 3);
  set_single_chip_reset_eth_2282(a1, a2, 2, 254);
  usleep(0x64u);
  set_single_chip_reset_eth_2282(a1, a2, 2, 255);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[14])(*(_DWORD *)(a1 + 264));
  single_chip_init_eth_2282(a1, a2);
  set_single_chip_reset_eth_2282(a1, a2, 2, 190);
  usleep(0x64u);
  set_single_chip_reset_eth_2282(a1, a2, 2, 255);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  single_chip_dram_init_eth_2282(a1, a2);
  single_chip_dag_gen_eth_2282(a1, a2);
  single_chip_net_mining_eth_2282(a1, a2);
  sleep(1u);
  sub_106F8C(a1, a2, 192, 3872);
  V_LOCK();
  sub_FBD60((int)v9, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
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
    "chip-%d close dram_refresh_eth_2282",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reset_died_chip_eth_2282",
    24,
    2074,
    40,
    v6);
  return 0;
}
