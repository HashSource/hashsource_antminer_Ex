int __fastcall sub_13954(int a1, int a2, int a3, int a4)
{
  void (*v4)(void); // r3

  v4 = *(void (**)(void))(a1 + 16);
  if ( v4 )
    v4();
  ++*(_DWORD *)(a1 + 28);
  return a2;
}
