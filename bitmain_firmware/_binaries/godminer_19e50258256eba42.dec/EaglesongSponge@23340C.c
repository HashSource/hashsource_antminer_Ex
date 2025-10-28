unsigned int __fastcall EaglesongSponge(int a1, unsigned int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int result; // r0
  _DWORD v10[16]; // [sp+10h] [bp-54h] BYREF
  int v11; // [sp+50h] [bp-14h]
  int k; // [sp+54h] [bp-10h]
  int j; // [sp+58h] [bp-Ch]
  unsigned int i; // [sp+5Ch] [bp-8h]

  for ( i = 0; (int)i <= 15; ++i )
    v10[i] = 0;
  for ( i = 0; (8 * (a4 + 1) + rate - 1) / rate > i; ++i )
  {
    for ( j = 0; j < rate / 32; ++j )
    {
      v11 = 0;
      for ( k = 0; k <= 3; ++k )
      {
        if ( a4 <= (int)(i * rate) / 8 + 4 * j + k )
        {
          if ( a4 == (int)(i * rate) / 8 + 4 * j + k )
            v11 = a5 ^ (v11 << 8);
        }
        else
        {
          v11 = *(unsigned __int8 *)(a3 + (int)(i * rate) / 8 + 4 * j + k) ^ (v11 << 8);
        }
      }
      v10[j] ^= v11;
    }
    EaglesongPermutation((int)v10);
  }
  for ( i = 0; ; ++i )
  {
    result = a2 / (rate / 8);
    if ( result <= i )
      break;
    for ( j = 0; j < rate / 32; ++j )
    {
      for ( k = 0; k <= 3; ++k )
        *(_BYTE *)(a1 + (int)(i * rate) / 8 + 4 * j + k) = v10[j] >> (8 * k);
    }
    EaglesongPermutation((int)v10);
  }
  return result;
}
