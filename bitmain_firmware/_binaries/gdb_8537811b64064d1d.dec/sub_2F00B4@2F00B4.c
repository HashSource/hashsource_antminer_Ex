_DWORD *__fastcall sub_2F00B4(_DWORD *result, int a2)
{
  if ( result || (result = (_DWORD *)sub_2AAEF0(a2, 24)) != 0 )
  {
    result = (_DWORD *)sub_2AAFA4((int)result, a2);
    if ( result )
    {
      result[5] = -1;
      result[4] = 0;
      result[3] = 0;
    }
  }
  return result;
}
