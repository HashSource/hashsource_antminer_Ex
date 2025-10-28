int __fastcall sub_1FDF2C(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r9
  int v9; // t1
  int v10; // r4
  _DWORD *v11; // r0
  int v12; // r0
  int *v13; // r0
  int v14; // t1
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0

  v6 = dword_489374;
  if ( dword_489374 )
  {
    if ( a3 )
    {
      v7 = a2 - 1;
      v8 = a2 + a3 - 1;
      do
      {
        v9 = *(unsigned __int8 *)++v7;
        sub_1FD9BC(v6, 119, v9, 0);
        v6 = dword_489374;
      }
      while ( v7 != v8 );
    }
    v6 = sub_256834(v6);
  }
  if ( *(_DWORD *)(a1 + 8228) || dword_489388 )
  {
    if ( a3 )
    {
      v10 = a2 - 1;
      do
      {
        v11 = (_DWORD *)sub_242FF0(v6);
        v12 = sub_2594D8(*v11, "[");
        v13 = (int *)sub_242FF0(v12);
        v14 = *(unsigned __int8 *)++v10;
        v15 = sub_1FD9BC(*v13, 119, v14, 0);
        v16 = (_DWORD *)sub_242FF0(v15);
        v6 = sub_2594D8(*v16, (const char *)&word_419FF0);
      }
      while ( v10 != a2 + a3 - 1 );
    }
    v17 = (_DWORD *)sub_242FF0(v6);
    sub_256834(*v17);
  }
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(a1 + 12) + 20))(a1, a2, a3);
}
