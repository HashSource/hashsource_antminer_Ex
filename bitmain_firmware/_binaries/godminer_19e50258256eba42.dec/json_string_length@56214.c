size_t __cdecl json_string_length(const json_t *json)
{
  if ( json && *(_DWORD *)json == 2 )
    return *((_DWORD *)json + 3);
  else
    return 0;
}
