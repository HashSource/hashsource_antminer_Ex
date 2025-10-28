int __fastcall sub_27064C(int a1)
{
  _DWORD *v1; // r0
  int v2; // r0

  if ( *(_DWORD *)(a1 + 80) )
    v1 = (_DWORD *)sub_26BC98(*(_DWORD *)(a1 + 80));
  else
    v1 = *(_DWORD **)(a1 + 76);
  v2 = sub_171280(v1);
  if ( (unsigned int)**(unsigned __int8 **)(v2 + 24) - 18 <= 1 )
    v2 = sub_1715C0(v2);
  return sub_171280((_DWORD *)v2);
}
