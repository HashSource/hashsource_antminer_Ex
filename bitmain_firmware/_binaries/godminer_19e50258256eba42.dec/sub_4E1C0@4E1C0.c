int __fastcall sub_4E1C0(int a1)
{
  int v2; // r3
  int v3; // r1
  int v6; // [sp+10h] [bp-1Ch]
  void *v7; // [sp+14h] [bp-18h]
  int v8; // [sp+1Ch] [bp-10h]
  unsigned int i; // [sp+20h] [bp-Ch]
  int v10; // [sp+24h] [bp-8h]

  v8 = *(_DWORD *)(a1 + 8) + 1;
  v7 = jsonp_malloc(8 * (1 << v8));
  if ( !v7 )
    return -1;
  jsonp_free(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v8;
  for ( i = 0; i < 1 << *(_DWORD *)(a1 + 8); ++i )
  {
    v2 = *(_DWORD *)(a1 + 4) + 8 * i;
    *(_DWORD *)(v2 + 4) = a1 + 12;
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i) = *(_DWORD *)(v2 + 4);
  }
  v10 = *(_DWORD *)(a1 + 16);
  list_init((list_t *)(a1 + 12));
  while ( v10 != a1 + 12 )
  {
    v6 = *(_DWORD *)(v10 + 4);
    sub_344E9C(*(_DWORD *)(v10 + 16), 1 << v8);
    insert_to_bucket((hashtable_t *)a1, (bucket_t *)(*(_DWORD *)(a1 + 4) + 8 * v3), (list_t *)v10);
    v10 = v6;
  }
  return 0;
}
