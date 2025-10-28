void __cdecl gen_hash(unsigned __int8 *data, unsigned __int8 *hash, int len)
{
  unsigned __int8 v4[32]; // [sp+10h] [bp-24h] BYREF

  sha256(data, len, v4);
  sha256(v4, 0x20u, hash);
}
