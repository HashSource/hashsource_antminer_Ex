int __fastcall sub_8C394(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_47517C;
  if ( !a1 )
  {
    v3 = sub_94728(
           "p-exp.y",
           1727,
           "%s: Assertion `%s' failed.",
           "int pascal_parse(parser_state*)",
           "par_state != NULL");
    dword_47517C = v1;
    sub_339024(v3);
  }
  dword_47517C = a1;
  result = sub_8AB3C();
  dword_47517C = v1;
  return result;
}
