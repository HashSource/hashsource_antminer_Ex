void __fastcall sub_231DD4(int a1)
{
  sub_243C5C(a1);
  if ( sub_183CD0() )
  {
    if ( a1 && sub_183DC4() && !sub_25A40C("A program is being debugged already.  Kill it? ") )
      sub_94708("Program not killed.");
    sub_183B60((int (__fastcall *)(int, int))sub_2308BC, 0);
  }
  while ( dword_489AD8 > 1 )
    sub_231D2C(dword_489F70);
  sub_23082C(a1);
}
