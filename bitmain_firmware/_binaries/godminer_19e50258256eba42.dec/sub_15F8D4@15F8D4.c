int __fastcall sub_15F8D4(int a1)
{
  unsigned int v4; // [sp+Ch] [bp-8h]

  v4 = *(_DWORD *)(a1 + 372);
  sub_1522B4(a1, v4);
  if ( *(_DWORD *)(a1 + 464) == v4 )
    return 0;
  else
    return 12;
}
