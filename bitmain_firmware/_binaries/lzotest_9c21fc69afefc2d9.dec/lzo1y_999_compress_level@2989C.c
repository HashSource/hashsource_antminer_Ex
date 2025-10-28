unsigned int __fastcall lzo1y_999_compress_level(
        void *a1,
        size_t a2,
        _BYTE *a3,
        _DWORD *a4,
        _DWORD *a5,
        char *a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int *v9; // lr

  if ( (unsigned int)(a9 - 1) > 8 )
    return -1;
  v9 = (int *)((char *)&unk_320C4 + 24 * a9 - 24);
  return lzo1y_999_compress_internal(a1, a2, a3, a4, a5, a6, a7, a8, *v9, v9[1], v9[2], 0, v9[4], v9[5]);
}
