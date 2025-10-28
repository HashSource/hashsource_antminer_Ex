char *__cdecl jsonp_strndup(const char *str, size_t len)
{
  void *dest; // [sp+Ch] [bp-8h]

  dest = jsonp_malloc(len + 1);
  if ( !dest )
    return 0;
  memcpy(dest, str, len);
  *((_BYTE *)dest + len) = 0;
  return (char *)dest;
}
