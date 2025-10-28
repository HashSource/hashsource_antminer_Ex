int __cdecl utf8_encode(int32_t codepoint, char *buffer, size_t *size)
{
  if ( codepoint >= 0 )
  {
    if ( codepoint > 127 )
    {
      if ( codepoint >= 2048 )
      {
        if ( codepoint >= 0x10000 )
        {
          if ( codepoint >= 1114112 )
            return -1;
          *buffer = ((codepoint >> 18) & 7) - 16;
          buffer[1] = ((codepoint >> 12) & 0x3F) + 0x80;
          buffer[2] = ((codepoint >> 6) & 0x3F) + 0x80;
          buffer[3] = (codepoint & 0x3F) + 0x80;
          *size = 4;
        }
        else
        {
          *buffer = ((codepoint >> 12) & 0xF) - 32;
          buffer[1] = ((codepoint >> 6) & 0x3F) + 0x80;
          buffer[2] = (codepoint & 0x3F) + 0x80;
          *size = 3;
        }
      }
      else
      {
        *buffer = ((codepoint >> 6) & 0x1F) - 64;
        buffer[1] = (codepoint & 0x3F) + 0x80;
        *size = 2;
      }
    }
    else
    {
      *buffer = codepoint;
      *size = 1;
    }
    return 0;
  }
  return -1;
}
