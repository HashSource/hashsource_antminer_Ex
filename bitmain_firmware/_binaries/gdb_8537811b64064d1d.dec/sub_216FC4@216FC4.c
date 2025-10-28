int __fastcall sub_216FC4(int a1, int a2)
{
  int v4; // r4
  int v5; // r7
  const char *v6; // r8
  char *v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r5
  const char *v12; // r2
  int v13; // r0
  int *v15; // r0

  v4 = sub_1B6B4C(a1, (_DWORD *)dword_4896EC);
  v5 = *(_DWORD *)sub_242FF0(v4);
  v6 = (const char *)sub_1B87F4(a1);
  v7 = sub_98B30(a2, 0);
  v8 = sub_25A440(v5, "qf->find_compunit_symtab_by_address (%s, %s)\n", v6, v7);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 40);
  v10 = *(_DWORD *)(v9 + 60);
  if ( v10 )
  {
    v10 = (*(int (__fastcall **)(int, int))(v9 + 56))(a1, a2);
    v11 = *(_DWORD *)sub_242FF0(v10);
    if ( v10 )
    {
      v13 = sub_21A6EC(v10);
      v12 = (const char *)((int (__fastcall *)(int))loc_2043FC)(v13);
    }
    else
    {
      v12 = "NULL";
    }
  }
  else
  {
    v15 = (int *)sub_242FF0(v8);
    v12 = "NULL";
    v11 = *v15;
  }
  sub_25A440(v11, "qf->find_compunit_symtab_by_address (...) = %s\n", v12);
  return v10;
}
