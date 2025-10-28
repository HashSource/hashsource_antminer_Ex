char *__fastcall hashtable_iter_at(int a1, char *a2)
{
  size_t v2; // r0
  pair_t *pair; // [sp+Ch] [bp-10h]
  size_t v8; // [sp+14h] [bp-8h]

  v2 = strlen(a2);
  v8 = sub_4CE34((unsigned __int8 *)a2, v2, hashtable_seed);
  pair = hashtable_find_pair(
           (hashtable_t *)a1,
           (bucket_t *)(*(_DWORD *)(a1 + 4) + 8 * (v8 & ((1 << *(_DWORD *)(a1 + 8)) - 1))),
           a2,
           v8);
  if ( pair )
    return (char *)pair + 8;
  else
    return 0;
}
