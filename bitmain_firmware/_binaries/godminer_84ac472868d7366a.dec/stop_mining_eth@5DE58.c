int __fastcall stop_mining_eth(int a1)
{
  int v2; // r0
  int v3; // r0
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (*(int (**)(void))(a1 + 48))();
  v3 = dev_ctrl(v2);
  (*(void (__fastcall **)(_DWORD))(v3 + 36))(*(_DWORD *)(a1 + 136));
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  set_ticketmask(a1, 63);
  v6[2] = 5373953;
  v6[0] = 9;
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  v6[1] = 0;
  v6[3] = 0;
  v4(a1, v6);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_5C248(a1, 12, 2);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
