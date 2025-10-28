int __cdecl hashtable_set(hashtable_t *hashtable, const char *key, json_t *value)
{
  size_t v4; // r0
  size_t v9; // [sp+14h] [bp-18h]
  pair_t *pair; // [sp+18h] [bp-14h]
  char *v11; // [sp+18h] [bp-14h]
  bucket_t *v12; // [sp+1Ch] [bp-10h]
  size_t v13; // [sp+24h] [bp-8h]

  if ( !(*(_DWORD *)hashtable >> *((_DWORD *)hashtable + 2)) || !sub_4E1C0((int)hashtable) )
  {
    v4 = strlen(key);
    v13 = sub_4CE34((unsigned __int8 *)key, v4, hashtable_seed);
    v12 = (bucket_t *)(*((_DWORD *)hashtable + 1) + 8 * (((1 << *((_DWORD *)hashtable + 2)) - 1) & v13));
    pair = hashtable_find_pair(hashtable, v12, key, v13);
    if ( pair )
    {
      sub_4CDCC(*((_DWORD *)pair + 5));
      *((_DWORD *)pair + 5) = value;
    }
    else
    {
      v9 = strlen(key);
      if ( v9 > 0xFFFFFFE6 )
        return -1;
      v11 = (char *)jsonp_malloc(v9 + 25);
      if ( !v11 )
        return -1;
      *((_DWORD *)v11 + 4) = v13;
      strncpy(v11 + 24, key, v9 + 1);
      *((_DWORD *)v11 + 5) = value;
      list_init((list_t *)v11);
      list_init((list_t *)(v11 + 8));
      insert_to_bucket(hashtable, v12, (list_t *)v11);
      list_insert((hashtable_t *)((char *)hashtable + 20), (list_t *)(v11 + 8));
      ++*(_DWORD *)hashtable;
    }
    return 0;
  }
  return -1;
}
