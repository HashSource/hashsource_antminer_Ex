int __fastcall recover_mining_rvn(int a1)
{
  _BYTE v4[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-34h] BYREF
  int v6; // [sp+104Ch] [bp-18h]
  unsigned int eeprom_phy_seq_level; // [sp+1054h] [bp-10h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s ...", "recover_mining_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "recover_mining_rvn",
    18,
    2170,
    60,
    v4);
  get_chip_dag_packet_num_rvn(a1);
  sub_1B47A0(a1, 20, 272381185);
  usleep((__useconds_t)&stru_186A0);
  disable_mac_rvn(a1);
  release_all_phy_rvn(a1);
  reset_all_phy_rvn(a1);
  eeprom_phy_seq_level = api_get_eeprom_phy_seq_level(*(_DWORD *)(a1 + 272));
  if ( eeprom_phy_seq_level <= 0xA )
  {
    setup_serdes_phy_rvn(a1, eeprom_phy_seq_level);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 2);
    setup_count_sync_rvn(a1, 255);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 0);
    *(_BYTE *)(a1 + 278) = 1;
    *(_BYTE *)(a1 + 279) = 1;
    return 0;
  }
  else
  {
    V_LOCK();
    sub_1A9DE8((int)v5, *(int *)(a1 + 272));
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
      "rvn phy seq level = P%d is invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "recover_mining_rvn",
      18,
      2185,
      60,
      v4);
    return 31;
  }
}
