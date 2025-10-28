int __fastcall net_mining_eth_2282(int a1)
{
  _BYTE v4[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-34h] BYREF
  int v6; // [sp+104Ch] [bp-18h]
  char v7; // [sp+1057h] [bp-Dh]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "net_mining_start_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "net_mining_eth_2282",
    19,
    10992,
    40,
    v4);
  v7 = 0;
  if ( dag_gen_eth_2282(a1) )
    return 46;
  net_mining_start_eth_2282(a1);
  return 0;
}
