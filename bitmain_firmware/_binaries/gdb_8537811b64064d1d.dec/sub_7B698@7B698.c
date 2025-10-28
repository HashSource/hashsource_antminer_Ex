_DWORD *__fastcall sub_7B698(char *a1)
{
  _DWORD *v2; // r4

  v2 = sub_7B618();
  if ( !sub_31E604((int)v2, a1) )
  {
    sub_94728(
      "cp-name-parser.y",
      206,
      "%s: Assertion `%s' failed.",
      "demangle_component* make_operator(const char*, int)",
      "i");
    JUMPOUT(0x7B6FC);
  }
  return v2;
}
