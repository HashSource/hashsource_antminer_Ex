int __fastcall softreset_all_chip_dcr(int a1)
{
  sub_ECFDC(a1);
  usleep((__useconds_t)&stru_186A0);
  sub_F69B4(a1, 8, 0);
  sub_ED4CC(a1, 0xFFu);
  return 0;
}
