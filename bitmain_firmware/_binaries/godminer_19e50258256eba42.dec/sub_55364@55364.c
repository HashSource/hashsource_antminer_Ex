char *__fastcall sub_55364(json_t *a1)
{
  json_t *v2; // r0
  const json_t *v5; // [sp+8h] [bp-14h]
  const char *v6; // [sp+Ch] [bp-10h]
  char *v7; // [sp+10h] [bp-Ch]
  void *i; // [sp+14h] [bp-8h]

  v7 = json_object();
  if ( !v7 )
    return 0;
  for ( i = json_object_iter(a1); i; i = json_object_iter_next(a1, i) )
  {
    v6 = json_object_iter_key(i);
    v5 = (const json_t *)json_object_iter_value(i);
    v2 = (json_t *)json_deep_copy(v5);
    json_object_set_new_nocheck((json_t *)v7, v6, v2);
  }
  return v7;
}
