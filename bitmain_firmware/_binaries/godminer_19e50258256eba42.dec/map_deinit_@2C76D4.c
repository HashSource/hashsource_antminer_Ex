void __fastcall map_deinit_(int a1)
{
  _DWORD *v3; // [sp+Ch] [bp-10h]
  int v4; // [sp+10h] [bp-Ch]
  _DWORD *ptr; // [sp+14h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 4);
  while ( v4-- )
  {
    for ( ptr = *(_DWORD **)(*(_DWORD *)a1 + 4 * v4); ptr; ptr = v3 )
    {
      v3 = (_DWORD *)ptr[2];
      free(ptr);
    }
  }
  free(*(void **)a1);
}
