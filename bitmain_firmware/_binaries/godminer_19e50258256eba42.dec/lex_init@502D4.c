int __fastcall lex_init(int a1, int a2, int a3, int a4)
{
  stream_init(a1, a2, a4);
  if ( strbuffer_init((strbuffer_t *)(a1 + 40)) )
    return -1;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 60) = -1;
  return 0;
}
