int sub_C3DDC()
{
  sub_D23FC();
  memcpy(&unk_47826C, off_46C04C, 0x48u);
  dword_478274 = (int)sub_C39D4;
  dword_478278 = (int)sub_C38D8;
  dword_47827C = (int)sub_C3864;
  dword_47828C = (int)sub_C3A8C;
  dword_478290 = (int)sub_C3C14;
  dword_478298 = (int)sub_C3B78;
  dword_47829C = (int)sub_C3AE8;
  dword_4782AC = (int)sub_C38D0;
  dword_478268 = (int)sub_930BC(0x98u, 4u);
  return sub_D21EC(
           "signal",
           "Catch signals by their names and/or numbers.\n"
           "Usage: catch signal [[NAME|NUMBER] [NAME|NUMBER]...|all]\n"
           "Arguments say which signals to catch.  If no arguments\n"
           "are given, every \"normal\" signal will be caught.\n"
           "The argument \"all\" means to also catch signals used by GDB.\n"
           "Arguments, if given, should be one or more signal names\n"
           "(if your system supports that), or signal numbers.",
           sub_C3EAC,
           sub_F7A7C,
           0,
           1);
}
