const char *__cdecl utf8_iterate(const char *buffer, size_t bufsize, int32_t *codepoint)
{
  int32_t v8; // [sp+10h] [bp-Ch] BYREF
  size_t v9; // [sp+14h] [bp-8h]

  if ( !bufsize )
    return buffer;
  v9 = utf8_check_first(*buffer);
  if ( !v9 )
    return 0;
  if ( v9 == 1 )
  {
    v8 = *(unsigned __int8 *)buffer;
  }
  else if ( v9 > bufsize || !utf8_check_full(buffer, v9, &v8) )
  {
    return 0;
  }
  if ( codepoint )
    *codepoint = v8;
  return &buffer[v9];
}
