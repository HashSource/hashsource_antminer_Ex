char *__fastcall sub_654E4(const json_t *a1, size_t a2)
{
  char *s; // [sp+Ch] [bp-8h]

  s = (char *)sub_6541C(a1, a2);
  if ( s )
    return strdup(s);
  else
    return 0;
}
