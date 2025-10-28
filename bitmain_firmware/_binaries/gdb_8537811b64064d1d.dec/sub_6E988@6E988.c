int __fastcall sub_6E988(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r6

  v2 = *(_DWORD *)(a1 + 56);
  if ( sub_98FA0(&dword_4878EC, &dword_475848) )
    sub_94708("No inferior running");
  result = sub_6E8C0(a1);
  if ( result )
  {
    v4 = *(_DWORD **)(a1 + 72);
    v5 = *(_DWORD **)(a1 + 76);
    if ( v4 == v5 )
      sub_94708("Probe %s:%s cannot be disabled: no enablers.", *(const char **)(a1 + 28), *(const char **)(a1 + 4));
    do
    {
      result = ((int (__fastcall *)(int))loc_16D7A4)(v2);
      if ( result )
        result = ((int (__fastcall *)(int, _DWORD))loc_16D7F0)(v2, *v4);
      ++v4;
    }
    while ( v5 != v4 );
  }
  return result;
}
