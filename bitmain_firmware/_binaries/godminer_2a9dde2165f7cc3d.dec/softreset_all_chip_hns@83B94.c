int __fastcall softreset_all_chip_hns(_DWORD *a1)
{
  sub_7F6A0((int)a1);
  usleep(0x3E8u);
  sub_7F360((int)a1, 8, 0);
  usleep(0x64u);
  sub_7F360((int)a1, 16, 0);
  usleep(0x64u);
  set_nonce_cycle_limit((int)a1);
  usleep(0x64u);
  sub_7F7CC(a1, 255);
  usleep(0x64u);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
