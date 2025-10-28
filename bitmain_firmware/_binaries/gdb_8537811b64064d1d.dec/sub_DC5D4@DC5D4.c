int __fastcall sub_DC5D4(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  _DWORD *i; // r6

  a1[4] = 0;
  sub_CA29C((int)(a1 + 3), a1 + 7);
  if ( off_489B54(&dword_4899A0) )
  {
    if ( *(_DWORD *)(sub_24976C() + 8) )
    {
      if ( (unsigned int)(a1[3] - 27) <= 2 )
      {
        for ( i = (_DWORD *)a1[7]; i; i = (_DWORD *)*i )
          off_489BA8(&dword_4899A0, i);
      }
    }
  }
  sub_D7314(0, v2, v3);
  return sub_1B9D78(a1);
}
