int __fastcall hashtable_del(_DWORD *a1, char *s)
{
  size_t v4; // r0
  int *v5; // r3
  int v6; // r0
  int v7; // r9
  int v8; // r5
  int *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r4
  _DWORD *v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // r1
  int v16; // r2
  _DWORD *v17; // r0
  int v18; // r3
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  bool v23; // zf

  v4 = strlen(s);
  LOWORD(v5) = 24204;
  HIWORD(v5) = (unsigned int)&unk_164D64 >> 16;
  v6 = sub_33E34((unsigned __int16 *)s, v4, *v5);
  v7 = a1[1];
  v8 = v6 & ~(-1 << a1[2]);
  v9 = (int *)(v7 + 8 * v8);
  v10 = (_DWORD *)sub_34378((int)a1, v9, s, v6);
  v11 = v10;
  if ( !v10 )
    return -1;
  v12 = (_DWORD *)v9[1];
  v13 = v10[1];
  v14 = *v10;
  if ( v10 == *(_DWORD **)(v7 + 8 * v8) )
  {
    v23 = v10 == v12;
    if ( v10 == v12 )
      v12 = a1 + 3;
    else
      *(_DWORD *)(v7 + 8 * v8) = v13;
    if ( v23 )
    {
      v9[1] = (int)v12;
      *(_DWORD *)(v7 + 8 * v8) = v12;
    }
  }
  else if ( v10 == v12 )
  {
    v9[1] = v14;
  }
  *(_DWORD *)(v14 + 4) = v13;
  v15 = (int *)v10[1];
  v16 = v10[3];
  v17 = (_DWORD *)v10[5];
  *v15 = v14;
  v18 = v11[2];
  *(_DWORD *)(v18 + 4) = v16;
  *(_DWORD *)v11[3] = v18;
  if ( v17 && v17[1] != -1 )
  {
    v20 = v17 + 1;
    __dmb(0xBu);
    do
    {
      v21 = __ldrex(v20);
      v22 = v21 - 1;
    }
    while ( __strex(v22, v20) );
    if ( !v22 )
      json_delete(v17);
  }
  jsonp_free(v11);
  --*a1;
  return 0;
}
