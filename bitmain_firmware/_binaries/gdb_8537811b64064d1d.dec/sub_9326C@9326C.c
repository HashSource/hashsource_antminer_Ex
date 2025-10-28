char **__fastcall sub_9326C(char **a1, char *format, __gnuc_va_list arg)
{
  size_t v6; // r0

  v6 = vsnprintf(0, 0, format, arg);
  *a1 = (char *)(a1 + 2);
  sub_33B340((int)a1, v6, 0);
  vsprintf(*a1, format, arg);
  return a1;
}
