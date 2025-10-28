void *__cdecl hashtable_get(hashtable_t *hashtable, const char *key)
{
  size_t v2; // r0
  pair_t *pair; // [sp+Ch] [bp-10h]
  size_t v8; // [sp+14h] [bp-8h]

  v2 = strlen(key);
  v8 = sub_4CE34((unsigned __int8 *)key, v2, hashtable_seed);
  pair = hashtable_find_pair(
           hashtable,
           (bucket_t *)(*((_DWORD *)hashtable + 1) + 8 * (v8 & ((1 << *((_DWORD *)hashtable + 2)) - 1))),
           key,
           v8);
  if ( pair )
    return (void *)*((_DWORD *)pair + 5);
  else
    return 0;
}
