int __fastcall sub_52DB0(int a1, const json_t *a2, const char ***a3)
{
  __int64 v3; // d0
  const char **v5; // r3
  const char **v6; // r3
  const char **v7; // r3
  const char **v8; // r3
  const char **v9; // r3
  const char **v10; // r3
  const char **v11; // r3
  double v12; // r0
  const char **v13; // r3
  char *v18; // [sp+18h] [bp-24h]
  char *v19; // [sp+1Ch] [bp-20h]
  char *v20; // [sp+28h] [bp-14h]
  char *v21; // [sp+2Ch] [bp-10h]
  _DWORD *v22; // [sp+30h] [bp-Ch]
  _DWORD *v23; // [sp+34h] [bp-8h]

  switch ( *(_BYTE *)(a1 + 36) )
  {
    case 'F':
      if ( !a2 || *(_DWORD *)a2 == 3 || *(_DWORD *)a2 == 4 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v11 = *a3;
          HIDWORD(v12) = *a3 + 1;
          *a3 = (const char **)HIDWORD(v12);
          v18 = (char *)*v11;
          if ( a2 )
          {
            LODWORD(v12) = a2;
            json_number_value(v12);
            *(_QWORD *)v18 = v3;
          }
        }
        return 0;
      }
      else
      {
        sub_5177C((int *)a1, "<validation>", 10, "Expected real or integer, got %s", off_35B48C[*(_DWORD *)a2]);
        return -1;
      }
    case 'I':
      if ( a2 && *(_DWORD *)a2 != 3 )
        goto LABEL_20;
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v8 = (*a3)++;
        if ( a2 )
        {
          v19 = (char *)*v8;
          *(_QWORD *)v19 = json_integer_value(a2);
        }
      }
      return 0;
    case 'O':
      if ( a2 && (*(_DWORD *)(a1 + 60) & 1) == 0 )
        sub_513A0((int)a2);
      goto LABEL_57;
    case '[':
      return sub_52A94(a1, a2, a3);
    case 'b':
      if ( !a2 || *(_DWORD *)a2 == 5 || *(_DWORD *)a2 == 6 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v9 = (*a3)++;
          if ( a2 )
            *(_DWORD *)*v9 = *(_DWORD *)a2 == 5;
        }
        return 0;
      }
      else
      {
        sub_5177C((int *)a1, "<validation>", 10, "Expected true or false, got %s", off_35B48C[*(_DWORD *)a2]);
        return -1;
      }
    case 'f':
      if ( !a2 || *(_DWORD *)a2 == 4 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v10 = (*a3)++;
          v20 = (char *)*v10;
          if ( a2 )
          {
            json_real_value(a2);
            *(_QWORD *)v20 = v3;
          }
        }
        return 0;
      }
      else
      {
        sub_5177C((int *)a1, "<validation>", 10, "Expected real, got %s", off_35B48C[*(_DWORD *)a2]);
        return -1;
      }
    case 'i':
      if ( !a2 || *(_DWORD *)a2 == 3 )
      {
        if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
        {
          v7 = (*a3)++;
          if ( a2 )
          {
            v21 = (char *)*v7;
            *(_DWORD *)v21 = json_integer_value(a2);
          }
        }
        return 0;
      }
      else
      {
LABEL_20:
        sub_5177C((int *)a1, "<validation>", 10, "Expected integer, got %s", off_35B48C[*(_DWORD *)a2]);
        return -1;
      }
    case 'n':
      if ( !a2 || *(_DWORD *)a2 == 7 )
        return 0;
      sub_5177C((int *)a1, "<validation>", 10, "Expected null, got %s", off_35B48C[*(_DWORD *)a2]);
      return -1;
    case 'o':
LABEL_57:
      if ( (*(_DWORD *)(a1 + 60) & 1) == 0 )
      {
        v13 = (*a3)++;
        if ( a2 )
          *(_DWORD *)*v13 = a2;
      }
      return 0;
    case 's':
      if ( a2 && *(_DWORD *)a2 != 2 )
      {
        sub_5177C((int *)a1, "<validation>", 10, "Expected string, got %s", off_35B48C[*(_DWORD *)a2]);
        return -1;
      }
      if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
        return 0;
      v23 = 0;
      v5 = (*a3)++;
      v22 = *v5;
      if ( !*v5 )
      {
        sub_5177C((int *)a1, "<args>", 12, "NULL string argument");
        return -1;
      }
      sub_5153C((_DWORD *)a1);
      if ( *(_BYTE *)(a1 + 36) == 37 )
      {
        v6 = (*a3)++;
        v23 = *v6;
        if ( !*v6 )
        {
          sub_5177C((int *)a1, "<args>", 12, "NULL string length argument");
          return -1;
        }
      }
      else
      {
        sub_5172C((_DWORD *)a1);
      }
      if ( a2 )
      {
        *v22 = json_string_value(a2);
        if ( v23 )
          *v23 = json_string_length(a2);
      }
      return 0;
    case '{':
      return sub_52560(a1, a2, a3);
    default:
      sub_5177C((int *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
      return -1;
  }
}
