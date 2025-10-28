json_t *__fastcall json_vsprintf(const char *a1, void *a2)
{
  char *s; // [sp+Ch] [bp-10h]
  size_t v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v6 = vsnprintf(0, 0, a1, a2);
  if ( !v6 )
    return (json_t *)json_string(byte_35B86C);
  s = (char *)jsonp_malloc(v6 + 1);
  if ( s )
  {
    vsnprintf(s, v6 + 1, a1, a2);
    if ( utf8_check_string((int)s, v6) )
      return jsonp_stringn_nocheck_own(s, v6);
    else
      jsonp_free(s);
  }
  return (json_t *)v7;
}
