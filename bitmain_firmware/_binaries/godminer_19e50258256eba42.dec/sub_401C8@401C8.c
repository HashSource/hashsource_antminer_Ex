void __fastcall sub_401C8(int a1)
{
  if ( *(_DWORD *)(a1 + 1124) )
  {
    free(*(void **)(a1 + 1124));
    *(_DWORD *)(a1 + 1124) = 0;
  }
}
