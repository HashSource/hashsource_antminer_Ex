_DWORD *__fastcall sub_1D1BE8(_DWORD *result)
{
  _DWORD *v1; // r8
  _DWORD *i; // r6
  int v3; // r7
  int v4; // r4
  int v5; // r5
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r1
  const char *v10; // r1
  int v11; // r10
  _DWORD *v12; // r0
  int v13; // r10
  _DWORD *v14; // r0
  char *v15; // r1
  int v16; // r9
  int v17; // r0
  const char *v18; // r10
  char *v19; // r0
  const char *v20; // r0
  char *v21; // r0
  _DWORD *v22; // [sp+8h] [bp-Ch]

  v1 = result;
  if ( result )
    result = (_DWORD *)re_comp(result);
  v22 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v22[9]; i; i = (_DWORD *)*i )
      {
        v3 = sub_1B7278((int)i);
        result = sub_1D08A0(i, 1);
        v4 = result[6];
        if ( v4 )
        {
          v5 = 0;
          do
          {
            sub_258BFC(result);
            if ( !v1 || (result = (_DWORD *)re_exec(*(_DWORD *)(v4 + 4))) != 0 )
            {
              if ( !v5 )
              {
                v20 = (const char *)sub_1B87D0((int)i);
                sub_259F38("{ objfile %s ", v20);
                sub_259B80("  ");
                v21 = sub_98F14((int)i);
                sub_259F38("((struct objfile *) %s)\n", v21);
              }
              sub_259F38("  { psymtab %s ", *(const char **)(v4 + 4));
              sub_259B80("    ");
              v8 = sub_98F14(v4);
              sub_259F38("((struct partial_symtab *) %s)\n", v8);
              if ( *(_BYTE *)(v4 + 52) )
                v9 = "yes";
              else
                v9 = "no";
              sub_259F38("    readin %s\n", v9);
              v10 = *(const char **)(v4 + 8);
              if ( !v10 )
                v10 = "(null)";
              sub_259F38("    fullname %s\n", v10);
              sub_259F38("    text addresses ");
              v11 = sub_25ACB4(v3, *(_DWORD *)(v4 + 16));
              v12 = (_DWORD *)sub_242FB4(v11);
              sub_25A6E4(v11, *v12);
              sub_259F38(" -- ");
              v13 = sub_25ACB4(v3, *(_DWORD *)(v4 + 20));
              v14 = (_DWORD *)sub_242FB4(v13);
              sub_25A6E4(v13, *v14);
              sub_259F38((const char *)&word_356660);
              if ( *(_BYTE *)(v4 + 53) )
                v15 = "yes";
              else
                v15 = "no";
              sub_259F38("    psymtabs_addrmap_supported %s\n", v15);
              sub_259F38("    globals ");
              if ( *(_DWORD *)(v4 + 40) )
              {
                v6 = sub_98F14(i[27] + 4 * *(_DWORD *)(v4 + 36));
                sub_259F38("(* (struct partial_symbol **) %s @ %d)\n", v6, *(_DWORD *)(v4 + 40));
              }
              else
              {
                sub_259F38("(none)\n");
              }
              sub_259F38("    statics ");
              if ( *(_DWORD *)(v4 + 48) )
              {
                v7 = sub_98F14(i[30] + 4 * *(_DWORD *)(v4 + 44));
                sub_259F38("(* (struct partial_symbol **) %s @ %d)\n", v7, *(_DWORD *)(v4 + 48));
              }
              else
              {
                sub_259F38("(none)\n");
              }
              sub_259F38("    dependencies ");
              if ( *(_DWORD *)(v4 + 32) )
              {
                sub_259F38("{\n");
                if ( *(int *)(v4 + 32) > 0 )
                {
                  v16 = 0;
                  do
                  {
                    v17 = *(_DWORD *)(*(_DWORD *)(v4 + 28) + 4 * v16++);
                    v18 = *(const char **)(v17 + 4);
                    v19 = sub_98F14(v17);
                    sub_259F38("      psymtab %s ((struct partial_symtab *) %s)\n", v18, v19);
                  }
                  while ( *(_DWORD *)(v4 + 32) > v16 );
                }
                sub_259F38("    }\n");
              }
              else
              {
                sub_259F38("(none)\n");
              }
              v5 = 1;
              result = (_DWORD *)sub_259F38("  }\n");
            }
            v4 = *(_DWORD *)v4;
          }
          while ( v4 );
          if ( v5 )
            result = (_DWORD *)sub_259F38("}\n");
        }
      }
      v22 = (_DWORD *)*v22;
    }
    while ( v22 );
  }
  return result;
}
