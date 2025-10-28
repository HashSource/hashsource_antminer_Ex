int __fastcall sub_52A94(int a1, const json_t *a2, const char ***a3)
{
  int v4; // r3
  int v5; // r3
  int v6; // r0
  size_t v11; // [sp+18h] [bp-14h]
  json_t *v12; // [sp+1Ch] [bp-10h]
  _BOOL4 v13; // [sp+20h] [bp-Ch]
  size_t v14; // [sp+24h] [bp-8h]

  v14 = 0;
  v13 = 0;
  if ( !a2 || *(_DWORD *)a2 == 1 )
  {
    sub_5153C((_DWORD *)a1);
    while ( *(_BYTE *)(a1 + 36) != 93 )
    {
      if ( v13 )
      {
        if ( v13 )
          v4 = 33;
        else
          v4 = 42;
        sub_5177C((int *)a1, "<format>", 9, "Expected ']' after '%c', got '%c'", v4, *(unsigned __int8 *)(a1 + 36));
        return -1;
      }
      if ( !*(_BYTE *)(a1 + 36) )
      {
        sub_5177C((int *)a1, "<format>", 9, "Unexpected end of format string");
        return -1;
      }
      if ( *(_BYTE *)(a1 + 36) == 33 || *(_BYTE *)(a1 + 36) == 42 )
      {
        if ( *(_BYTE *)(a1 + 36) == 33 )
          v5 = 1;
        else
          v5 = -1;
        v13 = v5;
        sub_5153C((_DWORD *)a1);
      }
      else
      {
        if ( !strchr("{[siIbfFOon", *(unsigned __int8 *)(a1 + 36)) )
        {
          sub_5177C((int *)a1, "<format>", 9, "Unexpected format character '%c'", *(unsigned __int8 *)(a1 + 36));
          return -1;
        }
        if ( a2 )
        {
          v12 = json_array_get(a2, v14);
          if ( !v12 )
          {
            sub_5177C((int *)a1, "<validation>", 17, "Array index %lu out of range", v14);
            return -1;
          }
          v6 = sub_52DB0(a1, v12, a3);
        }
        else
        {
          v6 = sub_52DB0(a1, 0, a3);
        }
        if ( v6 )
          return -1;
        sub_5153C((_DWORD *)a1);
        ++v14;
      }
    }
    if ( !v13 )
      v13 = (*(_DWORD *)(a1 + 60) & 2) != 0;
    if ( a2 && v13 && v14 != json_array_size(a2) )
    {
      v11 = json_array_size(a2) - v14;
      sub_5177C((int *)a1, "<validation>", 7, "%li array item(s) left unpacked", v11);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_5177C((int *)a1, "<validation>", 10, "Expected array, got %s", off_35B48C[*(_DWORD *)a2]);
    return -1;
  }
}
