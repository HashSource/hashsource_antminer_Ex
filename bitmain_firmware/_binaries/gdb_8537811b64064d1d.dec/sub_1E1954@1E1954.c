_DWORD *__fastcall sub_1E1954(int a1, int a2)
{
  void *v4; // r0
  _DWORD *v5; // r4
  int v6; // r2

  v4 = (void *)sub_1CD174(a1, (_DWORD *)dword_488C80);
  if ( v4 )
    free(v4);
  v5 = (_DWORD *)dword_488C80;
  v6 = sub_32727C(a2);
  return sub_1CD16C(a1, v5, v6);
}
