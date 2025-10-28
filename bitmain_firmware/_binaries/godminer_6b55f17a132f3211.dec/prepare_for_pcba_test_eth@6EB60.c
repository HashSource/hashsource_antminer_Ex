int __fastcall prepare_for_pcba_test_eth(int a1, int *a2)
{
  int v4; // r0
  int v5; // r9
  void (__fastcall *v6)(int, _DWORD *); // r3
  _DWORD v8[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "prepare_for_pcba_test_eth",
    25,
    1818,
    60,
    v8);
  v5 = *a2;
  if ( (unsigned int)*a2 > 0xA )
  {
    printf("%s: error! wrong PHY sequence parameter\n", "prepare_for_pcba_test_eth");
    return 15;
  }
  else
  {
    printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_eth");
    membist1(a1);
    stop_mining_eth(a1);
    v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 228);
    v8[0] = 272381185;
    v8[2] = 1310721;
    v8[1] = 0;
    v8[3] = 0;
    v6(a1, v8);
    usleep((__useconds_t)&stru_186A0);
    disable_mac(a1);
    release_all_phy(a1);
    reset_all_phy(a1);
    setup_serdes_phy(a1, v5);
    enable_work(a1, 0x80000000);
    set_work_mode(a1, 0);
    setup_count_sync(a1, 255);
    set_logic_core_id(a1);
    set_logic_chip_id(a1);
    setup_mac(a1);
    set_dag_node_num(a1, 117440506);
    set_ticketmask(a1, 32);
    open_cores(a1);
    set_work_num(a1, 64);
    set_work_timeout(a1, 1);
    set_nonce_num(a1, 127);
    *(_BYTE *)(a1 + 217) = 1;
    *(_BYTE *)(a1 + 218) = 1;
    printf("%s: do prepare finished\n", "prepare_for_pcba_test_eth");
    return 0;
  }
}
