int __fastcall sub_AAFBC(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r0
  _BOOL4 v5; // r1

  v1 = sub_AAEBC(a1);
  v2 = sub_26BC98(v1);
  v3 = ((int (__fastcall *)(int))loc_26C0C4)(v1);
  v4 = sub_A9F10(v2, 0, v3, 0, 1);
  v5 = v2 == v4;
  if ( !v1 )
    v5 = 0;
  if ( v5 )
    return v1;
  else
    return sub_26DD58(v4, 0, v3);
}
