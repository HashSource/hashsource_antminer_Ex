void __fastcall compressor_exit(int a1)
{
  void *v1; // r0

  v1 = *(void **)(a1 + 28);
  if ( v1 )
    free(v1);
}
