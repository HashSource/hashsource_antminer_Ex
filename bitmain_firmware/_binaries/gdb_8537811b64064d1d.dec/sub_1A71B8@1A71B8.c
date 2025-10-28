int __fastcall sub_1A71B8(int a1)
{
  int v2; // r0
  int v3; // r5
  int *v5; // r0
  _BYTE v6[20]; // [sp+0h] [bp-14h] BYREF

  v2 = sub_B8974(a1);
  v3 = v2;
  if ( a1 )
  {
    sub_2568C4(v6);
    if ( !sub_2568FC(v6, a1, "w") )
      sub_258B2C("maintenance print architecture");
    sub_163F48(v3, (int)v6);
    return sub_25653C(v6);
  }
  else
  {
    v5 = (int *)sub_242FB4(v2);
    return sub_163F48(v3, *v5);
  }
}
