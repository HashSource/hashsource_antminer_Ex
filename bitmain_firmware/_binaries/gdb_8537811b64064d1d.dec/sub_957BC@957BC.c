int __fastcall sub_957BC(int a1, const char **a2)
{
  int v4; // r4
  int v5; // r7
  int result; // r0
  int v7; // r4
  int v8; // r10
  int v9; // r0
  unsigned int v10; // r8
  const char **v11; // r5
  int v12; // r0
  int v13; // r0
  const char *v14; // r0
  _DWORD *v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r1
  unsigned int v18; // r2
  unsigned int v19; // r12
  unsigned int v20; // r5
  int v21; // r0
  const char *v22; // r0

  v4 = sub_B834C(a2);
  if ( ((int (*)(void))loc_166694)() > 32 )
    v5 = 16;
  else
    v5 = 8;
  sub_259F38("\t`%s', ", *a2);
  sub_259B80("        ");
  result = sub_259F38("file type %s.\n", *(const char **)a2[1]);
  if ( *(const char ***)(dword_487D2C + 8) == a2 )
  {
    v15 = *(_DWORD **)a1;
    v16 = *(_DWORD **)(a1 + 4);
    if ( *(_DWORD *)a1 >= (unsigned int)v16 )
    {
LABEL_18:
      v20 = 0;
    }
    else
    {
      while ( 1 )
      {
        v17 = (_DWORD *)v15[2];
        if ( (v17[5] & 3) == 3 )
        {
          v18 = v17[7];
          v19 = (unsigned int)a2[29];
          if ( v18 <= v19 && v19 < v18 + v17[9] )
            break;
        }
        v15 += 4;
        if ( v15 >= v16 )
          goto LABEL_18;
      }
      v20 = *v15 - v18;
    }
    if ( v15 == v16 )
      sub_946D8("Cannot find section for the entry point of %s.", *a2);
    v21 = ((int (__fastcall *)(int, const char *))loc_169FC8)(v4, &a2[29][v20]);
    v22 = (const char *)sub_25ACB4(v4, v21);
    result = sub_259F38("\tEntry point: %s\n", v22);
  }
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)a1 )
  {
    v7 = *(_DWORD *)a1 + 16;
    do
    {
      v8 = *(_DWORD *)(v7 - 8);
      v9 = *(_DWORD *)(v7 - 16);
      v10 = v7;
      v7 += 16;
      v11 = *(const char ***)(v8 + 148);
      v12 = sub_98B88(v9, 0, v5);
      sub_259F38("\t%s", v12);
      v13 = sub_98B88(*(_DWORD *)(v7 - 28), 0, v5);
      sub_259F38(" - %s", v13);
      if ( dword_48A514 )
      {
        v14 = (const char *)sub_98B88(*(_DWORD *)(v8 + 80), *(_DWORD *)(v8 + 84), 8);
        sub_259F38(" @ %s", v14);
      }
      sub_259F38(" is %s", *(const char **)v8);
      if ( v11 != a2 )
        sub_259F38(" in %s", *v11);
      result = sub_259F38((const char *)&word_356660);
    }
    while ( v10 < *(_DWORD *)(a1 + 4) );
  }
  return result;
}
