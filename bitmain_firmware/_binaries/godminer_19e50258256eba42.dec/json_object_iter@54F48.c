void *__cdecl json_object_iter(json_t *json)
{
  if ( json && !*(_DWORD *)json )
    return hashtable_iter((json_t *)((char *)json + 8));
  else
    return 0;
}
