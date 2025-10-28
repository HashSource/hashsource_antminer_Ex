int __fastcall sub_170E04(int a1, int a2, char *s)
{
  size_t v6; // r0
  int result; // r0
  char vars0[24]; // [sp+8h] [bp-14h] BYREF

  v6 = strlen(s);
  strcpy(vars0, "signed ");
  memcpy(&vars0[7], s, v6 + 1);
  result = sub_170D00(a1, a2, vars0, 0, 1);
  if ( !result )
    return sub_170D00(a1, a2, s, 0, 0);
  return result;
}
