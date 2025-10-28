int __fastcall sub_749A0(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_474A78;
  if ( !a1 )
  {
    v3 = sub_94728("ada-exp.y", 734, "%s: Assertion `%s' failed.", "int ada_parse(parser_state*)", "par_state != NULL");
    dword_474A78 = v1;
    sub_339024(v3);
  }
  dword_474A78 = a1;
  dword_4748E8 = 1;
  sub_71E5C(dword_474A5C);
  dword_474A7C = 0;
  obstack_free(&stru_474918, 0);
  obstack_begin(&stru_474918, 0, 0, (void *(*)(int))sub_93050, sub_70774);
  result = sub_722D8();
  dword_474A78 = v1;
  return result;
}
