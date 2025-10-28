int __fastcall target_to_diff(int a1, int a2)
{
  int j; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  for ( i = 0; i < a2; ++i )
  {
    for ( j = 7; j >= 0; --j )
    {
      if ( (int)*(unsigned __int8 *)(a1 + i) >> j )
        return v6;
      ++v6;
    }
  }
  return v6;
}
