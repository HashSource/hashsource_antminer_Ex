_DWORD *__fastcall new_compressor(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = calloc(1u, 0x38u);
  if ( !v4 )
    puts("alloc compressor failed!");
  v4[9] = compressor_init;
  v4[10] = compressor_reset;
  v4[12] = compressor_stats;
  v4[11] = compressor_exit;
  v4[13] = compress;
  compressor_init(v4, a1, a2);
  return v4;
}
