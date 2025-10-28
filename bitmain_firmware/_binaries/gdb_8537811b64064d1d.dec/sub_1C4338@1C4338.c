char **__fastcall sub_1C4338(char **a1, _BYTE *a2, int a3)
{
  char *v4; // r5

  v4 = off_46D5A4[0][2];
  if ( v4 == (char *)a3 )
  {
    sub_1C42D0(a1, a2);
  }
  else
  {
    sub_19422C(a3);
    sub_1C42D0(a1, a2);
    sub_19422C((int)v4);
  }
  return a1;
}
