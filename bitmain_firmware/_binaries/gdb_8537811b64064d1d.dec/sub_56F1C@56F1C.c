int sub_56F1C()
{
  int result; // r0

  sub_53420(
    "logging",
    4,
    (int)sub_56D10,
    (int)"Set logging options",
    &dword_474800,
    (int)"set logging ",
    0,
    (int **)&dword_47475C);
  sub_53420(
    "logging",
    4,
    (int)sub_56D1C,
    (int)"Show logging options",
    &dword_474804,
    (int)"show logging ",
    0,
    (int **)&dword_47474C);
  sub_535E0(
    "overwrite",
    4,
    (int)&dword_4747F8,
    "Set whether logging overwrites or appends to the log file.",
    "Show whether logging overwrites or appends to the log file.",
    "If set, logging overrides the log file.",
    (int)sub_56CEC,
    (int)sub_56CDC,
    &dword_474800,
    &dword_474804);
  sub_535E0(
    "redirect",
    4,
    (int)&dword_4747FC,
    "Set the logging output mode.",
    "Show the logging output mode.",
    "If redirect is off, output will go to both the screen and the log file.\n"
    "If redirect is on, output will go only to the log file.",
    (int)sub_56D0C,
    (int)sub_56CCC,
    &dword_474800,
    &dword_474804);
  sub_53648(
    "file",
    4,
    (int)&dword_4747F0,
    "Set the current logfile.",
    "Show the current logfile.",
    "The logfile is used when directing GDB's output.",
    0,
    (int)sub_56CBC,
    &dword_474800,
    &dword_474804);
  sub_5329C("on", 4, (int)sub_56AE8, (int)"Enable logging.", &dword_474800);
  sub_5329C("off", 4, (int)sub_56DC0, (int)"Disable logging.", &dword_474800);
  result = sub_32727C("gdb.txt");
  dword_4747F0 = result;
  return result;
}
