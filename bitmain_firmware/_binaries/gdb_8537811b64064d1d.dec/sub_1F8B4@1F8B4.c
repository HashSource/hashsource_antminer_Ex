void __fastcall sub_1F8B4(int a1)
{
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
