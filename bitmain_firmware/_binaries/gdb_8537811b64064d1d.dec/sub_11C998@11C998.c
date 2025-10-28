void __fastcall sub_11C998(int a1)
{
  void *v1; // r3

  v1 = *(void **)(a1 + 164);
  if ( v1 )
  {
    free(v1);
    *(_DWORD *)(a1 + 164) = 0;
  }
}
