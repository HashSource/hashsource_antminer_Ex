const char *__fastcall json_string_nocheck(const char *result)
{
  char *v1; // r4
  size_t v2; // r0

  if ( result )
  {
    v1 = (char *)result;
    v2 = strlen(result);
    return (const char *)sub_38874(v1, v2, 0);
  }
  return result;
}
