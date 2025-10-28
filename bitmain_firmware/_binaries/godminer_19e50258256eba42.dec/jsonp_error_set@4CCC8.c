int jsonp_error_set(int a1, int a2, int a3, int a4, char a5, char *format, ...)
{
  va_list va; // [sp+38h] [bp+Ch] BYREF

  va_start(va, format);
  return jsonp_error_vset(a1, a2, a3, a4, a5, format, va);
}
