char *__cdecl lex_steal_string(lex_t *lex, size_t *out_len)
{
  char *v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  if ( *((_DWORD *)lex + 15) == 256 )
  {
    v3 = (char *)*((_DWORD *)lex + 16);
    *out_len = *((_DWORD *)lex + 17);
    *((_DWORD *)lex + 16) = 0;
    *((_DWORD *)lex + 17) = 0;
  }
  return v3;
}
