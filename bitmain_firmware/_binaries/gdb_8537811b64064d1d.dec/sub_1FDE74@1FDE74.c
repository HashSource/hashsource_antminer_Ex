int __fastcall sub_1FDE74(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0

  v4 = (*(int (**)(void))(*(_DWORD *)(a1 + 12) + 16))();
  v5 = dword_489374;
  if ( dword_489374 )
  {
    sub_1FD9BC(dword_489374, 114, v4, a2);
    v5 = sub_256834(dword_489374);
  }
  if ( *(_DWORD *)(a1 + 8228) || dword_489388 )
  {
    v6 = (_DWORD *)sub_242FF0(v5);
    v7 = sub_2594D8(*v6, "[");
    v8 = (int *)sub_242FF0(v7);
    v9 = sub_1FD9BC(*v8, 114, v4, a2);
    v10 = (_DWORD *)sub_242FF0(v9);
    v11 = sub_2594D8(*v10, (const char *)&word_419FF0);
    v12 = (_DWORD *)sub_242FF0(v11);
    sub_256834(*v12);
  }
  return v4;
}
