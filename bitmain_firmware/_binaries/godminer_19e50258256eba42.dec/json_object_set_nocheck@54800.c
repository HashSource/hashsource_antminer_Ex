int __cdecl json_object_set_nocheck(json_t *object, const char *key, json_t *value)
{
  json_t *v3; // r0

  v3 = (json_t *)sub_54738((int)value);
  return json_object_set_new_nocheck(object, key, v3);
}
