_DWORD *__fastcall sub_238CA0(_DWORD *a1)
{
  char *v2; // r5
  char *v3; // r6
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  bool v6; // zf
  _DWORD *v7; // r0

  v2 = (char *)a1[8];
  v3 = (char *)a1[9];
  *a1 = off_3E9B44;
  if ( v2 != v3 )
  {
    v4 = v2 + 8;
    do
    {
      v5 = (_DWORD *)*(v4 - 2);
      v2 += 36;
      v6 = v5 == v4;
      v4 += 9;
      if ( !v6 )
        sub_339E8C(v5);
    }
    while ( v3 != v2 );
    v3 = (char *)a1[8];
  }
  if ( v3 )
    sub_339E8C(v3);
  v7 = (_DWORD *)a1[1];
  *a1 = &off_3E9AFC;
  if ( v7 != a1 + 3 )
    sub_339E8C(v7);
  return a1;
}
