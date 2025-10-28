int __fastcall sub_1CD68C(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD *v4; // r0

  v2 = sub_183B0C(a1);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 12) )
    {
      v4 = (_DWORD *)((int (*)(void))loc_23E800)();
      if ( v4 )
        return sub_23FA18(v4[2], v4[3], v4[4]);
    }
  }
  sub_23FA18(dword_475848, qword_47584C, HIDWORD(qword_47584C));
  result = a1;
  if ( dword_487D2C != a1 )
  {
    if ( !a1 )
    {
      sub_94728(
        (int)"progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD30C);
    }
    dword_487D2C = a1;
    return sub_15D7A0();
  }
  return result;
}
