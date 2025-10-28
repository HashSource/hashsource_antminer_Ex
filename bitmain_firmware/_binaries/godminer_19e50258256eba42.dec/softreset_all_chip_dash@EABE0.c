int __fastcall softreset_all_chip_dash(int a1)
{
  sub_DB934(a1);
  usleep((__useconds_t)&stru_186A0);
  sub_E5324(a1, 8, 0);
  sub_E5324(a1, 1, 4);
  sub_DBE24(a1, 0xFFu);
  return 0;
}
