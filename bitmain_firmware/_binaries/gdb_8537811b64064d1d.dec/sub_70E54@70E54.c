int __fastcall sub_70E54(int a1, int a2)
{
  const char *v2; // r2

  v2 = "token";
  if ( a2 > 68 )
    v2 = "nterm";
  sub_1C4D68(a1, "%s %s (", v2, *(_DWORD *)&byte_36022C[4 * a2 - 1244]);
  return sub_1C4D68(a1, ")");
}
