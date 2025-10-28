_DWORD *__fastcall sub_B0A7C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _DWORD *result; // r0

  v2 = ((int (*)(void))loc_B076C)();
  v3 = sub_1836B0(v2);
  v4 = sub_AFB14(v3);
  if ( a1 <= 0 )
    return 0;
  result = *(_DWORD **)(v4 + 20);
  if ( result )
    return (_DWORD *)((unsigned int)a1 <= *result);
  return result;
}
