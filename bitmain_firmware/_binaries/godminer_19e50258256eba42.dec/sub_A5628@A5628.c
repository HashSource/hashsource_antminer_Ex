int __fastcall sub_A5628(int a1, int a2, int a3)
{
  _DWORD *v7; // [sp+14h] [bp-8h]

  v7 = *(_DWORD **)(a1 + 1132);
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 1124) && a3 != -16 )
      strcpy(*(char **)(a1 + 1124), (const char *)(a3 + 16));
    memcpy((void *)(a1 + 1072), (const void *)(a3 + 80), *v7 + 5);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
