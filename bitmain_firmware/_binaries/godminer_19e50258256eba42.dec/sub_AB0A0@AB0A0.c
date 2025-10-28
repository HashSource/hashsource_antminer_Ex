int __fastcall sub_AB0A0(int a1, int a2, int a3, bool *a4)
{
  size_t *v6; // [sp+10h] [bp-Ch]

  *(_QWORD *)(a1 + 1072) = _byteswap_ulong(*(_DWORD *)(a3 + 48));
  v6 = *(size_t **)(a1 + 1132);
  if ( v6 )
  {
    *a4 = *(_BYTE *)(a3 + 78) != 0;
    memcpy(v6 + 1, (const void *)(a3 + 52), *v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
