int __fastcall sub_66298(const char *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r6
  int v8; // r0
  int v9; // r4
  int *v10; // r0
  int v11; // r11
  int *v12; // r7
  const char *v13; // r3
  int v14; // r1
  int result; // r0
  int v16; // r1
  char *ptr; // [sp+14h] [bp-10h]
  __int64 v20; // [sp+18h] [bp-Ch] BYREF

  v7 = sub_191AF8();
  if ( sub_191768("mi") || sub_191768("mi2") )
  {
    v8 = sub_69260(2);
    v9 = v8;
  }
  else if ( sub_191768("mi1") )
  {
    v8 = sub_69260(1);
    v9 = v8;
  }
  else
  {
    result = sub_191768("mi3");
    if ( !result )
      return result;
    v8 = sub_69260(3);
    v9 = v8;
  }
  v10 = (int *)sub_243004(v8);
  v11 = *v10;
  v12 = v10;
  v13 = (const char *)dword_474888;
  *v10 = v9;
  if ( !v13 )
    goto LABEL_7;
  ptr = (char *)v13;
  if ( strcmp(v13, a1) )
  {
    free(ptr);
LABEL_7:
    dword_474888 = sub_32727C(a1);
    v14 = *(_DWORD *)(v7 + 36);
    if ( dword_474874 )
    {
      sub_256878(dword_474874, v14);
      v14 = *(_DWORD *)(v7 + 36);
    }
    sub_256878("+download", v14);
    sub_2578D4(v9, 0);
    sub_257610(v9, "section", a1);
    sub_25752C(v9, "section-size", a3);
    sub_25752C(v9, "total-size", a5);
    sub_257374(v9, 0);
    sub_690D0(v9, *(_DWORD *)(v7 + 36));
    sub_256878(&word_356660, *(_DWORD *)(v7 + 36));
    sub_256834(*(_DWORD *)(v7 + 36));
  }
  sub_33B284(&v20);
  result = 500000000;
  if ( v20 - qword_474890 > 500000000 )
  {
    v16 = *(_DWORD *)(v7 + 36);
    qword_474890 = v20;
    if ( dword_474874 )
    {
      sub_256878(dword_474874, v16);
      v16 = *(_DWORD *)(v7 + 36);
    }
    sub_256878("+download", v16);
    sub_2578D4(v9, 0);
    sub_257610(v9, "section", a1);
    sub_25752C(v9, "section-sent", a2);
    sub_25752C(v9, "section-size", a3);
    sub_25752C(v9, "total-sent", a4);
    sub_25752C(v9, "total-size", a5);
    sub_257374(v9, 0);
    sub_690D0(v9, *(_DWORD *)(v7 + 36));
    sub_256878(&word_356660, *(_DWORD *)(v7 + 36));
    result = sub_256834(*(_DWORD *)(v7 + 36));
  }
  *v12 = v11;
  if ( v9 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  return result;
}
