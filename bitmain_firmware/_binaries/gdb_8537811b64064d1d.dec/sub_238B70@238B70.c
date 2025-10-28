_DWORD *__fastcall sub_238B70(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = (_DWORD *)a1[16];
  *a1 = off_3E9AE8;
  if ( v2 != a1 + 18 )
    sub_339E8C(v2);
  v3 = (_DWORD *)a1[9];
  if ( v3 != a1 + 11 )
    sub_339E8C(v3);
  v4 = (_DWORD *)a1[1];
  if ( v4 != a1 + 3 )
    sub_339E8C(v4);
  return a1;
}
