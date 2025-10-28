char *__fastcall sub_552A4(json_t *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  json_t *v8; // [sp+Ch] [bp-10h]
  char *v9; // [sp+10h] [bp-Ch]
  const char *i; // [sp+14h] [bp-8h]

  v9 = json_object();
  if ( !v9 )
    return 0;
  v2 = json_object_iter(a1);
  for ( i = json_object_iter_key(v2); i; i = json_object_iter_key(v4) )
  {
    v5 = json_object_key_to_iter(i);
    v8 = (json_t *)json_object_iter_value(v5);
    if ( !v8 )
      break;
    json_object_set_nocheck((json_t *)v9, i, v8);
    v3 = json_object_key_to_iter(i);
    v4 = json_object_iter_next(a1, v3);
  }
  return v9;
}
