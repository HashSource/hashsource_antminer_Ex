int __fastcall sub_37C78(int *a1, int **a2)
{
  int v4; // r6
  int v6; // r7
  bool v7; // zf
  int v8; // r8
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r2
  char *v17; // r7
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r9
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r0
  int v26; // r2
  unsigned int *v27; // r3
  unsigned int v28; // r1
  unsigned int v29; // r1
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r8
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r1
  unsigned int *v39; // r3
  unsigned int v40; // r2
  unsigned int v41; // r2
  _QWORD *v42; // r3
  __int64 v43; // r0
  unsigned int *v44; // r3
  unsigned int v45; // r2
  unsigned int v46; // r2
  int v47; // r0
  unsigned int *v49; // r3
  unsigned int v50; // r2
  unsigned int v51; // r2
  int v52; // r0
  unsigned int *v53; // r3
  unsigned int v54; // r2
  int v55; // [sp+8h] [bp-14h]
  int v56; // [sp+Ch] [bp-10h]
  size_t v57; // [sp+10h] [bp-Ch] BYREF
  _DWORD v58[2]; // [sp+14h] [bp-8h] BYREF

  switch ( *((_BYTE *)a1 + 36) )
  {
    case 'I':
      v42 = (_QWORD *)(((unsigned int)*a2 + 7) & 0xFFFFFFF8);
      v43 = *v42;
      *a2 = (int *)(v42 + 1);
      v4 = json_integer(v43, HIDWORD(v43));
      if ( v4 )
        return v4;
      goto LABEL_49;
    case 'O':
      return sub_37B9C((int)a1, a2, 1);
    case '[':
      v4 = json_array(a1);
      sub_36BF8(a1);
      while ( 2 )
      {
        if ( *((_BYTE *)a1 + 36) == 93 )
        {
          if ( !a1[19] )
            return v4;
        }
        else
        {
          if ( *((_BYTE *)a1 + 36) )
          {
            sub_36BF8(a1);
            v30 = a1[7];
            v31 = a1[8];
            v32 = a1[9];
            v33 = *((unsigned __int8 *)a1 + 36);
            a1[10] = a1[6];
            a1[11] = v30;
            a1[12] = v31;
            a1[13] = v32;
            v34 = a1[3];
            v35 = a1[4];
            v36 = a1[5];
            a1[6] = a1[2];
            a1[7] = v34;
            a1[8] = v35;
            a1[9] = v36;
            v37 = sub_37C78(a1, a2);
            v38 = v37;
            if ( v37 )
            {
              if ( !a1[19] )
                goto LABEL_95;
              if ( *(_DWORD *)(v37 + 4) != -1 )
              {
                v39 = (unsigned int *)(v37 + 4);
                __dmb(0xBu);
                do
                {
                  v40 = __ldrex(v39);
                  v41 = v40 - 1;
                }
                while ( __strex(v41, v39) );
                if ( !v41 )
                {
                  v55 = v37;
                  json_delete(v37);
                  v38 = v55;
                }
                if ( !a1[19] )
                {
LABEL_95:
                  if ( json_array_append_new(v4, v38) )
                  {
                    sub_36B98(a1, "<internal>", 1, "Unable to append to array");
                    a1[19] = 1;
                  }
                }
              }
            }
            else if ( v33 != 42 )
            {
              a1[19] = 1;
            }
            sub_36BF8(a1);
            continue;
          }
          sub_36B98(a1, "<format>", 9, "Unexpected end of format string");
        }
        break;
      }
      if ( !v4 || *(_DWORD *)(v4 + 4) == -1 )
        return 0;
      v49 = (unsigned int *)(v4 + 4);
      __dmb(0xBu);
      do
      {
        v50 = __ldrex(v49);
        v51 = v50 - 1;
      }
      while ( __strex(v51, v49) );
      goto LABEL_81;
    case 'b':
      if ( *(*a2)++ )
        return json_true(a1);
      else
        return json_false(a1);
    case 'f':
      *a2 = (int *)((((unsigned int)*a2 + 7) & 0xFFFFFFF8) + 8);
      v4 = json_real(a1);
      if ( !v4 )
        goto LABEL_49;
      if ( json_real_set() )
      {
        if ( *(_DWORD *)(v4 + 4) != -1 )
        {
          v44 = (unsigned int *)(v4 + 4);
          __dmb(0xBu);
          do
          {
            v45 = __ldrex(v44);
            v46 = v45 - 1;
          }
          while ( __strex(v46, v44) );
          if ( !v46 )
            json_delete(v4);
        }
        sub_36B98(a1, "<args>", 15, "Invalid floating point value");
        v4 = 0;
        a1[19] = 1;
      }
      return v4;
    case 'i':
      v47 = *(*a2)++;
      v4 = json_integer(v47, v47 >> 31);
      if ( !v4 )
      {
LABEL_49:
        sub_36B98(a1, "<internal>", 1, "Out of memory");
        a1[19] = 1;
      }
      return v4;
    case 'n':
      return json_null();
    case 'o':
      return sub_37B9C((int)a1, a2, 0);
    case 's':
      sub_36BF8(a1);
      v6 = *((unsigned __int8 *)a1 + 36);
      v7 = v6 == 42;
      if ( v6 != 42 )
        v7 = v6 == 63;
      v8 = v7;
      if ( v7 )
      {
        v15 = sub_36D28((int)a1, (size_t **)a2, "string", &v57, v58, v8);
        if ( !v15 )
        {
          if ( v6 == 63 && !a1[19] )
            return json_null();
          return 0;
        }
      }
      else
      {
        v9 = a1[7];
        v10 = a1[8];
        v11 = a1[9];
        a1[10] = a1[6];
        a1[11] = v9;
        a1[12] = v10;
        a1[13] = v11;
        v12 = a1[3];
        v13 = a1[4];
        v14 = a1[5];
        a1[6] = a1[2];
        a1[7] = v12;
        a1[8] = v13;
        a1[9] = v14;
        v15 = sub_36D28((int)a1, (size_t **)a2, "string", &v57, v58, v8);
        if ( !v15 )
          return 0;
      }
      if ( a1[19] )
        return 0;
      if ( v58[0] )
        return jsonp_stringn_nocheck_own(v15, v57);
      else
        return json_stringn_nocheck();
    case '{':
      v4 = json_object(a1);
      sub_36BF8(a1);
      break;
    default:
      sub_36B98(a1, "<format>", 9, "Unexpected format character '%c'", *((unsigned __int8 *)a1 + 36));
      v4 = 0;
      a1[19] = 1;
      return v4;
  }
  while ( 1 )
  {
    v16 = *((unsigned __int8 *)a1 + 36);
    if ( v16 == 125 )
    {
      if ( a1[19] )
        goto LABEL_85;
      return v4;
    }
    if ( !*((_BYTE *)a1 + 36) )
    {
      sub_36B98(a1, "<format>", 9, "Unexpected end of format string");
      goto LABEL_85;
    }
    if ( v16 != 115 )
      break;
    v17 = (char *)sub_36D28((int)a1, (size_t **)a2, "object key", &v57, v58, 0);
    sub_36BF8(a1);
    sub_36BF8(a1);
    v18 = a1[7];
    v19 = a1[8];
    v20 = a1[9];
    v21 = *((unsigned __int8 *)a1 + 36);
    a1[10] = a1[6];
    a1[11] = v18;
    a1[12] = v19;
    a1[13] = v20;
    v22 = a1[3];
    v23 = a1[4];
    v24 = a1[5];
    a1[6] = a1[2];
    a1[7] = v22;
    a1[8] = v23;
    a1[9] = v24;
    v25 = sub_37C78(a1, a2);
    v26 = v25;
    if ( v25 )
    {
      if ( !a1[19] )
        goto LABEL_16;
      if ( *(_DWORD *)(v25 + 4) != -1 )
      {
        v27 = (unsigned int *)(v25 + 4);
        __dmb(0xBu);
        do
        {
          v28 = __ldrex(v27);
          v29 = v28 - 1;
        }
        while ( __strex(v29, v27) );
        if ( !v29 )
        {
          v56 = v25;
          json_delete(v25);
          v26 = v56;
        }
        if ( a1[19] )
        {
          if ( !v58[0] )
            goto LABEL_19;
          goto LABEL_32;
        }
LABEL_16:
        if ( json_object_set_new_nocheck(v4, v17, v26) )
        {
          sub_36B98(a1, "<internal>", 1, "Unable to add key \"%s\"", v17);
          a1[19] = 1;
        }
      }
      if ( !v58[0] )
        goto LABEL_19;
LABEL_32:
      jsonp_free(v17);
      goto LABEL_19;
    }
    if ( v58[0] )
      jsonp_free(v17);
    if ( v21 != 42 )
    {
      sub_36B98(a1, "<args>", 12, "NULL object value");
      a1[19] = 1;
    }
LABEL_19:
    sub_36BF8(a1);
  }
  sub_36B98(a1, "<format>", 9, "Expected format 's', got '%c'", *((unsigned __int8 *)a1 + 36));
LABEL_85:
  if ( v4 && *(_DWORD *)(v4 + 4) != -1 )
  {
    v53 = (unsigned int *)(v4 + 4);
    __dmb(0xBu);
    do
    {
      v54 = __ldrex(v53);
      v51 = v54 - 1;
    }
    while ( __strex(v51, v53) );
LABEL_81:
    if ( !v51 )
    {
      v52 = v4;
      v4 = 0;
      json_delete(v52);
      return v4;
    }
  }
  return 0;
}
