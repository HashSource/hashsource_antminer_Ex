int __fastcall read_ints_repair_code(int a1, int a2)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 31; ++i )
  {
    if ( _isoc99_fscanf(a1, "%08x", a2 + 4 * i) != 1 )
      return 0;
  }
  return 1;
}
