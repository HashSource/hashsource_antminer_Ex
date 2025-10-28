char *json_object()
{
  char *v2; // [sp+4h] [bp-8h]

  v2 = (char *)jsonp_malloc(0x24u);
  if ( !v2 )
    return 0;
  if ( !hashtable_seed )
    json_object_seed(0);
  json_init(v2, 0);
  if ( !hashtable_init((hashtable_t *)(v2 + 8)) )
    return v2;
  jsonp_free(v2);
  return 0;
}
