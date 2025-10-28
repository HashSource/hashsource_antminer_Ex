int __fastcall initialization(int result, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // r7
  int i; // lr
  _DWORD *v10; // r4
  _DWORD *v11; // r2
  _DWORD *v12; // r2
  int v13; // r2
  _DWORD *v14; // r3
  _DWORD *v15; // r2

  if ( a2 > 0 )
  {
    v8 = 0;
    for ( i = 0; i != a2; ++i )
    {
      if ( a3 > 0 )
      {
        v10 = (_DWORD *)(result + 4 * v8);
        do
          *v10++ = 0;
        while ( v10 != (_DWORD *)(result + 4 * (a3 + v8)) );
      }
      v8 += 4;
    }
  }
  if ( a4 > 0 )
  {
    v11 = a6;
    result = 1;
    do
      *v11++ = 1;
    while ( v11 != &a6[a4] );
  }
  if ( a5 > 0 )
  {
    v12 = a7;
    result = 1;
    do
      *v12++ = 1;
    while ( v12 != &a7[a5] );
  }
  v13 = a4 + a5;
  if ( a4 + a5 > 0 )
  {
    v14 = a8;
    v15 = &a8[v13];
    do
      *v14++ = 0;
    while ( v14 != v15 );
  }
  return result;
}
