void sub_203A48()
{
  _BYTE *v0; // r5

  v0 = (_BYTE *)dword_4893F4;
  sub_203570();
  if ( *v0 )
    sub_2035B0((int)v0, &dword_4893F4, 1);
  free(v0);
}
