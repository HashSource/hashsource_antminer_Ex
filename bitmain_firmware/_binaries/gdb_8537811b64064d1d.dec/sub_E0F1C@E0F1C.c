int __fastcall sub_E0F1C(int *a1, int *a2, int a3)
{
  int v6; // r3

  if ( a1[4] )
    sub_E0DB0(a1, "updating caller");
  v6 = a2[10];
  a1[12] = a3;
  a1[4] = v6;
  sub_E0DB0(a1, "set caller");
  return sub_E0DB0(a2, "..to");
}
