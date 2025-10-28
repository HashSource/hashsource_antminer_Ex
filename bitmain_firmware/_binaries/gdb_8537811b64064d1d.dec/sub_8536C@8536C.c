int __fastcall sub_8536C(int a1, int a2)
{
  const char *v2; // r2

  v2 = "nterm";
  if ( a2 <= 67 )
    v2 = "token";
  sub_1C4D68(a1, "%s %s (", v2, (&off_369314)[a2]);
  return sub_1C4D68(a1, ")");
}
