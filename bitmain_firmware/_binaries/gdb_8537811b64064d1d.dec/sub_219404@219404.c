int __fastcall sub_219404(int a1)
{
  _DWORD *v2; // r0
  _BYTE *v3; // r7
  const char **v4; // r6
  const char *v5; // r9
  const char *v6; // r4
  int v7; // r10
  const char *v8; // r7
  int v9; // r11
  const char *v10; // r5
  int v11; // r11
  int v12; // r6
  int v13; // r0
  int v14; // r5
  void *v15; // r5
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v19; // r9
  int v20; // r0
  _DWORD *i; // r8
  _DWORD *j; // r5
  int v23; // r0
  const char *v24; // r11
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // [sp+0h] [bp-2Ch]
  _BYTE *v28; // [sp+8h] [bp-24h]
  const char **v29; // [sp+14h] [bp-18h] BYREF
  _BYTE v30[16]; // [sp+18h] [bp-14h] BYREF

  v2 = (_DWORD *)sub_242FB4(a1);
  v3 = (_BYTE *)*v2;
  sub_243C5C(v2);
  v29 = 0;
  sub_25B104(&v29, a1);
  v4 = v29;
  if ( !v29 )
  {
    v6 = 0;
LABEL_51:
    v27 = v6;
    v5 = v6;
    v10 = v6;
    v12 = (int)v6;
    v11 = (int)v6;
    goto LABEL_19;
  }
  if ( !*v29 )
  {
    v6 = *v29;
    goto LABEL_51;
  }
  v5 = 0;
  v27 = 0;
  v6 = 0;
  v28 = v3;
  v7 = 1;
  v8 = *v29;
  while ( 1 )
  {
    if ( !strcmp(v8, "-pc") )
    {
      v5 = v4[v7];
      if ( !v5 )
        sub_94708("Missing pc value");
      goto LABEL_5;
    }
    if ( strcmp(v8, "-source") )
      break;
    v6 = v4[v7];
    if ( !v6 )
      sub_94708("Missing source file");
LABEL_5:
    v9 = v7 + 1;
    v7 += 2;
    v8 = v4[v9];
    if ( !v8 )
    {
      v3 = v28;
      v10 = (const char *)v9;
      goto LABEL_14;
    }
  }
  if ( !strcmp(v8, "-objfile") )
  {
    v27 = v4[v7];
    if ( !v27 )
      sub_94708("Missing objfile name");
    goto LABEL_5;
  }
  v10 = (const char *)(v7 - 1);
  v24 = v8;
  v25 = v8;
  v3 = v28;
  if ( !strcmp(v25, "--") )
  {
    v10 = (const char *)v7;
  }
  else if ( *v24 == 45 )
  {
    v26 = (const char *)sub_2197B8(&v29, v7 - 1);
    sub_94708("Unknown option: %s", v26);
  }
LABEL_14:
  v11 = (int)v5;
  if ( v5 )
    v11 = 1;
  v12 = (int)v6;
  if ( v6 )
    v12 = 1;
  if ( (v11 & v12) != 0 )
    sub_94708("Must specify at most one of -pc and -source");
LABEL_19:
  v13 = sub_2568C4(v30);
  if ( v29 )
  {
    v13 = (int)v29[(_DWORD)v10];
    v14 = (int)v10;
    if ( v13 )
    {
      if ( v29[v14 + 1] )
        sub_94708("Junk at end of command");
      v15 = (void *)sub_29B938(v13);
      v13 = sub_2568FC(v30, v15, "w");
      if ( !v13 )
        sub_258B2C(v15);
      v3 = v30;
      if ( v15 )
        free(v15);
    }
  }
  if ( v11 )
  {
    v16 = sub_14CBC4((int)v5);
    v17 = (_DWORD *)sub_21E264(v16);
    if ( !v17 )
      sub_94708("No symtab for address: %s", v5);
    sub_2188D0(v17, (int)v3);
  }
  else
  {
    v19 = *(_DWORD **)(dword_487D2C + 36);
    if ( v19 )
    {
      do
      {
        if ( !v27 || (v20 = sub_1B87D0((int)v19), (v13 = sub_21A71C(v20, v27)) != 0) )
        {
          for ( i = (_DWORD *)v19[5]; i; i = (_DWORD *)*i )
          {
            for ( j = (_DWORD *)i[3]; j; j = (_DWORD *)*j )
            {
              while ( 1 )
              {
                sub_258BFC(v13);
                if ( !v12 )
                  break;
                v23 = ((int (__fastcall *)(_DWORD *))loc_2043FC)(j);
                v11 = 1;
                v13 = sub_21A71C(v23, v6) != 0;
                if ( !v6 )
                  v13 = 1;
                if ( v13 )
                  break;
                j = (_DWORD *)*j;
                if ( !j )
                  goto LABEL_41;
              }
              sub_2188D0(j, (int)v3);
            }
LABEL_41:
            ;
          }
        }
        v19 = (_DWORD *)*v19;
      }
      while ( v19 );
      v12 &= v11 ^ 1;
    }
    if ( v12 )
      sub_94708("No symtab for source file: %s", v6);
  }
  sub_25653C(v30);
  return sub_31DAF8(v29);
}
