int __fastcall sub_1A02B0(const char *a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r4
  int v19; // r3
  int v20; // r8
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0

  v8 = (_DWORD *)sub_242FB4(a1);
  v9 = sub_25A440(*v8, "Defined at ");
  v10 = (int *)sub_242FB4(v9);
  v11 = sub_1A0214(*v10, a3, a4);
  if ( a4 )
  {
    v12 = (_DWORD *)sub_242FB4(v11);
    v13 = sub_25A440(*v12, "#define %s", a1);
    if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
    {
LABEL_3:
      v14 = (_DWORD *)sub_242FB4(v13);
      return sub_25A440(*v14, " %s\n", *(_DWORD *)(a2 + 12));
    }
  }
  else
  {
    v15 = (_DWORD *)sub_242FB4(v11);
    v13 = sub_25A440(*v15, "-D%s", a1);
    if ( (*(_BYTE *)(a2 + 4) & 1) == 0 )
      goto LABEL_10;
  }
  v16 = (_DWORD *)sub_242FB4(v13);
  v17 = sub_25A6E4("(", *v16);
  v18 = 0;
  v19 = (2 * *(_DWORD *)(a2 + 4)) >> 2;
  while ( v19 > v18 )
  {
    while ( 1 )
    {
      v20 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v18++);
      v21 = (_DWORD *)sub_242FB4(v17);
      v17 = sub_25A6E4(v20, *v21);
      v19 = (2 * *(_DWORD *)(a2 + 4)) >> 2;
      if ( v18 >= v19 )
        break;
      v22 = (_DWORD *)sub_242FB4(v17);
      v17 = sub_25A6E4(", ", *v22);
      if ( (2 * *(_DWORD *)(a2 + 4)) >> 2 <= v18 )
        goto LABEL_9;
    }
  }
LABEL_9:
  v23 = (_DWORD *)sub_242FB4(v17);
  v13 = sub_25A6E4(")", *v23);
  if ( a4 )
    goto LABEL_3;
LABEL_10:
  v24 = (_DWORD *)sub_242FB4(v13);
  return sub_25A440(*v24, "=%s\n", *(_DWORD *)(a2 + 12));
}
