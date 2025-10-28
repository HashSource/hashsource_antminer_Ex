_DWORD *__fastcall json_stringn(char *a1, size_t a2)
{
  if ( a1 && utf8_check_string((int)a1, a2) )
    return json_stringn_nocheck(a1, a2);
  else
    return 0;
}
