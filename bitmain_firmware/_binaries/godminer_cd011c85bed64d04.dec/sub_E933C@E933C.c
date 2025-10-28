_DWORD *__fastcall sub_E933C(int a1)
{
  _DWORD *v2; // r6
  signed int v3; // r5
  _DWORD *v5; // r7
  int v6; // r4
  int v7; // r5
  const void *v8; // r1

  v2 = calloc(1u, 8u);
  if ( !v2 )
    puts("sols stats calloc failed!");
  v3 = *(_DWORD *)(a1 + 56);
  *v2 = v3;
  if ( !v3 )
    return v2;
  v5 = calloc(v3, 0xACu);
  if ( !v5 )
  {
    v2 = 0;
    puts("s calloc failed!");
    return v2;
  }
  if ( v3 > 0 )
  {
    v6 = *(_DWORD *)(a1 + 72) + 4;
    v7 = v6 + 172 * v3;
    do
    {
      v8 = (const void *)v6;
      *v5 = *(_DWORD *)(v6 - 4);
      v6 += 172;
      memcpy(v5 + 1, v8, 0xA8u);
    }
    while ( v6 != v7 );
  }
  v2[1] = v5;
  return v2;
}
