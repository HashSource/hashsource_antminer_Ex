void *__fastcall compressor_reset(int a1)
{
  void *result; // r0

  result = *(void **)(a1 + 28);
  if ( result )
    result = memset(result, *(unsigned __int8 *)(a1 + 32), 4 * *(_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
