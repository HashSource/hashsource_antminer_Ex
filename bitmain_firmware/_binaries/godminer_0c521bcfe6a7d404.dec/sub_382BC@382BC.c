int __fastcall sub_382BC(int a1, _DWORD *a2, _QWORD ***a3)
{
  __int64 v3; // d0
  int v5; // r0
  int v8; // r6
  int v9; // r8
  bool v10; // zf
  int v11; // r9
  char **v12; // r3
  char *v13; // r8
  int v14; // r0
  bool v15; // zf
  int v16; // r2
  int v17; // r2
  _QWORD **v18; // r3
  _QWORD *v19; // r4
  int v20; // r2
  _QWORD **v21; // r3
  _QWORD *v22; // r4
  int v23; // r3
  unsigned int *v24; // r3
  unsigned int v25; // r2
  _DWORD **v26; // r3
  _DWORD *v27; // r3
  int v28; // r2
  int v29; // r6
  int v30; // r8
  bool v31; // zf
  bool v32; // zf
  int v33; // r2
  int v34; // r2
  _DWORD **v35; // r3
  int v36; // r2
  _QWORD **v37; // r3
  _QWORD *v38; // r4
  _DWORD **v39; // r3
  _DWORD *v40; // r4
  int v41; // r2
  _DWORD **v43; // r3
  int v44; // r2
  _DWORD **v45; // r3
  _DWORD *v46; // r8
  _DWORD *v47; // r12
  _DWORD *v48; // lr
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  _DWORD *v53; // r4
  int v54; // r1
  int v55; // r2
  int v56; // r3
  char *v57; // r3
  char *v58; // r1
  int v59; // r0
  int v60; // r0
  char *v61; // r7
  int appended; // r8
  int v63; // r9
  int v64; // r0
  int v65; // r0
  int v66; // r0
  size_t v67; // r0
  _DWORD **v68; // r3
  _DWORD *v69; // r7
  const char *v70; // r0
  int v71; // r0
  char *v72; // r3
  char *v73; // r1
  char *v74; // r12
  int *v75; // r0
  int v76; // [sp+0h] [bp-30h]
  _BYTE v77[12]; // [sp+8h] [bp-28h] BYREF
  int v78[7]; // [sp+14h] [bp-1Ch] BYREF

  v5 = *(unsigned __int8 *)(a1 + 36);
  switch ( v5 )
  {
    case 'F':
      if ( !a2 )
        goto LABEL_104;
      v17 = *a2;
      if ( (unsigned int)(*a2 - 3) > 1 )
      {
        v72 = "Expected real or integer, got %s";
        LOWORD(v73) = 10692;
        v74 = (&off_132904)[v17];
        v75 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v18 = (*a3)++;
      v19 = *v18;
      json_number_value(a2);
      *v19 = v3;
      return v8;
    case 'I':
      if ( !a2 )
        goto LABEL_104;
      v20 = *a2;
      if ( *a2 != 3 )
        goto LABEL_157;
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v21 = (*a3)++;
      v22 = *v21;
      *v22 = json_integer_value(a2);
      return v8;
    case 'O':
      v23 = *(_DWORD *)(a1 + 60) & 1;
      if ( !a2 )
        goto LABEL_90;
      if ( v23 )
        return 0;
      if ( a2[1] == -1 )
      {
        v43 = (_DWORD **)(*a3)++;
        goto LABEL_92;
      }
      v24 = a2 + 1;
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      __dmb(0xBu);
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v26 = (_DWORD **)(*a3)++;
        v27 = *v26;
        goto LABEL_93;
      }
      return 0;
    case '[':
      if ( a2 && (v28 = *a2, *a2 != 1) )
      {
        v72 = "Expected array, got %s";
        LOWORD(v73) = 10692;
        v74 = (&off_132904)[v28];
        v75 = (int *)a1;
LABEL_158:
        HIWORD(v73) = (unsigned int)"<validation>" >> 16;
        v8 = -1;
        sub_37DF8(v75, v73, 10, v72, v74);
      }
      else
      {
        sub_37E58((_DWORD *)a1);
        v29 = *(unsigned __int8 *)(a1 + 36);
        if ( v29 == 93 )
        {
          v30 = 0;
LABEL_137:
          if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
            return 0;
LABEL_109:
          if ( a2 && json_array_size(a2) != v30 )
          {
            v8 = -1;
            v59 = json_array_size(a2);
            sub_37DF8((int *)a1, "<validation>", 7, "%li array item(s) left unpacked", v59 - v30);
            return v8;
          }
          return 0;
        }
        if ( !*(_BYTE *)(a1 + 36) )
        {
LABEL_132:
          sub_37DF8((int *)a1, "<format>", 9, "Unexpected end of format string");
          return -1;
        }
        v31 = v29 == 33;
        if ( v29 != 33 )
          v31 = v29 == 42;
        v30 = v31;
        if ( v31 )
        {
          v30 = 0;
LABEL_68:
          if ( v29 == 33 )
          {
            sub_37E58((_DWORD *)a1);
            v33 = *(unsigned __int8 *)(a1 + 36);
            if ( v33 == 93 )
              goto LABEL_109;
          }
          else
          {
            sub_37E58((_DWORD *)a1);
            v33 = *(unsigned __int8 *)(a1 + 36);
            if ( v33 == 93 )
              return 0;
            v29 = 42;
          }
          sub_37DF8((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v29, v33);
          return -1;
        }
        while ( strchr("{[siIbfFOon", v29) )
        {
          if ( a2 && !json_array_get(a2, v30) )
          {
            v8 = -1;
            sub_37DF8((int *)a1, "<validation>", 17, "Array index %lu out of range", v30);
            return v8;
          }
          ++v30;
          if ( sub_382BC(a1) )
            return -1;
          sub_37E58((_DWORD *)a1);
          v29 = *(unsigned __int8 *)(a1 + 36);
          if ( v29 == 93 )
            goto LABEL_137;
          if ( !*(_BYTE *)(a1 + 36) )
            goto LABEL_132;
          v32 = v29 == 42;
          if ( v29 != 42 )
            v32 = v29 == 33;
          if ( v32 )
            goto LABEL_68;
        }
        LOWORD(v57) = 10956;
        LOWORD(v58) = 10616;
        v76 = v29;
LABEL_102:
        HIWORD(v57) = (unsigned int)"Unexpected format character '%c'" >> 16;
        HIWORD(v58) = (unsigned int)"<format>" >> 16;
        v8 = -1;
        sub_37DF8((int *)a1, v58, 9, v57, v76);
      }
      return v8;
    case 'b':
      if ( !a2 )
        goto LABEL_104;
      v34 = *a2;
      if ( (unsigned int)(*a2 - 5) > 1 )
      {
        v72 = "Expected true or false, got %s";
        LOWORD(v73) = 10692;
        v74 = (&off_132904)[v34];
        v75 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v35 = (_DWORD **)(*a3)++;
      **v35 = v34 == 5;
      return v8;
    case 'f':
      if ( !a2 )
        goto LABEL_104;
      v36 = *a2;
      if ( *a2 != 4 )
      {
        v72 = "Expected real, got %s";
        LOWORD(v73) = 10692;
        v74 = (&off_132904)[v36];
        v75 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v37 = (*a3)++;
      v38 = *v37;
      json_real_value(a2);
      *v38 = v3;
      return v8;
    case 'i':
      if ( !a2 )
      {
LABEL_104:
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
          ++*a3;
        return 0;
      }
      v20 = *a2;
      if ( *a2 != 3 )
      {
LABEL_157:
        v72 = "Expected integer, got %s";
        LOWORD(v73) = (unsigned __int16)"<validation>";
        v74 = (&off_132904)[v20];
        v75 = (int *)a1;
        goto LABEL_158;
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v39 = (_DWORD **)(*a3)++;
      v40 = *v39;
      *v40 = json_integer_value(a2);
      return v8;
    case 'n':
      if ( !a2 )
        return 0;
      v41 = *a2;
      if ( *a2 == 7 )
        return 0;
      v72 = "Expected null, got %s";
      LOWORD(v73) = 10692;
      v74 = (&off_132904)[v41];
      v75 = (int *)a1;
      goto LABEL_158;
    case 'o':
      v23 = *(_DWORD *)(a1 + 60) & 1;
LABEL_90:
      if ( !v23 )
      {
        v43 = (_DWORD **)(*a3)++;
        if ( a2 )
        {
LABEL_92:
          v27 = *v43;
LABEL_93:
          *v27 = a2;
        }
      }
      return 0;
    case 's':
      if ( a2 )
      {
        v44 = *a2;
        if ( *a2 != 2 )
        {
          v72 = "Expected string, got %s";
          LOWORD(v73) = 10692;
          v74 = (&off_132904)[v44];
          v75 = (int *)a1;
          goto LABEL_158;
        }
      }
      v8 = *(_DWORD *)(a1 + 60) & 1;
      if ( v8 )
        return 0;
      v45 = (_DWORD **)(*a3)++;
      v46 = *v45;
      if ( *v45 )
      {
        sub_37E58((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 36) == 37 )
        {
          v68 = (_DWORD **)(*a3)++;
          v69 = *v68;
          if ( *v68 )
          {
            if ( !a2 )
              return 0;
            *v46 = json_string_value(a2);
            *v69 = json_string_length(a2);
          }
          else
          {
            sub_37DF8((int *)a1, "<args>", 12, "NULL string length argument");
            return -1;
          }
        }
        else
        {
          v47 = (_DWORD *)(a1 + 24);
          v48 = (_DWORD *)(a1 + 40);
          v49 = *(_DWORD *)(a1 + 24);
          v50 = *(_DWORD *)(a1 + 28);
          v51 = *(_DWORD *)(a1 + 32);
          v52 = *(_DWORD *)(a1 + 36);
          v53 = (_DWORD *)(a1 + 8);
          *v48 = v49;
          v48[1] = v50;
          v48[2] = v51;
          v48[3] = v52;
          v54 = v53[1];
          v55 = v53[2];
          v56 = v53[3];
          *v47 = *v53;
          v47[1] = v54;
          v47[2] = v55;
          v47[3] = v56;
          if ( !a2 )
            return 0;
          *v46 = json_string_value(a2);
        }
      }
      else
      {
        sub_37DF8((int *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      return v8;
    case '{':
      v8 = hashtable_init(v78);
      if ( v8 )
      {
        sub_37DF8((int *)a1, "<internal>", 1, "Out of memory");
        return -1;
      }
      if ( a2 && *a2 )
      {
        v8 = -1;
        sub_37DF8((int *)a1, "<validation>", 10, "Expected object, got %s", (&off_132904)[*a2]);
        goto LABEL_30;
      }
      sub_37E58((_DWORD *)a1);
      v9 = *(unsigned __int8 *)(a1 + 36);
      if ( v9 != 125 )
      {
        if ( *(_BYTE *)(a1 + 36) )
        {
          v10 = v9 == 33;
          if ( v9 != 33 )
            v10 = v9 == 42;
          v11 = v10;
          if ( v10 )
          {
            v11 = 0;
LABEL_25:
            if ( v9 == 33 )
            {
              sub_37E58((_DWORD *)a1);
              v16 = *(unsigned __int8 *)(a1 + 36);
              if ( v16 == 125 )
                goto LABEL_115;
            }
            else
            {
              sub_37E58((_DWORD *)a1);
              v16 = *(unsigned __int8 *)(a1 + 36);
              if ( v16 == 125 )
                goto LABEL_30;
              v9 = 42;
            }
            v8 = -1;
            sub_37DF8((int *)a1, "<format>", 9, "Expected '}' after '%c', got '%c'", v9, v16);
          }
          else
          {
            while ( 1 )
            {
              if ( v9 != 115 )
              {
                v8 = -1;
                sub_37DF8((int *)a1, "<format>", 9, "Expected format 's', got '%c'", v9);
                goto LABEL_30;
              }
              v12 = (char **)(*a3)++;
              v13 = *v12;
              if ( !*v12 )
              {
                sub_37DF8((int *)a1, "<args>", 12, "NULL object key");
                v8 = -1;
                goto LABEL_30;
              }
              sub_37E58((_DWORD *)a1);
              if ( *(_BYTE *)(a1 + 36) == 63 )
              {
                sub_37E58((_DWORD *)a1);
                v11 = 1;
                if ( a2 )
                  json_object_get(a2, v13);
              }
              else if ( a2 && !json_object_get(a2, v13) )
              {
                v8 = -1;
                sub_37DF8((int *)a1, "<validation>", 16, "Object item not found: %s", v13);
                goto LABEL_30;
              }
              if ( sub_382BC(a1) )
              {
                v8 = -1;
                goto LABEL_30;
              }
              v14 = json_null();
              hashtable_set(v78, v13, v14);
              sub_37E58((_DWORD *)a1);
              v9 = *(unsigned __int8 *)(a1 + 36);
              if ( v9 == 125 )
                break;
              if ( !*(_BYTE *)(a1 + 36) )
                goto LABEL_140;
              v15 = v9 == 42;
              if ( v9 != 42 )
                v15 = v9 == 33;
              if ( v15 )
                goto LABEL_25;
            }
            if ( (*(_DWORD *)(a1 + 60) & 2) == 0 )
              goto LABEL_30;
LABEL_115:
            if ( a2 )
            {
              if ( v11 )
                goto LABEL_117;
              goto LABEL_155;
            }
          }
        }
        else
        {
LABEL_140:
          sub_37DF8((int *)a1, "<format>", 9, "Unexpected end of format string");
          v8 = -1;
        }
LABEL_30:
        hashtable_close((int)v78);
        return v8;
      }
      if ( (*(_DWORD *)(a1 + 60) & 2) == 0 || !a2 )
        goto LABEL_30;
LABEL_155:
      v71 = json_object_size(a2);
      if ( v71 == v78[0] )
        goto LABEL_30;
LABEL_117:
      v60 = json_object_iter(a2);
      v61 = (char *)json_object_iter_key(v60);
      if ( !v61 )
        goto LABEL_30;
      appended = 1;
      v63 = 0;
      break;
    default:
      LOWORD(v57) = (unsigned __int16)"Unexpected format character '%c'";
      LOWORD(v58) = (unsigned __int16)"<format>";
      v76 = v5;
      goto LABEL_102;
  }
  while ( 1 )
  {
    v66 = json_object_key_to_iter(v61);
    if ( !json_object_iter_value(v66) )
    {
LABEL_148:
      if ( v63 )
      {
        if ( appended )
          v70 = "<unknown>";
        else
          v70 = (const char *)strbuffer_value(v77);
        sub_37DF8((int *)a1, "<validation>", 7, "%li object item(s) left unpacked: %s", v63, v70);
        v8 = -1;
        strbuffer_close(v77);
      }
      goto LABEL_30;
    }
    if ( !hashtable_get((int)v78, v61) )
    {
      ++v63;
      if ( appended == 1 )
      {
        appended = strbuffer_init(v77);
LABEL_126:
        if ( !appended )
        {
          v67 = strlen(v61);
          appended = strbuffer_append_bytes((int)v77, v61, v67);
        }
        goto LABEL_120;
      }
      if ( !appended )
      {
        appended = strbuffer_append_bytes((int)v77, ", ", 2u);
        goto LABEL_126;
      }
    }
LABEL_120:
    v64 = json_object_key_to_iter(v61);
    v65 = json_object_iter_next(a2, v64);
    v61 = (char *)json_object_iter_key(v65);
    if ( !v61 )
      goto LABEL_148;
  }
}
