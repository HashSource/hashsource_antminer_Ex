_DWORD *__fastcall json_string_nocheck(char *a1)
{
  size_t v2; // r0

  if ( !a1 )
    return 0;
  v2 = strlen(a1);
  return sub_55FA0(a1, v2, 0);
}
