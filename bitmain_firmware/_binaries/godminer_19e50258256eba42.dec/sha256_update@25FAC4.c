void __cdecl sha256_update(sha256_ctx *ctx, const unsigned __int8 *message, unsigned int len)
{
  size_t v3; // r3
  const unsigned __int8 *v7; // [sp+14h] [bp-18h]
  unsigned int v8; // [sp+18h] [bp-14h]
  size_t n; // [sp+20h] [bp-Ch]
  int na; // [sp+20h] [bp-Ch]

  v3 = len;
  if ( 64 - *((_DWORD *)ctx + 1) < len )
    v3 = 64 - *((_DWORD *)ctx + 1);
  n = v3;
  memcpy((char *)ctx + *((_DWORD *)ctx + 1) + 8, message, v3);
  if ( *((_DWORD *)ctx + 1) + len > 0x3F )
  {
    v8 = (len - n) >> 6;
    v7 = &message[n];
    sha256_transf(ctx, (const unsigned __int8 *)ctx + 8, 1u);
    sha256_transf(ctx, &message[n], v8);
    na = ((_BYTE)len - (_BYTE)n) & 0x3F;
    memcpy((char *)ctx + 8, &v7[64 * v8], na);
    *((_DWORD *)ctx + 1) = na;
    *(_DWORD *)ctx += (v8 + 1) << 6;
  }
  else
  {
    *((_DWORD *)ctx + 1) += len;
  }
}
