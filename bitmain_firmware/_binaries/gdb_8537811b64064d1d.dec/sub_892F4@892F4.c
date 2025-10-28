int __fastcall sub_892F4(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_475148;
  if ( !a1 )
  {
    v3 = sub_94728("m2-exp.y", 1045, "%s: Assertion `%s' failed.", "int m2_parse(parser_state*)", "par_state != NULL");
    dword_475148 = v1;
    sub_339024(v3);
  }
  dword_475148 = a1;
  result = sub_88354();
  dword_475148 = v1;
  return result;
}
