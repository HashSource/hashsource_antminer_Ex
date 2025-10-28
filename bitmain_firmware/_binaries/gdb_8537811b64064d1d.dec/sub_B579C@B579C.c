int __fastcall sub_B579C(int *a1, int *a2)
{
  int v3; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  v3 = *a1;
  if ( v3 )
  {
    v5 = sub_AB034(v3);
    *a1 = v5;
    v6 = sub_26BC98(v5);
    result = sub_A0898(v6);
  }
  else
  {
    result = sub_A86DC(*a2);
  }
  *a2 = result;
  return result;
}
