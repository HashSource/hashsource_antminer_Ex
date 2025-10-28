int __fastcall softreset_all_chip_hns(int a1)
{
  sub_152BBC(a1);
  usleep(0x3E8u);
  sub_15C594(a1, 8, 0);
  usleep(0x64u);
  sub_15C594(a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit(a1);
  usleep(0x64u);
  sub_1530AC(a1, 0xFFu);
  usleep(0x64u);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
