_DWORD *__fastcall sub_2FC810(_DWORD *result, int a2)
{
  if ( result || (result = (_DWORD *)sub_2AAEF0(a2, 28)) != 0 )
  {
    result = (_DWORD *)sub_2AAFA4((int)result, a2);
    if ( result )
    {
      result[3] = 0;
      result[4] = 0;
      result[5] = 0;
      result[6] = 0;
    }
  }
  return result;
}
