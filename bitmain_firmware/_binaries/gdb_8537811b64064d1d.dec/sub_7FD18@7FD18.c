int __fastcall sub_7FD18(int a1, int a2)
{
  const char *v2; // r2

  v2 = "nterm";
  if ( a2 <= 70 )
    v2 = "token";
  sub_1C4D68(a1, "%s %s (", v2, (&off_367184)[a2]);
  return sub_1C4D68(a1, ")");
}
