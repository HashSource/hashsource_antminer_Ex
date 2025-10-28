int __fastcall sub_5DE84(_DWORD *a1)
{
  int v2; // r6
  int v3; // r4

  v2 = a1[73];
  v3 = 3;
  while ( 1 )
  {
    sub_5D914(a1, v2);
    if ( a1[96] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
