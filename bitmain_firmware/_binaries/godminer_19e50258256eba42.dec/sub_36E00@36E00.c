int __fastcall sub_36E00(int *a1, int a2)
{
  const char *v3; // r0
  size_t v4; // r0
  char s[16]; // [sp+10h] [bp-13Ch] BYREF
  _BYTE v8[252]; // [sp+20h] [bp-12Ch] BYREF
  void *ptr; // [sp+11Ch] [bp-30h]
  json_t *v10; // [sp+120h] [bp-2Ch]
  char *v11; // [sp+124h] [bp-28h]
  const json_t *v12; // [sp+128h] [bp-24h]
  json_t *v13; // [sp+12Ch] [bp-20h]
  const json_t *v14; // [sp+130h] [bp-1Ch]
  const json_t *v15; // [sp+134h] [bp-18h]
  int v16; // [sp+138h] [bp-14h]
  int v17; // [sp+13Ch] [bp-10h]
  unsigned int v18; // [sp+140h] [bp-Ch]
  signed int i; // [sp+144h] [bp-8h]

  v16 = 0;
  i = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  memset(s, 0, sizeof(s));
  v17 = 0;
  ptr = 0;
  v15 = json_loads(a2, 0, (json_error_t *)v8);
  if ( !v15 || *(_DWORD *)v15 )
    return -2147483645;
  v14 = json_object_get(v15, "command");
  if ( v14 && *(_DWORD *)v14 == 1 )
  {
    v13 = json_object_get(v15, "new_api");
    v18 = !v13 || *(_DWORD *)v13 != 5;
    v11 = json_object();
    for ( i = 0; ; ++i )
    {
      v4 = json_array_size(v14);
      if ( v4 <= i )
        break;
      v12 = json_array_get(v14, i);
      if ( !v12 || i > 10 )
        break;
      if ( *(_DWORD *)v12 == 2 )
      {
        memset(s, 0, sizeof(s));
        v3 = json_string_value(v12);
        snprintf(s, 0x10u, "%s", v3);
        if ( strcmp(s, "reload") || v18 )
        {
          v10 = (json_t *)json_object();
          sub_36438(v10, s, 0, v18);
          json_object_set_new((json_t *)v11, s, v10);
        }
        else
        {
          v17 = 1;
        }
      }
    }
    ptr = json_dumps(v11, 24576);
    sub_35F68(a1, (char *)ptr);
    free(ptr);
    if ( v17 == 1 )
      sub_36438((json_t *)v11, "reload", 0, 0);
    sub_28C60((int)v11);
    sub_28C60((int)v15);
    return v16;
  }
  else
  {
    sub_28C60((int)v15);
    return -2147483645;
  }
}
