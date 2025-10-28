_DWORD *__fastcall sub_5C8A0(_DWORD *result)
{
  if ( (*result & 3) != 0 )
    *result = (*result & 0xFFFFFFFC) + 4;
  return result;
}
