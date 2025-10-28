void __fastcall hashtable_clear(int a1)
{
  int v1; // r3
  unsigned int i; // [sp+Ch] [bp-8h]

  hashtable_do_clear((hashtable_t *)a1);
  for ( i = 0; i < 1 << *(_DWORD *)(a1 + 8); ++i )
  {
    v1 = *(_DWORD *)(a1 + 4) + 8 * i;
    *(_DWORD *)(v1 + 4) = a1 + 12;
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i) = *(_DWORD *)(v1 + 4);
  }
  list_init((list_t *)(a1 + 12));
  list_init((list_t *)(a1 + 20));
  *(_DWORD *)a1 = 0;
}
