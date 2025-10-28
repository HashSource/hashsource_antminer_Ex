const char *__fastcall sub_2946B4(int a1)
{
  const char *result; // r0

  if ( !a1 )
  {
    result = (const char *)dword_48BADC;
    if ( !dword_48BADC )
      return result;
    return (const char *)tputs(result, 1, sub_293BA8);
  }
  result = (const char *)dword_48BAE0;
  if ( dword_48BAE0 )
    return (const char *)tputs(result, 1, sub_293BA8);
  return result;
}
