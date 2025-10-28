_DWORD *__fastcall sub_C7B40(int a1)
{
  _DWORD *result; // r0
  int v2; // r2
  int v3; // r5
  int v4; // r2
  int v5; // r3

  result = (_DWORD *)sub_243004(a1);
  if ( *(_BYTE *)dword_48A914 )
  {
    v3 = *result;
    sub_2573A8(*result, "default collect ", v2, *(unsigned __int8 *)dword_48A914);
    sub_257610(v3, "default-collect", dword_48A914);
    return (_DWORD *)sub_2573A8(v3, " \n", v4, v5);
  }
  return result;
}
