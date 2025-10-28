int __fastcall start_mining_base(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = (*(int (**)(void))(a1 + 48))();
  v3 = dev_ctrl(v2);
  (*(void (__fastcall **)(_DWORD))(v3 + 36))(*(_DWORD *)(a1 + 144));
  queue_clear(*(_DWORD *)(a1 + 664));
  *(_BYTE *)(a1 + 153) = 1;
  if ( (*(int (__fastcall **)(int))(a1 + 52))(a1) == 3 )
    return -3;
  *(_BYTE *)(a1 + 154) = 1;
  return 0;
}
