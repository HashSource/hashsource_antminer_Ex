int __cdecl lex_get_save(lex_t *lex, json_error_t *error)
{
  int v4; // [sp+Ch] [bp-8h]

  v4 = sub_4EF64((int)lex, (int)error);
  if ( v4 != -1 && v4 != -2 )
    lex_save(lex, v4);
  return v4;
}
