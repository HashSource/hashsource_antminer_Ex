int __fastcall EaglesongPermutation(int result)
{
  int v1; // [sp+4h] [bp-58h]
  _DWORD v2[16]; // [sp+Ch] [bp-50h]
  int k; // [sp+4Ch] [bp-10h]
  int j; // [sp+50h] [bp-Ch]
  int i; // [sp+54h] [bp-8h]

  v1 = result;
  for ( i = 0; i < num_rounds; ++i )
  {
    for ( j = 0; j <= 15; ++j )
    {
      v2[j] = 0;
      for ( k = 0; k <= 15; ++k )
      {
        result = v1;
        v2[j] ^= *(_DWORD *)(v1 + 4 * k) * bit_matrix[16 * k + j];
      }
    }
    for ( j = 0; j <= 15; ++j )
      *(_DWORD *)(v1 + 4 * j) = v2[j];
    for ( j = 0; j <= 15; ++j )
    {
      result = v1;
      *(_DWORD *)(v1 + 4 * j) ^= (*(_DWORD *)(v1 + 4 * j) >> (32 - coefficients[3 * j + 2]))
                               ^ (*(_DWORD *)(v1 + 4 * j) << coefficients[3 * j + 1])
                               ^ (*(_DWORD *)(v1 + 4 * j) >> (32 - coefficients[3 * j + 1]))
                               ^ (*(_DWORD *)(v1 + 4 * j) << coefficients[3 * j + 2]);
    }
    for ( j = 0; j <= 15; ++j )
    {
      result = v1;
      *(_DWORD *)(v1 + 4 * j) ^= injection_constants[16 * i + j];
    }
    for ( j = 0; j <= 15; j += 2 )
    {
      *(_DWORD *)(v1 + 4 * j) += *(_DWORD *)(v1 + 4 * (j + 1));
      *(_DWORD *)(v1 + 4 * j) = __ROR4__(*(_DWORD *)(v1 + 4 * j), 24);
      *(_DWORD *)(v1 + 4 * (j + 1)) = __ROR4__(*(_DWORD *)(v1 + 4 * (j + 1)), 8);
      result = v1;
      *(_DWORD *)(v1 + 4 * (j + 1)) += *(_DWORD *)(v1 + 4 * j);
    }
  }
  return result;
}
