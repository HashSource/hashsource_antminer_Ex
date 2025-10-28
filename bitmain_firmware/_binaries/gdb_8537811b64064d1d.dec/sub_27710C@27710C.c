void __fastcall __noreturn sub_27710C(int a1, int a2, int a3, int a4, int a5, void *ptr, char *a7, int a8, char a9)
{
  void *v9; // r0

  if ( a7 != &a9 )
    sub_339E8C(a7);
  v9 = ptr;
  if ( ptr )
    free(ptr);
  sub_339024(v9);
}
