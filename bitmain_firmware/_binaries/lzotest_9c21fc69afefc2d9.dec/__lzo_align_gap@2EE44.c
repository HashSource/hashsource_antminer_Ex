int __fastcall _lzo_align_gap(int a1, unsigned int a2)
{
  if ( a2 <= 1 || ((a2 - 1) & a2) != 0 )
    return 0;
  else
    return ((a1 - 1 + a2) & -a2) - a1;
}
