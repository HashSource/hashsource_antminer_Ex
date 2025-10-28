size_t __fastcall sub_245DB4(int a1, void *ptr, size_t size)
{
  size_t result; // r0

  result = fwrite(ptr, size, 1u, *(FILE **)(a1 + 4));
  if ( !result )
    sub_258B2C(*(_DWORD *)(a1 + 8));
  return result;
}
