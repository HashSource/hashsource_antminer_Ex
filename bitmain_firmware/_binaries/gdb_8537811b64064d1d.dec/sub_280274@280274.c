int __fastcall sub_280274(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_292720();
  if ( a1 )
  {
    v3 = a1 - 1;
    do
    {
      --v3;
      v2 = sub_294F64(dword_48AB10);
    }
    while ( v3 != -1 );
  }
  return sub_292770(v2);
}
