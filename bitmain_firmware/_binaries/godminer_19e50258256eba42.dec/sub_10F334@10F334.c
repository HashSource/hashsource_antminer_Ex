int __fastcall sub_10F334(int a1)
{
  unsigned int v4; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v4 = *(_DWORD *)(a1 + 372);
  for ( i = 0; i <= 0; ++i )
  {
    sub_FCA3C(a1, v4);
    if ( *(_DWORD *)(a1 + 464) == v4 )
      break;
  }
  if ( *(_DWORD *)(a1 + 464) == v4 )
    return 0;
  if ( case_select != 6 )
    reboot_godminer_eth_2282();
  return 12;
}
