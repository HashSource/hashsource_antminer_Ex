int __fastcall recover_mining_eth(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, _DWORD *); // r3
  unsigned int eeprom_phy_seq_level; // r0
  int v5; // r1
  int v7; // r0
  _BYTE v8[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v9[2]; // [sp+48h] [bp-1000h] BYREF
  int v10; // [sp+50h] [bp-FF8h]
  int v11; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "recover_mining_eth",
    18,
    1513,
    60,
    v9);
  get_chip_dag_packet_num(a1);
  v10 = 1310720;
  v9[0] = 272381185;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 228);
  v11 = 0;
  v9[1] = 0;
  LOBYTE(v10) = 1;
  v3(a1, v9);
  usleep((__useconds_t)&stru_186A0);
  disable_mac(a1);
  release_all_phy(a1);
  reset_all_phy(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 208));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK(eeprom_phy_seq_level);
    V_INT((int)v8, "chain");
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "recover_mining_eth",
      18,
      1528,
      60,
      v9);
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
    set_dag_node_num(a1, *(__int64 *)*(_DWORD *)(a1 + 948) >> 6);
    v5 = *(_DWORD *)(a1 + 392);
    if ( !v5 )
      v5 = 32;
    set_ticketmask(a1, v5);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 0);
    *(_BYTE *)(a1 + 217) = 1;
    *(_BYTE *)(a1 + 218) = 1;
    return 0;
  }
}
