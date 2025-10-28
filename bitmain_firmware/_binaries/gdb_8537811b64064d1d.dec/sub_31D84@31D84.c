int __fastcall sub_31D84(_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r6
  void *v7; // r0
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  if ( a2 && !off_489C6C() )
  {
    sub_94728(
      "solib-svr4.c",
      1272,
      "%s: Assertion `%s' failed.",
      "int svr4_current_sos_via_xfer_libraries(svr4_library_list*, const char*)",
      "annex == NULL || target_augmented_libraries_svr4_read ()");
    v7 = ptr;
    if ( ptr )
      free(ptr);
    sub_339024(v7);
  }
  sub_2305B8(&ptr, &dword_4899A0, 13, a2);
  v4 = (int)ptr;
  if ( ptr )
  {
    v5 = sub_92564(sub_2FD9C, a1);
    a1[1] = a1;
    *a1 = 0;
    a1[2] = 0;
    if ( sub_274CC4("target library list", "library-list-svr4.dtd", &off_34C3F4, v4, a1) )
    {
      sub_92648(v5);
      v4 = 0;
    }
    else
    {
      sub_92668(v5);
      v4 = 1;
    }
    if ( ptr )
      free(ptr);
  }
  return v4;
}
