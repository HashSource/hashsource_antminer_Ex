int __fastcall sub_136A8(int a1, int a2, int a3, int a4)
{
  _BOOL4 v4; // r12
  int v5; // r12
  int v6; // r4
  int v7; // lr
  int v8; // r5

  v4 = a3 >= a4;
  if ( a3 <= a2 )
    v4 = 1;
  if ( v4 )
    return 0;
  v5 = a3;
  v6 = a3;
  v7 = a2;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 4 * v7);
      *(_DWORD *)(a1 + 4 * v7++) = *(_DWORD *)(a1 + 4 * v5);
      *(_DWORD *)(a1 + 4 * v5++) = v8;
      if ( v6 == v7 )
        break;
      if ( a4 == v5 )
        v5 = v6;
    }
    v6 = v5;
  }
  while ( a4 != v5 );
  return a3 - a2;
}
