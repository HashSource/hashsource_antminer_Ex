_DWORD *__fastcall sub_26DD2C(_DWORD *a1, const void *a2, int a3)
{
  _DWORD *result; // r0

  if ( a2 )
    result = sub_26DD00(a1, a2);
  else
    result = sub_26BB30(a1);
  result[2] = a3;
  *result = 1;
  return result;
}
