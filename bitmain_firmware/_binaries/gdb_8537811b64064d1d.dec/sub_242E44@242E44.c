int __fastcall sub_242E44(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return 0;
  if ( ((int (__fastcall *)(int))loc_23E758)(v2) )
  {
    sub_23FA18();
    if ( sub_22EBE4() )
    {
      if ( *(_BYTE *)(a1 + 120) )
        sub_230870(*a2);
      else
        sub_22EF3C();
    }
  }
  return 0;
}
