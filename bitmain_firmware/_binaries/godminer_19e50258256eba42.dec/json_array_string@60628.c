char *__cdecl json_array_string(json_t *val, unsigned int entry)
{
  const char *s; // [sp+Ch] [bp-8h]

  s = _json_array_string(val, entry);
  if ( s )
    return strdup(s);
  else
    return 0;
}
