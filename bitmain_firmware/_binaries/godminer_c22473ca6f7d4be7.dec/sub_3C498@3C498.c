int __fastcall sub_3C498(int a1, int a2, int a3)
{
  const char *v4; // r1

  v4 = *(const char **)(a1 + 1600);
  if ( v4 && strcmp((const char *)(a3 + 16), v4) )
    return 1;
  memcpy(*(void **)(a2 + 1160), (const void *)(a3 + 48 + *(_DWORD *)(a1 + 72)), *(_DWORD *)(a2 + 1156));
  return 0;
}
