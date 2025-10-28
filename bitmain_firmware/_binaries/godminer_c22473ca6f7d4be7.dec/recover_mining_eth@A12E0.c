int __fastcall recover_mining_eth(int a1)
{
  int v2; // r3

  set_core_reset(*(_DWORD *)a1);
  setup_ref_clk_termination(*(_DWORD *)a1);
  get_special_core_reg(*(_DWORD *)a1);
  set_safe_mode(*(_DWORD *)a1, 42);
  disable_mac(*(_DWORD *)a1);
  set_logic_core_id(*(_DWORD *)a1);
  setup_mac_lane_cross(*(_DWORD *)a1);
  phy_power_reset(*(_DWORD *)a1);
  setup_serdes_phy(*(_DWORD *)a1);
  set_dag_node_num(*(_DWORD *)a1, *(__int64 *)(a1 + 8) >> 6);
  set_start_delay(*(_DWORD *)a1, (int)&word_10012);
  set_reset_to_normal(*(_DWORD *)a1, 2);
  reverse_start_nonce(*(_DWORD *)a1, 0);
  set_data_preemptive(*(_DWORD *)a1, 1);
  set_nonce_num(*(_DWORD *)a1, 0);
  setup_mac(*(_DWORD *)a1);
  open_core_clk(*(_DWORD *)a1);
  set_work_mode(*(_DWORD *)a1, 0);
  set_work_timeout(*(_DWORD *)a1, 1);
  sub_5DB80(*(_DWORD *)a1);
  set_core_bus_reset(*(_DWORD *)a1);
  setup_count_sync(*(_DWORD *)a1, 255);
  set_ticketmask(*(_DWORD *)a1, 63);
  open_cores_by_work_num(*(_DWORD *)a1);
  set_ticketmask(*(_DWORD *)a1, 29);
  v2 = *(_DWORD *)a1;
  *(_BYTE *)(v2 + 145) = 1;
  *(_BYTE *)(v2 + 146) = 1;
  return 0;
}
