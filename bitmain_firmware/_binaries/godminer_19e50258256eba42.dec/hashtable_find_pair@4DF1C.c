pair_t *__cdecl hashtable_find_pair(hashtable_t *hashtable, bucket_t *bucket, const char *key, size_t hash)
{
  int i; // [sp+14h] [bp-8h]

  if ( bucket_is_empty(hashtable, bucket) )
    return 0;
  for ( i = *(_DWORD *)bucket; ; i = *(_DWORD *)(i + 4) )
  {
    if ( hash == *(_DWORD *)(i + 16) && !strcmp((const char *)(i + 24), key) )
      return (pair_t *)i;
    if ( i == *((_DWORD *)bucket + 1) )
      break;
  }
  return 0;
}
