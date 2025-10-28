int sub_153BEC()
{
  int result; // r0

  if ( dword_487668 != dword_48768C )
  {
    sub_94728(
      (int)"event-top.c",
      296,
      "%s: Assertion `%s' failed.",
      "void gdb_rl_callback_handler_remove()",
      "current_ui == main_ui");
    JUMPOUT(0x153C4C);
  }
  result = sub_293A68();
  dword_487694 = 0;
  return result;
}
