bool __fastcall hs_header_decode(const void *a1, size_t a2, _DWORD *a3)
{
  size_t v4; // [sp+8h] [bp-Ch] BYREF
  const void *v5; // [sp+Ch] [bp-8h] BYREF

  v5 = a1;
  v4 = a2;
  return hs_header_read(&v5, &v4, a3);
}
