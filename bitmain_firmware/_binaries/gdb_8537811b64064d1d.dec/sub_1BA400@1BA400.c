_DWORD *__fastcall sub_1BA400(int a1)
{
  _DWORD *v2; // r2
  _DWORD *result; // r0

  v2 = sub_1B8A74();
  result = (_DWORD *)v2[1];
  *v2 = dword_487BFC;
  *result = sub_1B89CC;
  result[1] = a1;
  dword_487BFC = (int)v2;
  return result;
}
