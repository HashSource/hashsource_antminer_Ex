int __fastcall sub_487EC(int a1, int a2, int a3)
{
  size_t v5; // r2
  void *v7; // r0

  if ( *(_DWORD *)(a1 + 1600) && strcmp((const char *)(a3 + 16), *(const char **)(a1 + 1600)) )
    return 1;
  v5 = *(_DWORD *)(a2 + 1156);
  if ( v5 != *(_DWORD *)(a3 + 104) )
    return 1;
  v7 = *(void **)(a2 + 1160);
  *(_QWORD *)(a2 + 1136) = (int)bswap32(*(_DWORD *)(a3 + 80));
  memcpy(v7, (const void *)(a3 + 86), v5);
  *(_DWORD *)(a2 + 1248) = *(_DWORD *)(a3 + 108);
  return 0;
}
