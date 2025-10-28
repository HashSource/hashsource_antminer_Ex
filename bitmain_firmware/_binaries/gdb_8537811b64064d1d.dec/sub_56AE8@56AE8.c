int __fastcall sub_56AE8(_BYTE *a1, int a2)
{
  const char **v2; // r4
  _BYTE *v3; // r5
  _DWORD *v5; // r0
  int result; // r0
  int v7; // r5
  char *v8; // r2
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  const char *v12; // r1
  int v13; // r0
  _DWORD *v14; // r0
  int *v15; // r0
  int v16; // r4
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  int v19; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  if ( !a1 )
    LOWORD(v2) = 18416;
  if ( a1 )
  {
    v2 = (const char **)&dword_4747F0;
    if ( *a1 )
    {
      if ( dword_4747F0 )
        free((void *)dword_4747F0);
      a1 = (_BYTE *)sub_32727C(v3);
      dword_4747F0 = (int)a1;
    }
  }
  else
  {
    HIWORD(v2) = 71;
  }
  if ( v2[1] )
  {
    v5 = (_DWORD *)sub_242FB4(a1);
    return sub_2594D8(*v5, "Already logging to %s.\n", v2[1]);
  }
  else
  {
    v7 = sub_98394(16);
    sub_2568C4();
    v8 = "w";
    if ( !v2[2] )
      v8 = "a";
    v9 = sub_2568FC(v7, *v2, v8);
    if ( !v9 )
      sub_258B2C("set logging");
    if ( a2 )
    {
      if ( v2[3] )
      {
        v18 = (_DWORD *)sub_242FB4(v9);
        sub_2594D8(*v18, "Redirecting output to %s.\n", *v2);
      }
      else
      {
        v10 = (_DWORD *)sub_242FB4(v9);
        sub_2594D8(*v10, "Copying output to %s.\n", *v2);
      }
    }
    v11 = sub_32727C(*v2);
    v12 = v2[3];
    v2[1] = (const char *)v11;
    v19 = v7;
    sub_1916B4(&v19, v12 != 0);
    v13 = v19;
    if ( v19 )
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
    v14 = (_DWORD *)sub_243004(v13);
    result = sub_257418(*v14);
    if ( !result )
    {
      v15 = (int *)sub_243004(0);
      v16 = *v15;
      v17 = (_DWORD *)sub_242FB4(v15);
      return sub_257400(v16, *v17);
    }
  }
  return result;
}
