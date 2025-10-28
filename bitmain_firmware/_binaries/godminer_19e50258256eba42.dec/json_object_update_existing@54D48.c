int __fastcall json_object_update_existing(json_t *a1, json_t *a2)
{
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  json_t *v10; // [sp+8h] [bp-Ch]
  const char *i; // [sp+Ch] [bp-8h]

  if ( !a1 || *(_DWORD *)a1 || !a2 || *(_DWORD *)a2 )
    return -1;
  v3 = json_object_iter(a2);
  for ( i = json_object_iter_key(v3); i; i = json_object_iter_key(v5) )
  {
    v6 = json_object_key_to_iter(i);
    v10 = (json_t *)json_object_iter_value(v6);
    if ( !v10 )
      break;
    if ( json_object_get(a1, i) )
      json_object_set_nocheck(a1, i, v10);
    v4 = json_object_key_to_iter(i);
    v5 = json_object_iter_next(a2, v4);
  }
  return 0;
}
