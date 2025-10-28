void __fastcall __noreturn sub_115280(int a1)
{
  const char *v2; // r1

  v2 = (const char *)sub_322B64();
  if ( v2 )
    sub_94708("DWARF operator %s cannot be translated to an agent expression", v2);
  sub_94708("Unknown DWARF operator 0x%02x cannot be translated to an agent expression", a1);
}
