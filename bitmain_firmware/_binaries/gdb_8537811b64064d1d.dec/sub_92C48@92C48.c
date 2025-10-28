void __fastcall __noreturn sub_92C48(int a1, int a2, int a3)
{
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v4 = sub_9263C();
  sub_92648(v4);
  if ( a1 != -2 )
  {
    if ( a1 != -1 )
      sub_94728(
        "common/common-exceptions.c",
        306,
        "%s: %s",
        "void throw_exception_cxx(gdb_exception)",
        "invalid return reason");
    v5 = (_DWORD *)sub_33AB8C(12);
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    sub_33A7A8(v5, &`typeinfo for'gdb_exception_RETURN_MASK_ERROR, 0);
  }
  v6 = (_DWORD *)sub_33AB8C(12);
  *v6 = -2;
  v6[1] = a2;
  v6[2] = a3;
  sub_33A7A8(v6, &`typeinfo for'gdb_exception_RETURN_MASK_QUIT, 0);
}
