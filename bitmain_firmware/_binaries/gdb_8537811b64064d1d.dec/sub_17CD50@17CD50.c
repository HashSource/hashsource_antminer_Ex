int __fastcall sub_17CD50(int a1, int a2, int a3)
{
  int result; // r0

  sub_231DD4(a3);
  result = sub_231BA0(a1);
  dword_4878E0 = 1;
  if ( a3 )
    return sub_259F38("Done.  Use the \"run\" command to start a process.\n");
  return result;
}
