json_t *__fastcall sub_2A1CC(json_t *result)
{
  json_t *v1; // r0
  json_t *v2; // [sp+4h] [bp-18h]
  char *v3; // [sp+8h] [bp-14h]
  int i; // [sp+Ch] [bp-10h]

  v2 = result;
  if ( result )
  {
    for ( i = 0; (&off_597390)[6 * i]; ++i )
    {
      v3 = json_object();
      v1 = (json_t *)json_string((&off_597390)[6 * i]);
      json_object_set_new((json_t *)v3, "type", v1);
      ((void (__fastcall *)(char *, char **))(&off_597390)[6 * i + 1])(v3, &(&off_597390)[6 * i]);
      result = (json_t *)json_array_append_new(v2, (json_t *)v3);
    }
  }
  return result;
}
