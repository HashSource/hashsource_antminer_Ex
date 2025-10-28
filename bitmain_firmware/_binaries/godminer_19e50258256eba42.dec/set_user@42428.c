int __fastcall set_user(const char *a1)
{
  int v3; // [sp+Ch] [bp-8h]

  if ( ++dword_5AC564 > total_pools )
    add_pool();
  v3 = *(_DWORD *)(pools + 4 * (dword_5AC564 + 0x3FFFFFFF));
  if ( *(_DWORD *)(v3 + 16) )
    free(*(void **)(v3 + 16));
  *(_DWORD *)(v3 + 16) = strdup(a1);
  return 0;
}
