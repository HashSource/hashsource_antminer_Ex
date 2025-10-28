int __fastcall sub_217B3C(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r7
  _DWORD *v5; // r4
  int v6; // r5
  bool v7; // zf
  int v8; // r0
  char *v9; // r0
  const char *v10; // r1
  char *v11; // r0
  int v12; // r0
  const char *v13; // r0
  char *v14; // r0
  char *v15; // r0
  const char *v16; // r1
  const char *v17; // r1
  char *v18; // r0
  _DWORD *v19; // [sp+4h] [bp-10h]
  _DWORD *v20; // [sp+8h] [bp-Ch]

  result = sub_243C5C(a1);
  if ( a1 )
    result = re_comp(a1);
  v20 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      v19 = (_DWORD *)v20[9];
      if ( !v19 )
        goto LABEL_30;
      do
      {
        v3 = v19[5];
        if ( !v3 )
          goto LABEL_29;
        v4 = 0;
        do
        {
          v5 = *(_DWORD **)(v3 + 12);
          if ( !v5 )
            goto LABEL_26;
          v6 = 0;
          do
          {
            sub_258BFC(result);
            if ( a1 )
            {
              v12 = ((int (__fastcall *)(_DWORD *))loc_2043FC)(v5);
              result = re_exec(v12);
              if ( !result )
                goto LABEL_13;
            }
            if ( v4 )
            {
              v7 = v6 == 0;
              v6 = 1;
              v4 = 1;
              if ( v7 )
                goto LABEL_19;
            }
            else
            {
              v13 = (const char *)sub_1B87D0((int)v19);
              sub_259F38("{ objfile %s ", v13);
              sub_259B80("  ");
              v14 = sub_98F14((int)v19);
              sub_259F38("((struct objfile *) %s)\n", v14);
              v7 = v6 == 0;
              v6 = 1;
              v4 = 1;
              if ( v7 )
              {
LABEL_19:
                v15 = sub_98F14(v3);
                sub_259F38("  { ((struct compunit_symtab *) %s)\n", v15);
                sub_259F38("    debugformat %s\n", *(const char **)(v3 + 20));
                v16 = *(const char **)(v3 + 24);
                if ( !v16 )
                  v16 = "(null)";
                sub_259F38("    producer %s\n", v16);
                v17 = *(const char **)(v3 + 28);
                if ( !v17 )
                  v17 = "(null)";
                sub_259F38("    dirname %s\n", v17);
                v18 = sub_98F14(*(_DWORD *)(v3 + 32));
                sub_259F38("    blockvector ((struct blockvector *) %s)\n", v18);
              }
            }
            v8 = ((int (__fastcall *)(_DWORD *))loc_2043FC)(v5);
            sub_259F38("\t{ symtab %s ", v8);
            sub_259B80("    ");
            v9 = sub_98F14((int)v5);
            sub_259F38("((struct symtab *) %s)\n", v9);
            v10 = (const char *)v5[7];
            if ( !v10 )
              v10 = "(null)";
            sub_259F38("\t  fullname %s\n", v10);
            v11 = sub_98F14(v5[2]);
            sub_259F38("\t  linetable ((struct linetable *) %s)\n", v11);
            result = sub_259F38("\t}\n");
LABEL_13:
            v5 = (_DWORD *)*v5;
          }
          while ( v5 );
          if ( v6 )
            result = sub_259F38("  }\n");
LABEL_26:
          v3 = *(_DWORD *)v3;
        }
        while ( v3 );
        if ( v4 )
          result = sub_259F38("}\n");
LABEL_29:
        v19 = (_DWORD *)*v19;
      }
      while ( v19 );
LABEL_30:
      v20 = (_DWORD *)*v20;
    }
    while ( v20 );
  }
  return result;
}
