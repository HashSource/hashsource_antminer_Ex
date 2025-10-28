int __fastcall dhash_mining_stop_base(int a1)
{
  (*(void (**)(void))(a1 + 4))();
  *(_BYTE *)(a1 + 217) = 0;
  *(_BYTE *)(a1 + 218) = 0;
  return 0;
}
