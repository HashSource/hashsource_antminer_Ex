void __fastcall sub_1D887C(int a1, int a2, int a3)
{
  int v3; // r2
  bool v4; // zf

  if ( dword_48809C )
  {
    v3 = dword_4880B0 + (a3 << 6);
    v4 = a2 == 0;
    if ( a2 )
      v4 = v3 == 0;
    if ( !v4 )
      JUMPOUT(0x1DEB60);
    sub_94728(
      (int)"regcache.c",
      1087,
      "%s: Assertion `%s' failed.",
      "void regcache_raw_collect(const regcache*, int, void*)",
      "regcache != NULL && buf != NULL");
    JUMPOUT(0x1DEC14);
  }
  sub_94708("You can't do that without a process to debug.");
}
