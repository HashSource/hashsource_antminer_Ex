int __fastcall sub_20E810(int *a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v8; // r0
  void *v9; // r7

  v8 = (_DWORD *)sub_243004(a1);
  if ( sub_257418(*v8) )
    a3 = 2;
  v9 = sub_92E50();
  sub_20DEB8(a1, a2, a3, 1, a4);
  if ( a4 )
    sub_20DB44((int)a1);
  return sub_92E68((int)v9);
}
