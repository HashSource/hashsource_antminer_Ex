bool __fastcall sub_1FF9EC(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 12) || !*(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_BYTE *)(a1 + 4) )
    return sub_1FF954(a1, a2);
  return sub_1FF8C4(a1, a2);
}
