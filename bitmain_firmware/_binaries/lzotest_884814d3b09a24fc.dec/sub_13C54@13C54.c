int __fastcall sub_13C54(void *src, size_t n, void *dest, _DWORD *a4)
{
  lzo_memcpy(dest, src, n);
  *a4 = n;
  return 0;
}
