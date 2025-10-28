int __fastcall softreset_all_chip_dash(_DWORD *a1)
{
  sub_5F8D8((int)a1);
  usleep((__useconds_t)&stru_186A0);
  sub_5F800((int)a1, 8, 0);
  sub_5F800((int)a1, 1, 4);
  sub_5FA18(a1, 255);
  return 0;
}
