void __cdecl sha256(const unsigned __int8 *message, unsigned int len, unsigned __int8 *digest)
{
  _BYTE v6[168]; // [sp+10h] [bp-ACh] BYREF

  sha256_init((sha256_ctx *)v6);
  sha256_update((sha256_ctx *)v6, message, len);
  sha256_final((sha256_ctx *)v6, digest);
}
