unsigned int __fastcall lzo1x_999_compress(void *a1, size_t a2, _BYTE *a3, _DWORD *a4, _DWORD *a5)
{
  return lzo1x_999_compress_level(a1, a2, a3, a4, a5, 0, 0, 0, 8);
}
