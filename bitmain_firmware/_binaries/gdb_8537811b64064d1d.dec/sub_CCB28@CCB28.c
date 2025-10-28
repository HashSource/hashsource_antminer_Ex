_DWORD *__fastcall sub_CCB28(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r5

  v2 = (void *)a1[35];
  *a1 = off_37E264;
  if ( v2 )
    free(v2);
  v3 = (void *)a1[36];
  if ( v3 )
  {
    sub_163764(a1[36]);
    sub_33AC2C(v3);
  }
  sub_CC880(a1);
  return a1;
}
