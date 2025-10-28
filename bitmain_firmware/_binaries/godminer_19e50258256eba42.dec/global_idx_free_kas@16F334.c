int __fastcall global_idx_free_kas(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 864);
  if ( v1 )
    free(*(void **)(a1 + 864));
  return v1;
}
