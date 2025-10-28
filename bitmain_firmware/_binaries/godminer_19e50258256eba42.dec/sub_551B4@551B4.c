int __fastcall sub_551B4(const json_t *a1, const json_t *a2)
{
  size_t v2; // r4
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  json_t *v11; // [sp+Ch] [bp-18h]
  const json_t *v12; // [sp+10h] [bp-14h]
  const char *i; // [sp+14h] [bp-10h]

  v2 = json_object_size(a1);
  if ( v2 != json_object_size(a2) )
    return 0;
  v4 = json_object_iter(a1);
  for ( i = json_object_iter_key(v4); i; i = json_object_iter_key(v6) )
  {
    v7 = json_object_key_to_iter(i);
    v12 = (const json_t *)json_object_iter_value(v7);
    if ( !v12 )
      break;
    v11 = json_object_get(a2, i);
    if ( !json_equal(v12, v11) )
      return 0;
    v5 = json_object_key_to_iter(i);
    v6 = json_object_iter_next(a1, v5);
  }
  return 1;
}
