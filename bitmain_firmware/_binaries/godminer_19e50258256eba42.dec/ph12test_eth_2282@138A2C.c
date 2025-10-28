int ph12test_eth_2282()
{
  int v1[3072]; // [sp+0h] [bp-3004h] BYREF

  memset(v1, 0, sizeof(v1));
  ltc_phy_12_test();
  get_all_phy12_test_data(v1);
  return 0;
}
