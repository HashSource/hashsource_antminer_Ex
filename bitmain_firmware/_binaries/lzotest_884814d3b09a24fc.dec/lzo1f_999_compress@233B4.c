int __fastcall lzo1f_999_compress(char *a1, size_t a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  return lzo1f_999_compress_callback(a1, a2, a3, a4, a5, 0, 0);
}
