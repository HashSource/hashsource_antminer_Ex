int __fastcall prepare_for_pcba_test_rvn(int a1, unsigned int *a2)
{
  _BYTE v6[8]; // [sp+1Ch] [bp-1008h] BYREF
  unsigned int v7; // [sp+101Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, "%s ...", "prepare_for_pcba_test_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "prepare_for_pcba_test_rvn",
    25,
    2487,
    60,
    v6);
  v7 = *a2;
  if ( v7 <= 0xA )
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_rvn");
    membist1_rvn(a1);
    stop_mining_rvn(a1);
    sub_1B47A0(a1, 20, 272381185);
    usleep((__useconds_t)&stru_186A0);
    disable_mac_rvn(a1);
    release_all_phy_rvn(a1);
    reset_all_phy_rvn(a1);
    setup_serdes_phy_rvn(a1, v7);
    enable_work_rvn(a1, 0x80000000);
    set_work_mode_rvn(a1, 0);
    setup_count_sync_rvn(a1, 255);
    set_logic_core_id_rvn(a1);
    set_logic_chip_id_rvn(a1);
    setup_mac_rvn(a1);
    set_dag_node_num_rvn(a1, 117440506);
    set_ticketmask_rvn(a1, 9);
    open_cores_rvn(a1);
    set_work_num_rvn(a1, 64);
    set_work_timeout_rvn(a1, 1);
    set_nonce_num_rvn(a1, 127);
    *(_BYTE *)(a1 + 278) = 1;
    *(_BYTE *)(a1 + 279) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_rvn");
    return 0;
  }
  else
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_rvn");
    return 15;
  }
}
