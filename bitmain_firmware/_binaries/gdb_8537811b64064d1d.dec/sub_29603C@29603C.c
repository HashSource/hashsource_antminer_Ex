int __fastcall sub_29603C(int a1, int a2)
{
  if ( a1 < 0 )
    return sub_295CC4(-a1, a2);
  if ( dword_4900D8 )
  {
    if ( dword_46DEEC )
      return sub_295EFC(a1, a2);
    else
      return sub_295BD0(a1, a2);
  }
  else
  {
    sub_2945F0();
    return -1;
  }
}
