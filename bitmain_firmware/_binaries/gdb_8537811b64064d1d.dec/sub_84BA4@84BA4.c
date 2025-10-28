int __fastcall sub_84BA4(int a1)
{
  int v1; // r5
  int result; // r0
  int v3; // r0

  v1 = dword_475068;
  if ( !a1 )
  {
    v3 = sub_94728("f-exp.y", 1218, "%s: Assertion `%s' failed.", "int f_parse(parser_state*)", "par_state != NULL");
    dword_475068 = v1;
    sub_339024(v3);
  }
  dword_475068 = a1;
  result = sub_83B2C();
  dword_475068 = v1;
  return result;
}
