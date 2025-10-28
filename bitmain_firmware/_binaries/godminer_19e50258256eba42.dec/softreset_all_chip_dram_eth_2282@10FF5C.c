int __fastcall softreset_all_chip_dram_eth_2282(int a1)
{
  sub_106D34(a1, 68, 190);
  usleep(0x2710u);
  sub_106D34(a1, 2, 255);
  usleep(0x2710u);
  return 0;
}
