void __cdecl lex_close(lex_t *lex)
{
  if ( *((_DWORD *)lex + 15) == 256 )
    lex_free_string(lex);
  strbuffer_close((lex_t *)((char *)lex + 40));
}
