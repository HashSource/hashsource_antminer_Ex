json_t *__cdecl json_object_get(const json_t *json, const char *key)
{
  if ( key && json && !*(_DWORD *)json )
    return (json_t *)hashtable_get((const json_t *)((char *)json + 8), key);
  else
    return 0;
}
