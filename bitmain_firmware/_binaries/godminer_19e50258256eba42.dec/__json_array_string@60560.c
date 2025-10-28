char *__cdecl _json_array_string(json_t *val, unsigned int entry)
{
  json_t *v6; // [sp+Ch] [bp-8h]

  if ( val && *(_DWORD *)val == 7 )
    return 0;
  if ( !val || *(_DWORD *)val != 1 )
    return 0;
  if ( entry > json_array_size(val) )
    return 0;
  v6 = json_array_get(val, entry);
  if ( v6 && *(_DWORD *)v6 == 2 )
    return (char *)json_string_value(v6);
  else
    return 0;
}
