void __fastcall sub_134A8C(int a1, _DWORD *a2)
{
  const char *v3; // r0

  if ( !sub_12E6BC(a1, 29, (int)a2) )
  {
    v3 = (const char *)sub_1B87D0(*a2);
    sub_94708("Dwarf Error: Problem turning containing type into gdb type [in module %s]", v3);
  }
  JUMPOUT(0x134408);
}
