int __fastcall sub_8AA4C(int a1, int a2)
{
  const char *v2; // r2

  v2 = "token";
  if ( a2 > 52 )
    v2 = "nterm";
  sub_1C4D68(a1, "%s %s (", v2, (&off_36B768)[a2 + 47]);
  return sub_1C4D68(a1, ")");
}
