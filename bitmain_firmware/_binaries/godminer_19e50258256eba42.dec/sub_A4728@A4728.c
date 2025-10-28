int __fastcall sub_A4728(int a1, int a2, int a3)
{
  size_t *v5; // [sp+10h] [bp-Ch]

  *(_QWORD *)(a1 + 1072) = (*(unsigned __int8 *)(a3 + 51) << 24)
                         | (*(unsigned __int8 *)(a3 + 50) << 16)
                         | (*(unsigned __int8 *)(a3 + 49) << 8)
                         | (unsigned __int64)*(unsigned __int8 *)(a3 + 48);
  v5 = *(size_t **)(a1 + 1132);
  if ( v5 )
  {
    if ( *(_DWORD *)(a1 + 1124) && a3 != -16 )
      strcpy(*(char **)(a1 + 1124), (const char *)(a3 + 16));
    memcpy(v5 + 1, (const void *)(a3 + 52), *v5);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
