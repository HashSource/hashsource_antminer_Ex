_DWORD *__fastcall sub_C6854(_DWORD *a1)
{
  void *v2; // r5
  _DWORD *v3; // r0

  v2 = (void *)a1[41];
  *a1 = off_37D51C;
  if ( v2 )
  {
    sub_163764(v2);
    sub_33AC2C(v2);
  }
  v3 = (_DWORD *)a1[35];
  if ( v3 != a1 + 37 )
    sub_339E8C(v3);
  sub_CC880(a1);
  return a1;
}
