int __fastcall sub_2464A8(_QWORD *a1)
{
  __int64 v1; // r0
  __int64 v2; // r2
  __int64 v4; // [sp+38h] [bp-84h]
  _QWORD s[5]; // [sp+58h] [bp-64h] BYREF
  _QWORD *v6; // [sp+84h] [bp-38h]
  int k; // [sp+88h] [bp-34h]
  int j; // [sp+8Ch] [bp-30h]
  int i; // [sp+90h] [bp-2Ch]
  unsigned __int8 v10; // [sp+96h] [bp-26h]
  unsigned __int8 v11; // [sp+97h] [bp-25h]
  unsigned __int64 v12; // [sp+98h] [bp-24h]

  v6 = a1;
  LODWORD(v1) = memset(s, 0, sizeof(s));
  v12 = 0;
  for ( i = 0; i <= 23; ++i )
  {
    v11 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      s[v11] = 0;
      v10 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        s[v11] ^= v6[v11 + v10];
        v10 += 5;
      }
      ++v11;
    }
    v11 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      v10 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        v2 = s[(v11 + 1) % 5];
        HIDWORD(v4) = v2 >> 31;
        LODWORD(v4) = (HIDWORD(v2) >> 31) | (2 * v2);
        v6[v10 + v11] ^= s[(v11 + 4) % 5] ^ v4;
        v10 += 5;
      }
      ++v11;
    }
    v12 = v6[1];
    v11 = 0;
    for ( j = 0; j <= 23; ++j )
    {
      s[0] = v6[byte_57D900[v11]];
      v6[byte_57D900[v11]] = (v12 << byte_57D8E8[v11]) | (v12 >> (-byte_57D8E8[v11] & 0x3F));
      v12 = s[0];
      ++v11;
    }
    v10 = 0;
    for ( j = 0; j <= 4; ++j )
    {
      v11 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        s[v11] = v6[v10 + v11];
        ++v11;
      }
      v11 = 0;
      for ( k = 0; k <= 4; ++k )
      {
        v6[v10 + v11] = s[v11] ^ ~s[(v11 + 1) % 5] & s[(v11 + 2) % 5];
        ++v11;
      }
      v10 += 5;
    }
    v1 = *v6 ^ qword_57D918[i];
    *v6 = v1;
  }
  return v1;
}
