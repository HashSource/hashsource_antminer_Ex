_DWORD *__fastcall pool_alive(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)pool_tclear(a1, (unsigned __int8 *)(a1 + 1904), 0);
  if ( result )
    return sub_42C38((_DWORD *)a1, 0);
  return result;
}
