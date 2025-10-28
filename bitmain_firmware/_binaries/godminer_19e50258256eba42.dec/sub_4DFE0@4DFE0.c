int __fastcall sub_4DFE0(int a1, const char *a2, size_t a3)
{
  pair_t *pair; // [sp+14h] [bp-10h]
  size_t v7; // [sp+18h] [bp-Ch]

  v7 = *(_DWORD *)(a1 + 4) + 8 * (((1 << *(_DWORD *)(a1 + 8)) - 1) & a3);
  pair = hashtable_find_pair((hashtable_t *)a1, (bucket_t *)v7, a2, a3);
  if ( !pair )
    return -1;
  if ( pair == *(pair_t **)v7 && pair == *(pair_t **)(v7 + 4) )
  {
    *(_DWORD *)(v7 + 4) = a1 + 12;
    *(_DWORD *)v7 = *(_DWORD *)(v7 + 4);
  }
  else if ( pair == *(pair_t **)v7 )
  {
    *(_DWORD *)v7 = *((_DWORD *)pair + 1);
  }
  else if ( pair == *(pair_t **)(v7 + 4) )
  {
    *(_DWORD *)(v7 + 4) = *(_DWORD *)pair;
  }
  sub_4DDE4(pair);
  sub_4DDE4((_DWORD *)pair + 2);
  sub_4CDCC(*((_DWORD *)pair + 5));
  jsonp_free(pair);
  --*(_DWORD *)a1;
  return 0;
}
