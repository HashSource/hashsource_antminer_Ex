int __fastcall prepare_for_pcba_test_eth_2282(int a1)
{
  _BYTE v4[8]; // [sp+1Ch] [bp-1008h] BYREF
  void *ptr; // [sp+101Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s ...", "prepare_for_pcba_test_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "prepare_for_pcba_test_eth_2282",
    30,
    9192,
    60,
    v4);
  printf("%s: start to do prepare for pcba test\n", "prepare_for_pcba_test_eth_2282");
  ptr = malloc(0x1440u);
  case_select = 99;
  if ( dag_gen_eth_2282(a1) )
    return 46;
  sub_106D34(a1, 0, 0);
  sub_106D34(a1, 28, 0);
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 9, 458781);
  sub_106D34(a1, 26, 20);
  sub_106D34(a1, 27, 9175037);
  *(_BYTE *)(a1 + 278) = 1;
  *(_BYTE *)(a1 + 279) = 1;
  printf("%s: do prepare finished\n", "prepare_for_pcba_test_eth_2282");
  if ( ptr )
    free(ptr);
  return 0;
}
