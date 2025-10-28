int __fastcall sub_AAFD0(int a1, int a2, int a3)
{
  size_t *v5; // [sp+10h] [bp-Ch]

  *(_QWORD *)(a1 + 1072) = _byteswap_ulong(*(_DWORD *)(a3 + 48));
  v5 = *(size_t **)(a1 + 1132);
  if ( v5 )
  {
    memcpy(v5 + 1, (const void *)(a3 + 52), *v5);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
