int __fastcall sub_47FF0(int a1, int a2, int a3)
{
  if ( *(_DWORD *)(a1 + 1600) && strcmp((const char *)(a3 + 16), *(const char **)(a1 + 1600)) )
    return 1;
  memcpy((void *)(a2 + 1136), (const void *)(a3 + 80), *(_DWORD *)(a2 + 1156) + 5);
  return 0;
}
