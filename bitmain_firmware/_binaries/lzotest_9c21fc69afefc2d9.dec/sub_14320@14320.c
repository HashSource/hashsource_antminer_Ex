bool __fastcall sub_14320(const char *a1, char *s)
{
  size_t v4; // r5
  _BOOL4 v5; // r0

  v4 = strlen(s);
  if ( strncmp(a1, s, v4) )
    return 1;
  v5 = a1[v4] == 44;
  if ( !a1[v4] )
    v5 = 1;
  return !v5;
}
