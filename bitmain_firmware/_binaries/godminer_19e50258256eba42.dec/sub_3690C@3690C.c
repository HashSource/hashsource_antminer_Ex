const json_t *__fastcall sub_3690C(char *a1, const json_t *a2)
{
  const json_t *result; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  _DWORD v9[5]; // [sp+Ch] [bp-138h]
  char s[256]; // [sp+20h] [bp-124h] BYREF
  const json_t *v11; // [sp+120h] [bp-24h]
  int v12; // [sp+124h] [bp-20h]
  const json_t *v13; // [sp+128h] [bp-1Ch]
  json_t *v14; // [sp+12Ch] [bp-18h]
  char *src; // [sp+130h] [bp-14h]
  signed int j; // [sp+134h] [bp-10h]
  int i; // [sp+138h] [bp-Ch]
  const json_t *v18; // [sp+13Ch] [bp-8h]

  v18 = 0;
  v14 = 0;
  v13 = 0;
  memset(s, 0, sizeof(s));
  j = 0;
  result = (const json_t *)"SUMMARY";
  v9[0] = "SUMMARY";
  v9[1] = "POOLS";
  v9[2] = "STATS";
  v9[3] = "DEVS";
  v9[4] = "VERSION";
  src = 0;
  v11 = 0;
  v12 = 5;
  for ( i = 0; i < v12; ++i )
  {
    result = json_object_get(a2, (const char *)v9[i]);
    v18 = result;
    if ( result )
    {
      if ( *(_DWORD *)v18 == 1 )
        break;
    }
  }
  if ( i < v12 )
  {
    if ( !i || i == 4 )
    {
      snprintf(s, 0x100u, "%s,", (const char *)v9[i]);
      strcat(a1, s);
    }
    result = (const json_t *)json_array_size(v18);
    v11 = result;
    for ( j = 0; j < (int)v11; ++j )
    {
      result = json_array_get(v18, j);
      v14 = result;
      if ( result && !*(_DWORD *)v14 )
      {
        v3 = json_object_iter(v14);
        for ( src = (char *)json_object_iter_key(v3); src; src = (char *)json_object_iter_key(v5) )
        {
          v6 = json_object_key_to_iter(src);
          v13 = (const json_t *)json_object_iter_value(v6);
          if ( !v13 )
            break;
          strcat(a1, src);
          *(_WORD *)&a1[strlen(a1)] = 61;
          sub_36768(a1, v13);
          *(_WORD *)&a1[strlen(a1)] = 44;
          v4 = json_object_key_to_iter(src);
          v5 = json_object_iter_next(v14, v4);
        }
        result = (const json_t *)strlen(a1);
        *((_BYTE *)result + (_DWORD)a1 - 1) = 124;
        if ( (const json_t *)j != (const json_t *)((char *)v11 - 1) )
        {
          result = (const json_t *)strlen(a1);
          *((_BYTE *)result + (_DWORD)a1) = 44;
        }
      }
    }
  }
  return result;
}
