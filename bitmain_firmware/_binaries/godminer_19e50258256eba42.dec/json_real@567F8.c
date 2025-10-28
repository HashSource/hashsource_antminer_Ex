json_t *__cdecl json_real(double value)
{
  double v1; // d0
  double *v4; // [sp+Ch] [bp-8h]

  if ( fabs(v1) > 1.79769313e308 )
    return 0;
  v4 = (double *)jsonp_malloc(0x10u);
  if ( !v4 )
    return 0;
  json_init(v4, 4);
  v4[1] = v1;
  return (json_t *)v4;
}
