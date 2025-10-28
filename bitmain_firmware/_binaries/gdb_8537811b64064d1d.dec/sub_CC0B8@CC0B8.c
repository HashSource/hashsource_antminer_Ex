int __fastcall sub_CC0B8(int a1)
{
  int v2; // r4
  void (*v4)(void); // r6

  v2 = sub_C9614((_DWORD *)a1);
  if ( !v2 )
  {
    v4 = *(void (**)(void))(**(_DWORD **)(a1 + 76) + 28);
    if ( v4 != nullsub_7 )
      v4();
  }
  return v2;
}
