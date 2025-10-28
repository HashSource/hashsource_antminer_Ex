int __fastcall sub_295DE4(int a1, int a2)
{
  int v5; // r4
  char v6[20]; // [sp+0h] [bp-14h] BYREF

  if ( a1 > 0 )
  {
    if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
      sub_2935A8(a2, v6, 16);
    sub_292720();
    v5 = 0;
    do
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      {
        sub_294B80(1, a2);
      }
      else if ( v6[0] )
      {
        sub_294770(v6);
      }
      ++v5;
      if ( dword_4900D8 < dword_4900DC )
        sub_295CC4(1, a2);
    }
    while ( a1 != v5 );
  }
  else
  {
    sub_292720();
  }
  sub_292770();
  return 0;
}
