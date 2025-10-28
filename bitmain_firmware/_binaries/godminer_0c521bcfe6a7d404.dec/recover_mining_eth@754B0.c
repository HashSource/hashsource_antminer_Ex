int __fastcall recover_mining_eth(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  int v6; // r0
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "recover_mining_eth",
    18,
    1661,
    60,
    v8);
  v9 = 1310720;
  v8[0] = 272381185;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  v8[1] = 0;
  v10 = 0;
  LOBYTE(v9) = 1;
  v3(a1, v8);
  usleep((__useconds_t)&stru_1869C.st_value);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 220));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK(eeprom_phy_seq_level);
    V_INT((int)v7, "chain");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      174,
      "recover_mining_eth",
      18,
      1676,
      60,
      v8);
    return 31;
  }
  else
  {
    setup_serdes_phy(a1, eeprom_phy_seq_level);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 956) >> 6);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 229) = 1;
    *(_BYTE *)(a1 + 230) = 1;
    return 0;
  }
}
