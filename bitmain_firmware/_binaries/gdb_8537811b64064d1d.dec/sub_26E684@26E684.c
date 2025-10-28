bool __fastcall sub_26E684(int a1)
{
  _DWORD *v2; // r3

  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    ((void (*)(void))loc_26E034)();
  v2 = *(_DWORD **)(a1 + 96);
  return !v2 || *v2 == 0;
}
