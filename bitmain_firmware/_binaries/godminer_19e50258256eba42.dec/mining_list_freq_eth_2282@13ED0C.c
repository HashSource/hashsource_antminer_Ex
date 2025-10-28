int __fastcall mining_list_freq_eth_2282(int a1)
{
  _BYTE v4[20]; // [sp+30h] [bp-1054h] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-54h] BYREF
  int v6; // [sp+104Ch] [bp-38h]
  _DWORD v7[7]; // [sp+1050h] [bp-34h] BYREF
  int v8; // [sp+106Ch] [bp-18h]
  unsigned __int16 i; // [sp+1076h] [bp-Eh]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "mining_list_freq_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "mining_list_freq_eth_2282",
    25,
    10113,
    40,
    v4);
  if ( dram_init_eth_2282(a1) )
    return 40;
  if ( dag_gen_eth_2282(a1) )
    return 46;
  for ( i = 100; i <= 0x258u; i += 100 )
  {
    set_frequency_eth_2282(a1, 1);
    usleep(0x493E0u);
    set_frequency_eth_2282(a1, 0);
    usleep(0x493E0u);
    V_LOCK();
    sub_FBD60((int)v7, *(int *)(a1 + 272));
    logfmt_raw(v4, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "outline mining start at %u", i);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "mining_list_freq_eth_2282",
      25,
      10128,
      40,
      v4);
    outline_mining_eth_2282(a1);
  }
  return 0;
}
