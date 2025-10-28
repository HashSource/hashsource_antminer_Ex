void __cdecl lex_free_string(lex_t *lex)
{
  jsonp_free(*((void **)lex + 16));
  *((_DWORD *)lex + 16) = 0;
  *((_DWORD *)lex + 17) = 0;
}
