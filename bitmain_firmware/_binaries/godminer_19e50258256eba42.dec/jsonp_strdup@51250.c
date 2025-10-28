char *__cdecl jsonp_strdup(const char *str)
{
  size_t v1; // r0

  v1 = strlen(str);
  return jsonp_strndup(str, v1);
}
