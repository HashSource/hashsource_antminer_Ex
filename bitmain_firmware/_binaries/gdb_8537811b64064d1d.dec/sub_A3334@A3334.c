int __fastcall sub_A3334(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v10; // r0

  v4 = sub_A3210(a1);
  v5 = sub_26BC98(a2);
  if ( sub_9AAD8(v5) )
  {
    v6 = sub_26BC98(v4);
    v7 = sub_A32F0(v6, a2);
  }
  else
  {
    v10 = sub_26BC98(v4);
    v7 = sub_2647F0(v10, a2);
  }
  v8 = sub_25E514(v7, v4, 4);
  return sub_2647F0(a1, v8);
}
