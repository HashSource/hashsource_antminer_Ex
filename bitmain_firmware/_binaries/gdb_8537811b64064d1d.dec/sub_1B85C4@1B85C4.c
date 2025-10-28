const char *__fastcall sub_1B85C4(int a1, const char *a2)
{
  const char *result; // r0

  result = (const char *)((int (*)(void))loc_1B7CA0)();
  if ( result )
  {
    result = **(const char ***)result;
    if ( result )
      return (const char *)(strcmp(result, a2) == 0);
  }
  return result;
}
