void __cdecl sha256_transf(sha256_ctx *ctx, const unsigned __int8 *message, unsigned int block_nb)
{
  uint32_t v3; // [sp+14h] [bp-138h]
  uint32_t v4; // [sp+18h] [bp-134h]
  uint32_t v5; // [sp+1Ch] [bp-130h]
  int v6; // [sp+20h] [bp-12Ch]
  uint32_t v7; // [sp+24h] [bp-128h]
  uint32_t v8; // [sp+28h] [bp-124h]
  uint32_t v9; // [sp+2Ch] [bp-120h]
  uint32_t v10; // [sp+30h] [bp-11Ch]
  uint32_t w[64]; // [sp+34h] [bp-118h]
  int v12; // [sp+134h] [bp-18h]
  uint32_t v13; // [sp+138h] [bp-14h]
  const unsigned __int8 *v14; // [sp+13Ch] [bp-10h]
  int j; // [sp+140h] [bp-Ch]
  signed int i; // [sp+144h] [bp-8h]

  for ( i = 0; i < (int)block_nb; ++i )
  {
    v14 = &message[64 * i];
    for ( j = 0; j <= 15; ++j )
      w[j] = v14[4 * j + 3] | (v14[4 * j + 2] << 8) | (v14[4 * j + 1] << 16) | (v14[4 * j] << 24);
    for ( j = 16; j <= 63; ++j )
      w[j] = (__ROR4__(w[j - 2], 17) ^ __ROR4__(w[j - 2], 19) ^ (w[j - 2] >> 10))
           + w[j - 7]
           + ((w[j - 15] >> 3) ^ __ROR4__(w[j - 15], 7) ^ __ROR4__(w[j - 15], 18))
           + w[j - 16];
    for ( j = 0; j <= 7; ++j )
      *(&v3 + j) = *((_DWORD *)ctx + j + 34);
    for ( j = 0; j <= 63; ++j )
    {
      v13 = v10 + (__ROR4__(v7, 25) ^ __ROR4__(v7, 6) ^ __ROR4__(v7, 11)) + (v9 & ~v7 ^ v7 & v8) + sha256_k[j] + w[j];
      v12 = (__ROR4__(v3, 2) ^ __ROR4__(v3, 13) ^ __ROR4__(v3, 22)) + (v5 & v4 ^ v3 & (v5 ^ v4));
      v10 = v9;
      v9 = v8;
      v8 = v7;
      v7 = v6 + v13;
      v6 = v5;
      v5 = v4;
      v4 = v3;
      v3 = v13 + v12;
    }
    for ( j = 0; j <= 7; ++j )
      *((_DWORD *)ctx + j + 34) += *(&v3 + j);
  }
}
