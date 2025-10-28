void __cdecl hashtable_do_clear(hashtable_t *hashtable)
{
  _DWORD *v2; // [sp+10h] [bp-Ch]
  _DWORD *i; // [sp+14h] [bp-8h]

  for ( i = (_DWORD *)*((_DWORD *)hashtable + 4); i != (_DWORD *)((char *)hashtable + 12); i = v2 )
  {
    v2 = (_DWORD *)i[1];
    sub_4CDCC(i[5]);
    jsonp_free(i);
  }
}
