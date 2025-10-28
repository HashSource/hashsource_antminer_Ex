void __cdecl sha256_final(sha256_ctx *ctx, unsigned __int8 *digest)
{
  int v2; // r3
  int v5; // [sp+8h] [bp-14h]
  int v6; // [sp+Ch] [bp-10h]
  unsigned int v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  if ( (*((_DWORD *)ctx + 1) & 0x3Fu) <= 0x37 )
    v2 = 1;
  else
    v2 = 2;
  v7 = v2;
  v6 = 8 * (*(_DWORD *)ctx + *((_DWORD *)ctx + 1));
  v5 = v2 << 6;
  memset((char *)ctx + *((_DWORD *)ctx + 1) + 8, 0, (v2 << 6) - *((_DWORD *)ctx + 1));
  *((_BYTE *)ctx + *((_DWORD *)ctx + 1) + 8) = 0x80;
  *((_BYTE *)ctx + v5 + 7) = v6;
  *((_BYTE *)ctx + v5 + 6) = BYTE1(v6);
  *((_BYTE *)ctx + v5 + 5) = BYTE2(v6);
  *((_BYTE *)ctx + v5 + 4) = HIBYTE(v6);
  sha256_transf(ctx, (const unsigned __int8 *)ctx + 8, v7);
  for ( i = 0; i <= 7; ++i )
  {
    digest[4 * i + 3] = *((_DWORD *)ctx + i + 34);
    digest[4 * i + 2] = BYTE1(*((_DWORD *)ctx + i + 34));
    digest[4 * i + 1] = BYTE2(*((_DWORD *)ctx + i + 34));
    digest[4 * i] = HIBYTE(*((_DWORD *)ctx + i + 34));
  }
}
