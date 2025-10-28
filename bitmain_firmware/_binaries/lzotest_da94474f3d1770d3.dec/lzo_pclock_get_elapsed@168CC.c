_DWORD *__fastcall lzo_pclock_get_elapsed(_DWORD *result, _DWORD *a2, _DWORD *a3)
{
  if ( *result )
    return (_DWORD *)sub_14378(a2, a3);
  result[1] = -1;
  return result;
}
