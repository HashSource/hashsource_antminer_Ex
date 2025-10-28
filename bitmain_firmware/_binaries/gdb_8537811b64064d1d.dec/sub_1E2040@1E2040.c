int __fastcall sub_1E2040(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v7; // r4

  v2 = sub_23FA18(a1[2], a1[3], a1[4]);
  v3 = sub_15F734(v2);
  dword_4878F8 = sub_15DE24(v3);
  v4 = sub_15F734(dword_4878F8);
  sub_20DB44(v4);
  v5 = a1[38];
  a1[42] = 0;
  if ( v5 == 1 )
  {
    v7 = a1[39];
    if ( sub_188FEC(v7) )
      sub_1B8D08(v7);
  }
  return sub_1B8C48(0, 1);
}
