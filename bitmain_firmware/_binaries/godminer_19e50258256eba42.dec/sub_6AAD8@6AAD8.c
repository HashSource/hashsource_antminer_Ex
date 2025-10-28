int __fastcall sub_6AAD8(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 1124)
    && *(_DWORD *)(a2 + 1580)
    && !strcmp(*(const char **)(a1 + 1124), *(const char **)(a2 + 1580)) )
  {
    return 0;
  }
  else
  {
    return 2;
  }
}
