_DWORD *__fastcall sub_CE0C0(_DWORD *result, int a2)
{
  for ( ; result; result = (_DWORD *)*result )
  {
    if ( a2 == result[2] )
      break;
  }
  return result;
}
