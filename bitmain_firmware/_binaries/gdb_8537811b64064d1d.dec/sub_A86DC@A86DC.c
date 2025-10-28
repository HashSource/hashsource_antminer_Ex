int __fastcall sub_A86DC(int a1)
{
  int v1; // r4
  bool v2; // zf
  int result; // r0

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_DWORD *)(a1 + 24) + 2) & 8) == 0 )
    v1 = sub_A2920(a1);
  v2 = !sub_A0D24(v1);
  result = v1;
  if ( !v2 )
    return sub_A86A0(v1);
  return result;
}
