int __fastcall sub_295AC4(int a1)
{
  int v1; // r3

  dword_48FF30 = 1;
  if ( dword_48BB20 )
  {
    v1 = dword_4900D8;
    if ( dword_4900D8 == dword_4900DC )
      v1 = -1;
    dword_4707A8 = v1;
  }
  dword_48AAA0 |= 0x1000000u;
  if ( !dword_46DED4 )
  {
    sub_281FE0(a1);
    if ( !sub_2810B4(dword_46DF04) )
      sub_281038();
  }
  if ( dword_48AACC && !dword_4900D8 && !dword_4900DC )
    return 0;
  if ( dword_48AAB8 )
    sub_2905DC();
  return 0;
}
