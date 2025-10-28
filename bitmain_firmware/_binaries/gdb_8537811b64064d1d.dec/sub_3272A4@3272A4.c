char *__fastcall sub_3272A4(int a1)
{
  char *result; // r0

  result = strerror(a1);
  if ( !result )
  {
    sprintf(byte_48FEB4, "undocumented error #%d", a1);
    return byte_48FEB4;
  }
  return result;
}
