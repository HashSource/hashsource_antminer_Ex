void *__cdecl json_object_key_to_iter(const char *key)
{
  if ( key )
    return (void *)(key - 16);
  else
    return 0;
}
