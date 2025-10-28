unsigned int __fastcall lzo1y_999_compress_dict(
        void *a1,
        size_t a2,
        _BYTE *a3,
        _DWORD *a4,
        _DWORD *a5,
        char *a6,
        unsigned int a7)
{
  return lzo1y_999_compress_level(a1, a2, a3, a4, a5, a6, a7, 0, 8);
}
