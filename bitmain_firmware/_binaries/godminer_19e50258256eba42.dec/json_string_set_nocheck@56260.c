int __fastcall json_string_set_nocheck(int a1, const char *a2)
{
  size_t v3; // r0

  if ( !a2 )
    return -1;
  v3 = strlen(a2);
  return json_string_setn_nocheck(a1, a2, v3);
}
