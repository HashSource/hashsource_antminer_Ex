int __fastcall softreset_all_chip_dash(_DWORD *a1)
{
  sub_66104((int)a1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_65DF0((int)a1, 8, 0);
  sub_65DF0((int)a1, 1, 4);
  sub_66244(a1, 255);
  return 0;
}
