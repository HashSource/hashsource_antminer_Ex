int __fastcall sub_1D2F1C(char **a1)
{
  const char *v2; // r0
  int result; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v2 = (const char *)sub_93634(*a1);
  if ( (unsigned int)*(unsigned __int8 *)v2 - 48 > 9 )
    sub_94708("Expected positive number, got: %s.", v2);
  result = strtol(v2, &endptr, 10);
  *a1 = endptr;
  return result;
}
