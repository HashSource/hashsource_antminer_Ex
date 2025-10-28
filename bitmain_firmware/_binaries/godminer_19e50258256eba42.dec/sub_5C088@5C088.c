int __fastcall sub_5C088(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 1124)
    && *(_DWORD *)(a2 + 1580)
    && !strcmp(*(const char **)(a1 + 1124), *(const char **)(a2 + 1580))
    && *(double *)(a2 + 1520) == *(double *)(a1 + 1064) )
  {
    return 0;
  }
  else
  {
    return 2;
  }
}
