int __fastcall softreset_all_chip_core_eth_2282(int a1)
{
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 68, 254);
  usleep(0x2710u);
  sub_106D34(a1, 2, 255);
  usleep(0x2710u);
  sub_106D34(a1, 15, 3);
  return 0;
}
