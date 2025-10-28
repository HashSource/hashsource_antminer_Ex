int __fastcall sub_14D6B4(int a1, int a2, int a3)
{
  int v3; // r0
  int v5; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  if ( a1 == 2 )
  {
    v5 = sub_1C3974(a3, a2, 0);
    return sub_260DE4(v5);
  }
  else
  {
    v3 = sub_1C3974(a3, a2, &v6);
    return sub_260FAC(v3, v6);
  }
}
