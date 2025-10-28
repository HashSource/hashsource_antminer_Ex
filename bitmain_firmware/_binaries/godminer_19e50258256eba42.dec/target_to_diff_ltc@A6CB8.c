int __fastcall target_to_diff_ltc(int a1)
{
  int j; // [sp+14h] [bp-20h]
  int i; // [sp+18h] [bp-1Ch]
  unsigned __int8 v5; // [sp+1Fh] [bp-15h]

  v5 = 0;
  for ( i = 24; i >= 0; i -= 8 )
  {
    for ( j = 63; j >= 0; --j )
    {
      if ( ((*(_QWORD *)(a1 + i) >> j) & 1) != 0 )
        return v5;
      ++v5;
    }
  }
  return v5;
}
