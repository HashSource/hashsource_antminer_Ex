int __fastcall softreset_all_chip_ckb(int a1)
{
  sub_CB5AC(a1);
  usleep((__useconds_t)&stru_186A0);
  sub_D4F84(a1, 8, 0);
  sub_CBA9C(a1, 0xFFu);
  return 0;
}
