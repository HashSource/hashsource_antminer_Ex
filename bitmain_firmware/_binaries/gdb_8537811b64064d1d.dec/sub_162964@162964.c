void __noreturn sub_162964()
{
  _DWORD *v0; // r5
  _DWORD *v1; // r6
  _DWORD *i; // r4
  int v4; // r0
  void *v5; // r0

  v1 = (_DWORD *)v0[12];
  for ( i = (_DWORD *)v0[11]; v1 != i; ++i )
  {
    if ( *i )
      ((void (*)(void))loc_1625D0)();
  }
  v5 = (void *)v0[11];
  if ( v5 )
    sub_339E8C(v5);
  sub_33AC2C(v0);
  sub_339024(v4);
}
