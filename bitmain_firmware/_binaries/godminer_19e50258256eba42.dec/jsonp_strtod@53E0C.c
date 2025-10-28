int __fastcall jsonp_strtod(strbuffer_t *a1, double *a2)
{
  double v2; // d0
  char *endptr; // [sp+Ch] [bp-10h] BYREF
  double v8; // [sp+10h] [bp-Ch]

  to_locale(a1);
  *_errno_location() = 0;
  strtod(*(const char **)a1, &endptr);
  v8 = v2;
  if ( (v2 > 1.79769313e308 || v8 < -1.79769313e308) && *_errno_location() == 34 )
    return -1;
  *a2 = v8;
  return 0;
}
