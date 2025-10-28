int __fastcall sub_2615D0(int a1)
{
  bool v2; // zf
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r0

  v2 = !sub_26154C(a1);
  result = a1;
  if ( !v2 )
  {
    v4 = (_DWORD *)sub_26BC98(a1);
    v5 = *(_DWORD *)(sub_171280(v4) + 20);
    v6 = sub_261320(v5);
    v7 = sub_26EB44(v6);
    v8 = sub_26E9A0(a1);
    sub_FAB08(v7, v8, v5);
    v9 = (_DWORD *)sub_26BC98(a1);
    return sub_25F73C(v9, v7, 1);
  }
  return result;
}
