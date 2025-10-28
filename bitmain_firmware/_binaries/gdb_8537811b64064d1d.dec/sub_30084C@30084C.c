void __fastcall sub_30084C(_DWORD *a1)
{
  _DWORD *i; // r4

  for ( i = a1; i; i = (_DWORD *)*i )
  {
    sub_2AAA44(i[2]);
    free((void *)i[2]);
  }
}
