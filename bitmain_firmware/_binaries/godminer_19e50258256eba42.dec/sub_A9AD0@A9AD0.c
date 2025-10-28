int __fastcall sub_A9AD0(int a1, int a2, int a3)
{
  int v5; // [sp+10h] [bp-Ch]

  v5 = *(_DWORD *)(a1 + 1132);
  if ( *(_DWORD *)(a2 + 1580) && strcmp((const char *)(a3 + 16), *(const char **)(a2 + 1580)) )
    return 1;
  if ( v5 )
  {
    memcpy((void *)(v5 + 1368), (const void *)(a3 + 1398), 0x5CFu);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
