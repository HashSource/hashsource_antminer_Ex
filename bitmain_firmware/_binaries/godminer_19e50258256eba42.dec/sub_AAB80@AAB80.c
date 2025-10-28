int __fastcall sub_AAB80(int a1, int a2, int a3)
{
  int v6; // [sp+10h] [bp-Ch]

  v6 = *(_DWORD *)(a1 + 1132);
  if ( v6 )
  {
    if ( !*(_DWORD *)(a2 + 1580) || !strcmp((const char *)(a3 + 16), *(const char **)(a2 + 1580)) )
    {
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(a3 + 48);
      memcpy((void *)(a1 + 1100), (const void *)(a3 + 54), 8u);
      *(_QWORD *)(v6 + 8) = *(_QWORD *)(a3 + 72);
      return 0;
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
