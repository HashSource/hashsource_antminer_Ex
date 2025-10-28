void *__fastcall sph_simd224_0(void *result, char *src, size_t a3)
{
  size_t v3; // r6
  int v4; // r5
  int v6; // r0
  size_t v7; // r4
  void *v8; // r0
  size_t v9; // r4
  int v10; // r3

  v3 = a3;
  if ( a3 )
  {
    v4 = (int)result;
    do
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v4 + 64);
        v7 = 64 - v6;
        v8 = (void *)(v4 + v6);
        if ( v7 >= v3 )
          v7 = v3;
        v3 -= v7;
        result = memcpy(v8, src, v7);
        src += v7;
        v9 = v7 + *(_DWORD *)(v4 + 64);
        *(_DWORD *)(v4 + 64) = v9;
        if ( v9 == 64 )
          break;
        if ( !v3 )
          return result;
      }
      result = (void *)sub_11DAC4((unsigned __int8 *)v4, 0);
      v10 = *(_DWORD *)(v4 + 132);
      *(_DWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 132) = ++v10;
      if ( !v10 )
        ++*(_DWORD *)(v4 + 136);
    }
    while ( v3 );
  }
  return result;
}
