int __fastcall sub_251C3C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  bool v7; // zf
  _BYTE v10[40]; // [sp+4h] [bp-28h] BYREF

  v7 = a5 >> 31 == a6;
  if ( a5 >> 31 == a6 )
    v7 = 1;
  if ( !v7 )
    sub_94708("Conversion of large integer to a decimal floating type is not supported.");
  sub_329740(v10, a5);
  return sub_251B94((int)v10, a2, a3);
}
