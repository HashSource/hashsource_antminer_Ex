void __fastcall sub_25B98(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v9; // r0

  if ( a3 != 15 )
  {
    if ( dword_487978 )
    {
      v9 = (_DWORD *)sub_242FF0(a1);
      sub_2594D8(*v9, "displaced: writing r%d value %.8lx\n", a3, a5);
    }
    if ( !a1 )
    {
      sub_94728(
        "regcache.c",
        809,
        "%s: Assertion `%s' failed.",
        "void regcache_cooked_write_unsigned(regcache*, int, ULONGEST)",
        "regcache != NULL");
      JUMPOUT(0x1DFC84);
    }
    JUMPOUT(0x1E02F4);
  }
  sub_20CFC(a1, a2, a5, a6, a7);
}
