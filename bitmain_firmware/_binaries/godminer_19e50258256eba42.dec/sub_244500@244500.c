int __fastcall sub_244500(int result, int a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  unsigned int v6; // [sp+18h] [bp-1Ch]
  unsigned int j; // [sp+1Ch] [bp-18h]
  unsigned int i; // [sp+20h] [bp-14h]
  int v9; // [sp+24h] [bp-10h]
  unsigned int v10; // [sp+28h] [bp-Ch]
  unsigned int v11; // [sp+2Ch] [bp-8h]

  v6 = a6 + ((unsigned int)(a5 + 7) >> 3);
  v11 = 0;
  v10 = 0;
  v9 = 0;
  for ( i = 0; i < a4; ++i )
  {
    if ( v11 <= 7 )
    {
      v10 <<= a5;
      for ( j = a6; j < v6; ++j )
        v10 |= (((unsigned int)((1 << a5) - 1) >> (8 * (v6 - j - 1))) & *(_BYTE *)(result + v9 + j)) << (8 * (v6 - j - 1));
      v9 += v6;
      v11 += a5;
    }
    v11 -= 8;
    *(_BYTE *)(a3 + i) = v10 >> v11;
  }
  return result;
}
