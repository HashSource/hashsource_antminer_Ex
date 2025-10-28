_DWORD *__fastcall sub_1B9C6C(int a1)
{
  _DWORD *v2; // r2
  _DWORD *result; // r0

  v2 = sub_1B8A74();
  result = (_DWORD *)v2[1];
  *v2 = dword_487BD4;
  *result = sub_1B8920;
  result[1] = a1;
  dword_487BD4 = (int)v2;
  return result;
}
