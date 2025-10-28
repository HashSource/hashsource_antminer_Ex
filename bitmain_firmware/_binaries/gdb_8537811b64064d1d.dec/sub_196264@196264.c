_DWORD *__fastcall sub_196264(const char *a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_19562C((int)a1, a2);
  if ( !result || !*result )
  {
    if ( sub_1B7BC4(result) || sub_1B7B4C(0) )
      sub_92F8C(2, "No source file named %s.", a1);
    sub_92F8C(2, "No symbol table is loaded.  Use the \"file\" command.");
    JUMPOUT(0x1962C0);
  }
  return result;
}
