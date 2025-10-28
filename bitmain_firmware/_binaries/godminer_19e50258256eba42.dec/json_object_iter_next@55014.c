void *__cdecl json_object_iter_next(json_t *json, void *iter)
{
  if ( json && !*(_DWORD *)json && iter )
    return hashtable_iter_next((json_t *)((char *)json + 8), iter);
  else
    return 0;
}
