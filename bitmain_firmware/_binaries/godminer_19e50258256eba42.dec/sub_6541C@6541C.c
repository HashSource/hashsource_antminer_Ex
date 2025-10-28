const char *__fastcall sub_6541C(const json_t *a1, size_t a2)
{
  json_t *v6; // [sp+Ch] [bp-8h]

  if ( a1 && *(_DWORD *)a1 == 7 )
    return 0;
  if ( !a1 || *(_DWORD *)a1 != 1 )
    return 0;
  if ( a2 > json_array_size(a1) )
    return 0;
  v6 = json_array_get(a1, a2);
  if ( v6 && *(_DWORD *)v6 == 2 )
    return json_string_value(v6);
  else
    return 0;
}
