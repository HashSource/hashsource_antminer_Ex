int __cdecl hashtable_init(hashtable_t *hashtable)
{
  int v2; // r3
  unsigned int i; // [sp+Ch] [bp-8h]

  *(_DWORD *)hashtable = 0;
  *((_DWORD *)hashtable + 2) = 3;
  *((_DWORD *)hashtable + 1) = jsonp_malloc(8 << *((_DWORD *)hashtable + 2));
  if ( !*((_DWORD *)hashtable + 1) )
    return -1;
  list_init((hashtable_t *)((char *)hashtable + 12));
  list_init((hashtable_t *)((char *)hashtable + 20));
  for ( i = 0; i < 1 << *((_DWORD *)hashtable + 2); ++i )
  {
    v2 = *((_DWORD *)hashtable + 1) + 8 * i;
    *(_DWORD *)(v2 + 4) = (char *)hashtable + 12;
    *(_DWORD *)(*((_DWORD *)hashtable + 1) + 8 * i) = *(_DWORD *)(v2 + 4);
  }
  return 0;
}
