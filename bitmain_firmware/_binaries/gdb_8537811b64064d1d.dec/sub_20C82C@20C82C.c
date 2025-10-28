int __fastcall sub_20C82C(const char *a1, const char **a2, int *a3)
{
  int v6; // r2
  int result; // r0

  v6 = sub_15FEB4(*a3, a3[1], a3[2], a3[3], a3[4]);
  if ( !v6 )
    return sub_946D8("Unable to restore previously selected frame.");
  result = sub_1C7878(a1, a2, v6, a3[6], a3[5]);
  a3[7] = 1;
  return result;
}
