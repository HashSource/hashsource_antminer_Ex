_DWORD *__fastcall sub_1D1100(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *i; // r4

  result = sub_1D08A0(a1, 1);
  for ( i = (_DWORD *)result[6]; i; i = (_DWORD *)*i )
    result = (_DWORD *)sub_1CE218((int)a1, (int)i);
  return result;
}
