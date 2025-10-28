int __fastcall expandArray(int result, unsigned int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v6; // [sp+Ch] [bp-28h]
  unsigned int v7; // [sp+18h] [bp-1Ch]
  unsigned int j; // [sp+1Ch] [bp-18h]
  unsigned int k; // [sp+1Ch] [bp-18h]
  unsigned int i; // [sp+20h] [bp-14h]
  int v11; // [sp+24h] [bp-10h]
  unsigned int v12; // [sp+28h] [bp-Ch]
  unsigned int v13; // [sp+2Ch] [bp-8h]

  v6 = result;
  v7 = a6 + ((a5 + 7) >> 3);
  v13 = 0;
  v12 = 0;
  v11 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v12 = (v12 << 8) | *(unsigned __int8 *)(v6 + i);
    v13 += 8;
    if ( v13 >= a5 )
    {
      v13 -= a5;
      for ( j = 0; j < a6; ++j )
        *(_BYTE *)(a3 + v11 + j) = 0;
      for ( k = a6; k < v7; ++k )
      {
        result = a3;
        *(_BYTE *)(a3 + v11 + k) = ((unsigned int)((1 << a5) - 1) >> (8 * (v7 - k - 1)))
                                 & (v12 >> (8 * (v7 - k - 1) + v13));
      }
      v11 += v7;
    }
  }
  return result;
}
