int __fastcall reset_died_chain_eth_2282(int a1)
{
  int v1; // r3
  _BYTE v4[44]; // [sp+30h] [bp-102Ch] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-2Ch] BYREF
  int v6; // [sp+104Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(
    v4,
    0x1000u,
    0,
    v6,
    v5[0],
    v5[1],
    v5[2],
    v5[3],
    v5[4],
    v5[5],
    v5[6],
    v6,
    "%s...",
    "reset_died_chain_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reset_died_chain_eth_2282",
    25,
    2166,
    60,
    v4);
  v1 = (unsigned __int8)no_connection_with_pool;
  if ( !no_connection_with_pool )
  {
    stop_mining_eth_2282(a1);
    chain_reset(*(_DWORD *)(a1 + 264));
    freq_select = 100;
    chip_init_eth_2282(a1);
    dram_init_eth_2282(a1);
    dag_gen_eth_2282(a1);
    net_mining_start_eth_2282(a1);
    return 0;
  }
  return v1;
}
