int __fastcall sub_25DD2C(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  int v3; // r5
  int v4; // r1

  v1 = sub_26EA4C(a1);
  v2 = (_DWORD *)sub_26BC98(v1);
  v3 = sub_171280(v2);
  if ( !sub_173704((_DWORD *)v3) && !sub_26EA08(v1) && (**(_DWORD **)(v3 + 24) & 0x100FF) != 0x10002 )
    sub_94708("Argument to positive operation not a number.");
  v4 = sub_26E9A0(v1);
  return sub_26DD00(v3, v4);
}
