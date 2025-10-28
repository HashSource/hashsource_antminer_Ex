int __fastcall sub_A4EF8(int a1, int a2, int a3)
{
  if ( *(_DWORD *)(a1 + 1132) )
  {
    memcpy((void *)(a1 + 1072), (const void *)(a3 + 26), 8u);
    memcpy(*(void **)(a1 + 1124), (const void *)(a3 + 18), 8u);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return 0;
}
