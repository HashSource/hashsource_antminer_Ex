int __fastcall sub_E93F4(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // r3
  int v10; // r5
  unsigned int v11; // r5
  int v12; // r3
  int v13; // r10
  int v14; // r6
  int v15; // r2
  bool v16; // zf

  result = (*(int (**)(void))(a1[22] + 24))();
  if ( !result )
  {
    result = a1[14];
    v9 = a1[18];
    v10 = a3 ^ 1;
    *(_DWORD *)(v9 + 172 * result) = a2;
    if ( v10 == a4 )
    {
      v16 = result == 1;
      if ( result <= 1 )
        v16 = a2 == 42;
      if ( v16 )
      {
        result = (int)memcpy((void *)(v9 + 172 * result + 176), (const void *)(v9 + 172 * result + 4), 0xA8u);
        ++a1[14];
      }
    }
    else if ( a2 != 42 )
    {
      v11 = *(_DWORD *)(a1[17] + 4 * v10);
      if ( a1[13] != v11 )
      {
        (*(void (**)(void))(a1[22] + 20))();
        if ( v11 != a1[13] )
        {
          v12 = a1[19];
          v13 = 4 * a2;
          v14 = a2 + 1;
          do
          {
            v15 = *(_DWORD *)(v12 + 8 * (v11 ^ 1) + 4);
            *(_DWORD *)(a1[18] + 172 * a1[14] + v13 + 4) = v11 >> 1;
            sub_E93F4(a1, v14, v15, a4);
            v12 = a1[19];
            v11 = *(_DWORD *)(v12 + 8 * v11);
          }
          while ( a1[13] != v11 );
        }
        return (*(int (**)(void))(a1[22] + 16))();
      }
    }
  }
  return result;
}
