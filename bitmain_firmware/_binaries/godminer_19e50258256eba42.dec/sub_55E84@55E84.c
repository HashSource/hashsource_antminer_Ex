json_t *__fastcall sub_55E84(const json_t *a1)
{
  json_t *v2; // r0
  json_t *v5; // [sp+8h] [bp-Ch]
  size_t i; // [sp+Ch] [bp-8h]

  v5 = (json_t *)json_array();
  if ( !v5 )
    return 0;
  for ( i = 0; i < json_array_size(a1); ++i )
  {
    v2 = json_array_get(a1, i);
    json_array_append(v5, v2);
  }
  return v5;
}
