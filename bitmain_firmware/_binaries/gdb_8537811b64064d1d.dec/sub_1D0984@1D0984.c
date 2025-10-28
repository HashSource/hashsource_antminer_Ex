_DWORD *__fastcall sub_1D0984(_DWORD *a1, int (__fastcall *a2)(_DWORD), int a3, int a4)
{
  _DWORD *result; // r0
  int i; // r4

  result = sub_1D08A0(a1, 1);
  for ( i = result[6]; i; i = *(_DWORD *)i )
  {
    if ( !*(_BYTE *)(i + 52) && !*(_DWORD *)(i + 24) && !*(_BYTE *)(i + 54) )
    {
      sub_258BFC(result);
      if ( a4 )
        sub_1CE11C(i);
      result = (_DWORD *)a2(*(_DWORD *)(i + 4));
    }
  }
  return result;
}
