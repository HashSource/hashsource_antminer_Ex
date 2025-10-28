int __fastcall sub_359C4(_DWORD *a1)
{
  if ( a1[15] != 256 )
    return strbuffer_close(a1 + 10);
  jsonp_free(a1[16]);
  a1[16] = 0;
  a1[17] = 0;
  return strbuffer_close(a1 + 10);
}
