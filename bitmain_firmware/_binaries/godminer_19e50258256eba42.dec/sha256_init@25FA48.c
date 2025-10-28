void __cdecl sha256_init(sha256_ctx *ctx)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 7; ++i )
    *((_DWORD *)ctx + i + 34) = sha256_h0[i];
  *((_DWORD *)ctx + 1) = 0;
  *(_DWORD *)ctx = 0;
}
