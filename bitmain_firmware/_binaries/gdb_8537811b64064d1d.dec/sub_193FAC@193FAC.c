int __fastcall sub_193FAC(int a1)
{
  _DWORD *v1; // r0
  int v2; // r0
  int result; // r0
  int v4; // r0
  _DWORD *v5; // r0

  if ( dword_487A04 )
  {
    v5 = (_DWORD *)sub_242FB4(a1);
    v2 = sub_25A440(*v5, "The current source language is \"%s\".\n", *(const char **)off_46D5A4[0]);
  }
  else
  {
    v1 = (_DWORD *)sub_242FB4(a1);
    v2 = sub_25A440(*v1, "The current source language is \"auto; currently %s\".\n", *(const char **)off_46D5A4[0]);
  }
  result = sub_15D52C(v2);
  if ( result )
  {
    v4 = sub_15F810(0);
    result = sub_16033C(v4);
    if ( result )
    {
      if ( dword_487A04 == 1 && (char *)result != off_46D5A4[0][2] )
        return sub_259F38("%s\n", aWarningTheCurr);
    }
  }
  return result;
}
