int __fastcall sub_2308BC(int a1)
{
  _DWORD *v1; // r0

  v1 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_23E758)(*(_DWORD *)(a1 + 12));
  if ( v1 )
  {
    sub_23FA18(v1[2], v1[3], v1[4]);
    if ( sub_22EBE4() )
      off_489A5C();
    else
      sub_230870(0);
  }
  return 0;
}
