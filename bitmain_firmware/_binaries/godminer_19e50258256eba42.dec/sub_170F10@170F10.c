int __fastcall sub_170F10(int a1)
{
  unsigned int v4; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v4 = *(_DWORD *)(a1 + 372);
  for ( i = 0; i <= 2; ++i )
  {
    sub_1629D0(a1, v4);
    if ( *(_DWORD *)(a1 + 464) == v4 )
      break;
  }
  if ( *(_DWORD *)(a1 + 464) == v4 )
    return 0;
  else
    return 12;
}
