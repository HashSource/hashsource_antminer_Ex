const char *__fastcall sub_A3160(int a1)
{
  const char *result; // r0

  result = *(const char **)(*(_DWORD *)(a1 + 24) + 8);
  if ( result )
    return (const char *)(strcmp(result, "system__address") == 0);
  return result;
}
