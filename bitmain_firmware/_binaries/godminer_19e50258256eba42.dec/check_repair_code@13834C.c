int __fastcall check_repair_code(int a1)
{
  int j; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  for ( i = 0; i <= 31; ++i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) )
      ++v6;
    printf("faildata === %2d %08X\n", i, *(_DWORD *)(a1 + 4 * i));
  }
  if ( !v6 )
    return 0;
  for ( j = 0; j < v6; ++j )
  {
    if ( *(_DWORD *)(a1 + 4 * j) <= 0x3FFFFFFFu || *(_DWORD *)(a1 + 4 * j) > 0x5FFFFFFFu )
      return -1;
  }
  return 0;
}
