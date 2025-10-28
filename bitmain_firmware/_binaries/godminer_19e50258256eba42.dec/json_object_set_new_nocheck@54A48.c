int __cdecl json_object_set_new_nocheck(json_t *json, const char *key, json_t *value)
{
  if ( !value )
    return -1;
  if ( key && json && !*(_DWORD *)json && json != value && !hashtable_set((json_t *)((char *)json + 8), key, value) )
    return 0;
  sub_54798((int)value);
  return -1;
}
