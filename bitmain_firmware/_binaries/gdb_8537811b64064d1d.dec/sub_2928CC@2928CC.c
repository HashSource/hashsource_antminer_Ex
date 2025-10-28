int __fastcall sub_2928CC(int a1)
{
  int v1; // r4
  int v2; // r1

  v1 = a1;
  if ( a1 > 0 )
  {
    while ( 1 )
    {
      a1 = sub_292508(a1);
      if ( !a1 )
        break;
      if ( !--v1 )
        return 0;
    }
    sub_2945F0(0, v2);
  }
  return 0;
}
