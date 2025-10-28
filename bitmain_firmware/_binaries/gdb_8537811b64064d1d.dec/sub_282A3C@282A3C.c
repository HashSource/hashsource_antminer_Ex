int __fastcall sub_282A3C(int a1, int a2, int a3)
{
  int v6; // r10
  int v7; // r0

  while ( a1 )
  {
    v6 = dword_4900D8;
    if ( dword_4900D8 >= dword_4900DC )
      break;
    sub_28261C(1, a2);
    if ( dword_4900D8 < v6 )
      ++dword_4900D8;
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      sub_295A30(1, a2);
    else
      sub_294F64(a3);
    --a1;
  }
  v7 = sub_295374(1, a2);
  sub_292770(v7);
  return 0;
}
