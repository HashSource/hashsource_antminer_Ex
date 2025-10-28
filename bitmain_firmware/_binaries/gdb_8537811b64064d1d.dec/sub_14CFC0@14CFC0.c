int __fastcall sub_14CFC0(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int result; // r0

  v5 = sub_26EA4C(*a3);
  *a3 = v5;
  v6 = sub_26BC98(v5);
  v7 = sub_171280(v6);
  result = sub_173704(v7);
  if ( result )
  {
    result = *(_DWORD *)(sub_1780DC(a2) + 12);
    if ( *(_DWORD *)(v7 + 20) < *(_DWORD *)(result + 20) )
    {
      result = sub_2647F0(result, *a3);
      *a3 = result;
    }
  }
  return result;
}
