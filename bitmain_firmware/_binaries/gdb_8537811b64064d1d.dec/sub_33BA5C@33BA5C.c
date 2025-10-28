_BYTE *__fastcall sub_33BA5C(int *a1, _BYTE *a2, int a3)
{
  _BYTE *v4; // r5

  v4 = &a2[-*a1];
  if ( a3 == *a1 + a1[1] )
  {
    a1[1] = (int)v4;
    *a2 = 0;
    return &v4[*a1];
  }
  else
  {
    sub_33B5CC(a1, (int)&a2[-*a1], a3 - (_DWORD)a2);
    return &v4[*a1];
  }
}
