const char *__fastcall json_string(const char *result)
{
  char *v1; // r4
  size_t v2; // r0

  if ( result )
  {
    v1 = (char *)result;
    v2 = strlen(result);
    return (const char *)json_stringn(v1, v2);
  }
  return result;
}
