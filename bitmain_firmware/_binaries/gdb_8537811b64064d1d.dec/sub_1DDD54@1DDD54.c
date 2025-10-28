int __fastcall sub_1DDD54(int a1, int a2)
{
  int result; // r0
  int v5; // r3

  result = ((int (*)(void))loc_1DD968)();
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = ((int (__fastcall *)(int, int))loc_1DD85C)(a1, a2);
    if ( !result )
    {
      result = sub_2322DC(a1, a2);
      v5 = *(_DWORD *)(a1 + 12);
      if ( !*(_BYTE *)(v5 + a2) )
        *(_BYTE *)(v5 + a2) = -1;
    }
  }
  return result;
}
