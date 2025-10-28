char *sub_5177C(int *a1, const char *a2, char a3, char *format, ...)
{
  va_list va; // [sp+38h] [bp+8h] BYREF

  va_start(va, format);
  jsonp_error_vset(a1[14], a1[6], a1[7], a1[8], a3, format, va);
  return jsonp_error_set_source((char *)a1[14], a2);
}
