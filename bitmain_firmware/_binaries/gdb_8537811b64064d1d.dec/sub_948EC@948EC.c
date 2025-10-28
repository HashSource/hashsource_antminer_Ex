int __fastcall sub_948EC(int a1, void **a2, _DWORD *a3)
{
  int v6; // r4
  size_t v7; // r4
  void *v8; // r0
  __int64 v10; // r0

  v6 = *(_DWORD *)(a1 + 108);
  if ( *a2 )
    free(*a2);
  v7 = 16 * v6;
  v8 = sub_93050(v7);
  *a2 = v8;
  *a3 = v8;
  sub_2ADD24(a1, sub_94844, a3);
  if ( *a3 <= (unsigned int)*a2 + v7 )
    return 0;
  v10 = sub_94728((int)"exec.c", 522, "failed internal consistency check");
  return sub_94970(v10, HIDWORD(v10));
}
