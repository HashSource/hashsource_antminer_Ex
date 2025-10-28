int __fastcall sub_4BF78(
        _DWORD *a1,
        int a2,
        int a3,
        hashtable_t *a4,
        int (__fastcall *a5)(const char *, int, int),
        int a6)
{
  double v6; // d0
  __int64 v8; // r0
  double v9; // r2
  const char *v10; // r4
  size_t v11; // r0
  json_t *v12; // r0
  const char **v13; // r4
  size_t v14; // r0
  size_t v15; // r0
  _DWORD *v16; // r0
  int v18; // [sp+0h] [bp-E4h]
  unsigned int v21; // [sp+10h] [bp-D4h]
  char s[100]; // [sp+18h] [bp-CCh] BYREF
  char v24[12]; // [sp+7Ch] [bp-68h] BYREF
  char v25[12]; // [sp+88h] [bp-5Ch] BYREF
  json_t *v26; // [sp+94h] [bp-50h]
  char *v27; // [sp+98h] [bp-4Ch]
  void *base; // [sp+9Ch] [bp-48h]
  size_t nmemb; // [sp+A0h] [bp-44h]
  char *v30; // [sp+A4h] [bp-40h]
  void *v31; // [sp+A8h] [bp-3Ch]
  size_t v32; // [sp+ACh] [bp-38h]
  unsigned int v33; // [sp+B0h] [bp-34h]
  int v34; // [sp+B4h] [bp-30h]
  double v35; // [sp+B8h] [bp-2Ch]
  int v36; // [sp+C0h] [bp-24h]
  size_t i; // [sp+C4h] [bp-20h]
  int v38; // [sp+C8h] [bp-1Ch]
  const char *v39; // [sp+CCh] [bp-18h]
  void *v40; // [sp+D0h] [bp-14h]
  size_t j; // [sp+D4h] [bp-10h]

  v36 = a2 & 0x10000;
  v21 = a2 & 0xFFFEFFFF;
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        if ( (a2 & 0x20) != 0 )
        {
          v39 = ":";
          v38 = 1;
        }
        else
        {
          v39 = ": ";
          v38 = 2;
        }
        if ( sub_4BEFC(a4, a1, v24, 0xBu) )
          return -1;
        v40 = json_object_iter((json_t *)a1);
        if ( !v36 && a5("{", 1, a6) )
          return -1;
        if ( v40 )
        {
          if ( dump_indent(v21, a3 + 1, 0, a5, a6) )
            return -1;
          if ( (v21 & 0x80) == 0 )
          {
            while ( 1 )
            {
              if ( !v40 )
                goto LABEL_82;
              v31 = json_object_iter_next((json_t *)a1, v40);
              v30 = (char *)json_object_iter_key(v40);
              v15 = strlen(v30);
              sub_4BB54(v30, v15, a5, a6, v21);
              if ( a5(v39, v38, a6) )
                return -1;
              v16 = json_object_iter_value(v40);
              if ( sub_4BF78(v16, v21, a3 + 1, a4, a5, a6) )
                return -1;
              if ( v31 )
              {
                if ( a5(",", 1, a6) || dump_indent(v21, a3 + 1, 1, a5, a6) )
                  return -1;
              }
              else if ( dump_indent(v21, a3, 0, a5, a6) )
              {
                return -1;
              }
              v40 = v31;
            }
          }
          nmemb = json_object_size((const json_t *)a1);
          base = jsonp_malloc(4 * nmemb);
          if ( !base )
            return -1;
          i = 0;
          while ( v40 )
          {
            v13 = (const char **)((char *)base + 4 * i);
            *v13 = json_object_iter_key(v40);
            v40 = json_object_iter_next((json_t *)a1, v40);
            ++i;
          }
          qsort(base, nmemb, 4u, (__compar_fn_t)compare_keys);
          for ( i = 0; i < nmemb; ++i )
          {
            v27 = (char *)*((_DWORD *)base + i);
            v26 = json_object_get((const json_t *)a1, v27);
            v14 = strlen(v27);
            sub_4BB54(v27, v14, a5, a6, v21);
            if ( a5(v39, v38, a6) || sub_4BF78(v26, v21, a3 + 1, a4, a5, a6) )
            {
LABEL_67:
              jsonp_free(base);
              return -1;
            }
            if ( i >= nmemb - 1 )
            {
              if ( dump_indent(v21, a3, 0, a5, a6) )
                goto LABEL_67;
            }
            else if ( a5(",", 1, a6) || dump_indent(v21, a3 + 1, 1, a5, a6) )
            {
              goto LABEL_67;
            }
          }
          jsonp_free(base);
LABEL_82:
          hashtable_del((int)a4, v24);
          if ( v36 )
            return 0;
        }
        else
        {
          hashtable_del((int)a4, v24);
          if ( v36 )
            return 0;
        }
        return a5("}", 1, a6);
      case 1:
        if ( sub_4BEFC(a4, a1, v25, 0xBu) )
          return -1;
        v32 = json_array_size((const json_t *)a1);
        if ( !v36 && a5("[", 1, a6) )
          return -1;
        if ( v32 )
        {
          if ( dump_indent(v21, a3 + 1, 0, a5, a6) )
            return -1;
          for ( j = 0; j < v32; ++j )
          {
            v12 = json_array_get((const json_t *)a1, j);
            if ( sub_4BF78(v12, v21, a3 + 1, a4, a5, a6) )
              return -1;
            if ( j >= v32 - 1 )
            {
              if ( dump_indent(v21, a3, 0, a5, a6) )
                return -1;
            }
            else if ( a5(",", 1, a6) || dump_indent(v21, a3 + 1, 1, a5, a6) )
            {
              return -1;
            }
          }
          hashtable_del((int)a4, v25);
          if ( v36 )
            return 0;
        }
        else
        {
          hashtable_del((int)a4, v25);
          if ( v36 )
            return 0;
        }
        return a5("]", 1, a6);
      case 2:
        v10 = json_string_value((const json_t *)a1);
        v11 = json_string_length((const json_t *)a1);
        return sub_4BB54(v10, v11, a5, a6, v21);
      case 3:
        v8 = json_integer_value(a1);
        v33 = snprintf(s, 0x64u, "%lld", v8);
        if ( v33 < 0x64 )
          return a5(s, v33, a6);
        else
          return -1;
      case 4:
        json_real_value((const json_t *)a1);
        v35 = v6;
        LODWORD(v9) = (unsigned __int16)v21 >> 11;
        HIDWORD(v9) = s;
        v34 = jsonp_dtostr(s, 0x64u, v9, v18);
        if ( v34 >= 0 )
          return a5(s, v34, a6);
        else
          return -1;
      case 5:
        return a5("true", 4, a6);
      case 6:
        return a5("false", 5, a6);
      case 7:
        return a5("null", 4, a6);
      default:
        return -1;
    }
  }
  return -1;
}
