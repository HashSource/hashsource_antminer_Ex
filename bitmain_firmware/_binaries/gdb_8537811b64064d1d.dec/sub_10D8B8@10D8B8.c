int __fastcall sub_10D8B8(int a1)
{
  int *v3; // r0
  _BYTE v4[16]; // [sp+0h] [bp-10h] BYREF

  if ( a1 )
  {
    sub_2568C4(v4);
    if ( !sub_2568FC(v4, a1, "w") )
      sub_258B2C("maintenance print dummy-frames");
    sub_10D1C4((int)v4);
    return sub_25653C(v4);
  }
  else
  {
    v3 = (int *)sub_242FB4(0);
    return sub_10D1C4(*v3);
  }
}
