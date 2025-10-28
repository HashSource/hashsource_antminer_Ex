int __fastcall read_ints_fail_map(int a1, int a2)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 10319; ++i )
  {
    if ( _isoc99_fscanf(a1, "%u", a2 + i) != 1 )
      return 0;
  }
  return 1;
}
