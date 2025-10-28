int __fastcall recover_mining_rvn(int a1)
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
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "recover_mining_rvn",
    18,
    1934,
    60,
    v8);
  get_chip_dag_packet_num_rvn(a1);
  v9 = 1310720;
  v8[0] = 272381185;
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 240);
  v10 = 0;
  v8[1] = 0;
  LOBYTE(v9) = 1;
  v3(a1, v8);
  usleep((__useconds_t)&stru_1869C.st_value);
  disable_mac_rvn(a1);
  release_all_phy_rvn(a1);
  reset_all_phy_rvn(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 224));
  if ( eeprom_phy_seq_level > 0xA )
  {
    V_LOCK(eeprom_phy_seq_level);
    V_INT((int)v7, "chain");
    v6 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      174,
      "recover_mining_rvn",
      18,
      1949,
      60,
      v8);
    return 31;
  }
  else
  {
    setup_serdes_phy_rvn(a1, eeprom_phy_seq_level);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 2);
    setup_count_sync_rvn(a1, 0xFFu);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 0);
    *(_BYTE *)(a1 + 229) = 1;
    *(_BYTE *)(a1 + 230) = 1;
    return 0;
  }
}
