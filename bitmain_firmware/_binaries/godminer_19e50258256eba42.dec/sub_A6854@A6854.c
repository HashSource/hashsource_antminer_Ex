int __fastcall sub_A6854(int a1, int a2, int a3)
{
  size_t *v6; // [sp+10h] [bp-Ch]

  v6 = *(size_t **)(a1 + 1132);
  if ( v6 )
  {
    if ( !*(_DWORD *)(a2 + 1580) || !strcmp((const char *)(a3 + 16), *(const char **)(a2 + 1580)) )
    {
      if ( *v6 == *(_DWORD *)(a3 + 104) )
      {
        *(_QWORD *)(a1 + 1072) = (int)_byteswap_ulong(*(_DWORD *)(a3 + 80));
        memcpy(v6 + 1, (const void *)(a3 + 86), *v6);
        *(_DWORD *)(a1 + 1100) = *(_DWORD *)(a3 + 108);
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
