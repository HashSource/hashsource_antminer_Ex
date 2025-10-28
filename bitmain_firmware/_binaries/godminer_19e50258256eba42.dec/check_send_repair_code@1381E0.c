int __fastcall check_send_repair_code(int a1, int a2, char a3)
{
  int k; // [sp+10h] [bp-14h]
  int j; // [sp+14h] [bp-10h]
  int i; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v11 = 0;
  for ( i = 0; i <= 31; ++i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) )
    {
      ++v11;
      printf("faildata === %2d %08X\n", i, *(_DWORD *)(a1 + 4 * i));
    }
  }
  if ( !v11 )
    return 0;
  for ( j = 0; j < v11; ++j )
  {
    if ( *(_DWORD *)(a1 + 4 * j) <= 0x3FFFFFFFu || *(_DWORD *)(a1 + 4 * j) > 0x5FFFFFFFu )
      return -1;
  }
  for ( k = 0; k < v11; ++k )
    sub_1070C8(a2, a3, 223, *(_DWORD *)(a1 + 4 * k));
  return 0;
}
