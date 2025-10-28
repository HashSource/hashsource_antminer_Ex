_DWORD *__fastcall sub_26BC20(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_26BB30(a1);
  result[2] = a2;
  result[3] = a3;
  *result = 6;
  return result;
}
