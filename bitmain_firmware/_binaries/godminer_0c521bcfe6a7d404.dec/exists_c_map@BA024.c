_DWORD *__fastcall exists_c_map(_DWORD *result)
{
  if ( result )
    return (_DWORD *)(find_c_rb(*result) != 0);
  return result;
}
