int __fastcall prepare_for_pcba_test_base(int a1, unsigned int *a2)
{
  int v2; // r6
  const char *v4; // r0
  int v5; // r5
  int v6; // r3
  void (__fastcall *v7)(int, _DWORD, int); // r3
  const char *v8; // r0
  const char *v10; // r0

  v2 = *a2;
  if ( *a2 > 4 )
  {
    LOWORD(v10) = -21840;
    HIWORD(v10) = (unsigned int)"[MAC STATS]chip %02x core %02x addr %04x, %08x" >> 16;
    printf(v10, "prepare_for_pcba_test_base");
    return 6;
  }
  else
  {
    LOWORD(v4) = -21796;
    HIWORD(v4) = (unsigned int)"8x" >> 16;
    printf(v4, "prepare_for_pcba_test_base");
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 296) - 1;
    do
      *(_BYTE *)++v6 = v5++;
    while ( v5 != 8 );
    v7 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 148);
    *(_DWORD *)(a1 + 240) = 1;
    v7(a1, *(_DWORD *)(a1 + 296), 8);
    sub_5CAEC(a1, 8);
    setup_clk(a1);
    set_debug_ctrl(a1, 19);
    get_special_core_reg(a1);
    set_safe_mode(a1, 42);
    disable_mac(a1);
    set_logic_core_id(a1);
    setup_mac_lane_cross(a1);
    phy_power_reset(a1);
    if ( v2 )
    {
      if ( v2 != 4 )
        setup_serdes_phy(a1);
    }
    membist1(a1);
    set_dag_node_num(a1, 100663198);
    set_start_delay(a1, (int)&word_10012);
    set_reset_to_normal(a1, 2);
    reverse_start_nonce(a1, 0);
    set_data_preemptive(a1, 1);
    set_nonce_num(a1, 0);
    setup_mac(a1);
    open_core_clk(a1);
    set_work_mode(a1, 0);
    set_work_timeout(a1, 1);
    sub_5DB80(a1);
    set_core_bus_reset(a1);
    setup_count_sync(a1, 255);
    set_ticketmask(a1, 63);
    open_cores_by_work_num(a1);
    set_ticketmask(a1, 29);
    LOWORD(v8) = -21756;
    *(_BYTE *)(a1 + 145) = 1;
    HIWORD(v8) = (unsigned int)"%02x" >> 16;
    *(_BYTE *)(a1 + 146) = 1;
    printf(v8, "prepare_for_pcba_test_base");
    return 0;
  }
}
