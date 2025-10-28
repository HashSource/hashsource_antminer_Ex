int __fastcall softreset_all_chip_hns(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[4]; // [sp+0h] [bp-14h] BYREF

  v4[0] = -1414856447;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 164);
  v4[1] = 0;
  v4[2] = 16515073;
  v4[3] = 0;
  v2(a1, v4);
  sleep(7u);
  sub_A4F5C(a1);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
