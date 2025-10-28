_DWORD *__fastcall sub_E8D54(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v9; // r2
  int v10; // r5
  int v11; // r3
  int v12; // r10
  int v13; // r7
  int v14; // r2

  result = (_DWORD *)(*(int (**)(void))(a1[22] + 24))();
  if ( !result )
  {
    v9 = a1[14];
    result = (_DWORD *)a1[18];
    result[43 * v9] = a2;
    if ( a3 == a4 )
    {
      if ( a2 == 42 && v9 < a1[15] )
      {
        result = memcpy(&result[43 * v9 + 44], &result[43 * v9 + 1], 0xA8u);
        ++a1[14];
      }
    }
    else if ( a2 != 42 )
    {
      v10 = *(_DWORD *)(a1[17] + 4 * a3);
      if ( a1[13] != v10 )
      {
        (*(void (**)(void))(a1[22] + 20))();
        if ( v10 != a1[13] )
        {
          v11 = a1[19];
          v12 = 4 * a2;
          v13 = a2 + 1;
          do
          {
            v14 = *(_DWORD *)(v11 + 8 * v10 + 4);
            *(_DWORD *)(a1[18] + 172 * a1[14] + v12 + 4) = v10;
            sub_E8D54(a1, v13, v14, a4);
            v11 = a1[19];
            v10 = *(_DWORD *)(v11 + 8 * v10);
          }
          while ( a1[13] != v10 );
        }
        return (_DWORD *)(*(int (**)(void))(a1[22] + 16))();
      }
    }
  }
  return result;
}
