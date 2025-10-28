int __fastcall sub_EEADC(int a1, int a2, int a3, char *s1)
{
  int v6; // r0
  int v7; // r2

  if ( strcmp(s1, "auto") )
    return sub_25A440(a1, "The target character set is \"%s\".\n", s1);
  v6 = sub_B8974(0);
  v7 = ((int (__fastcall *)(int))loc_16DBE0)(v6);
  return sub_25A440(a1, "The target character set is \"auto; currently %s\".\n", v7);
}
