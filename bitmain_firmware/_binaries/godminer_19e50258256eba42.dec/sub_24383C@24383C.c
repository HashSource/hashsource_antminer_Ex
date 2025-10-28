int __fastcall sub_24383C(int result, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v6; // [sp+4h] [bp-78h]
  _DWORD v7[24]; // [sp+8h] [bp-74h]
  unsigned int j; // [sp+68h] [bp-14h]
  unsigned int i; // [sp+6Ch] [bp-10h]

  v6 = result;
  for ( i = 0; i <= 7; ++i )
    v7[i] = *(_DWORD *)(result + 4 * i);
  for ( i = 0; i <= 0x3F; i += 16 )
  {
    for ( j = 0; j <= 0xF; ++j )
    {
      v2 = (__ROR4__(v7[(4 - (_BYTE)j) & 7], 6)
          ^ __ROR4__(v7[(4 - (_BYTE)j) & 7], 11)
          ^ __ROR4__(v7[(4 - (_BYTE)j) & 7], 25))
         + ((v7[(6 - (_BYTE)j) & 7] ^ v7[(5 - (_BYTE)j) & 7]) & v7[(4 - (_BYTE)j) & 7] ^ v7[(6 - (_BYTE)j) & 7])
         + dword_57D648[j + i];
      if ( i )
      {
        v3 = j & 0xF;
        v7[v3 + 8] += (__ROR4__(v7[(((_BYTE)j - 2) & 0xF) + 8], 17)
                     ^ __ROR4__(v7[(((_BYTE)j - 2) & 0xF) + 8], 19)
                     ^ (v7[(((_BYTE)j - 2) & 0xF) + 8] >> 10))
                    + v7[(((_BYTE)j - 7) & 0xF) + 8]
                    + ((v7[(((_BYTE)j - 15) & 0xF) + 8] >> 3)
                     ^ __ROR4__(v7[(((_BYTE)j - 15) & 0xF) + 8], 7)
                     ^ __ROR4__(v7[(((_BYTE)j - 15) & 0xF) + 8], 18));
        v4 = v7[v3 + 8];
      }
      else
      {
        v7[j + 8] = *(_DWORD *)(a2 + 4 * j);
        v4 = v7[j + 8];
      }
      v7[(7 - (_BYTE)j) & 7] += v4 + v2;
      v7[(3 - (_BYTE)j) & 7] += v7[(7 - (_BYTE)j) & 7];
      result = v7[-j & 7] & v7[(1 - (_BYTE)j) & 7];
      v7[(7 - (_BYTE)j) & 7] += (__ROR4__(v7[-j & 7], 2) ^ __ROR4__(v7[-j & 7], 13) ^ __ROR4__(v7[-j & 7], 22))
                              + (result | (v7[-j & 7] | v7[(1 - (_BYTE)j) & 7]) & v7[(2 - (_BYTE)j) & 7]);
    }
  }
  for ( i = 0; i <= 7; ++i )
  {
    result = v6;
    *(_DWORD *)(v6 + 4 * i) += v7[i];
  }
  return result;
}
