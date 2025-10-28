int __fastcall be256_target_to_diff_base(int a1)
{
  int j; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  unsigned __int8 v5; // [sp+17h] [bp-5h]

  v5 = 0;
  for ( i = 0; i <= 31; ++i )
  {
    for ( j = 7; j >= 0; --j )
    {
      if ( (((int)*(unsigned __int8 *)(a1 + i) >> j) & 1) != 0 )
        return v5;
      ++v5;
    }
  }
  return v5;
}
