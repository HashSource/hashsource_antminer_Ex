int __fastcall sub_A9FC0(int a1, int a2, int a3)
{
  size_t *v7; // [sp+10h] [bp-Ch]

  if ( *(_DWORD *)(a2 + 1580) && strcmp((const char *)(a3 + 16), *(const char **)(a2 + 1580)) )
    return 1;
  v7 = *(size_t **)(a1 + 1132);
  if ( v7 )
  {
    memcpy(v7 + 1, (const void *)(a3 + 48 + *(_DWORD *)(a2 + 76)), *v7);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
