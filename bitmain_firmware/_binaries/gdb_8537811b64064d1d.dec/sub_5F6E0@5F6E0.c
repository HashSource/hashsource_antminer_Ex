void __fastcall __noreturn sub_5F6E0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        char a13,
        _DWORD *a14,
        int a15,
        int a16,
        char *ptr,
        int a18,
        char a19)
{
  _DWORD *v19; // r4
  int v20; // r5
  void *v21; // r0
  void *v22; // r0

  if ( ptr != &a19 )
    sub_339E8C(ptr);
  if ( a13 )
    ((void (__fastcall *)(char *))loc_5FD2C)(&a12);
  v19 = a14;
  v20 = a15;
  while ( (_DWORD *)v20 != v19 )
  {
    v21 = (void *)v19[4];
    if ( v21 )
      sub_339E8C(v21);
    v19 += 7;
  }
  v22 = a14;
  if ( a14 )
    sub_339E8C(a14);
  sub_339024(v22);
}
