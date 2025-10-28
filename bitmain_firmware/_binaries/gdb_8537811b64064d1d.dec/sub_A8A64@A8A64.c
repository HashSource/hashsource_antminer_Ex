int __fastcall sub_A8A64(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r1
  int result; // r0
  int v8; // r0
  bool v9; // zf

  v2 = sub_26BC98(a1);
  if ( sub_A0CBC(v2) )
  {
    v3 = sub_A83EC(a1, 1);
    if ( v3 )
    {
      v4 = sub_A1434(a1);
      v6 = sub_26C508(v4, v5);
      return sub_2647F0(v3, v6);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v8 = sub_26BC98(a1);
    v9 = !sub_A0D24(v8);
    result = a1;
    if ( !v9 )
      return sub_A893C();
  }
  return result;
}
