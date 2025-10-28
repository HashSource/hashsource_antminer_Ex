int __fastcall sub_26EA08(int a1)
{
  _DWORD *v2; // r5
  int result; // r0
  int v4; // r0

  v2 = (_DWORD *)sub_171280(*(_DWORD **)(a1 + 64));
  result = sub_173748(v2);
  if ( result )
  {
    v4 = sub_26E9A0((_DWORD *)a1);
    result = ((int (__fastcall *)(int, _DWORD *))loc_252424)(v4, v2);
    if ( !result )
      sub_94708("Invalid floating value found in program.");
  }
  return result;
}
