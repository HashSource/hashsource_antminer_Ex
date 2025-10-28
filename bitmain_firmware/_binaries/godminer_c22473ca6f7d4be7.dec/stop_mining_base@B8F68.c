int __fastcall stop_mining_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0

  v2 = (*(int (**)(void))(a1 + 48))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[9])(*(_DWORD *)(a1 + 136));
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  return 0;
}
