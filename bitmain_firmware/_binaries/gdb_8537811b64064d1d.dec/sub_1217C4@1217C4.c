_BYTE *__fastcall sub_1217C4(const char **a1, __int64 a2, int a3, const char *a4, const char *a5)
{
  int v8; // r0
  _BYTE *result; // r0

  if ( !*(_BYTE *)(a3 + 16) )
    ((void (__fastcall *)(_DWORD, int))loc_11FFF8)(*(_DWORD *)(dword_4872D8 + 344), a3);
  v8 = *(_DWORD *)(a3 + 4);
  if ( !v8 )
    sub_94708("%s used without %s section [in module %s]", a4, a5, *a1);
  if ( a2 >= *(unsigned int *)(a3 + 8) )
    sub_94708("%s pointing outside of %s section [in module %s]", a4, a5, *a1);
  result = (_BYTE *)(v8 + a2);
  if ( !*result )
    return 0;
  return result;
}
