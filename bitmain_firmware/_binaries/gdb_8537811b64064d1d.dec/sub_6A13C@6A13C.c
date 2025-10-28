int sub_6A13C()
{
  sub_539E8(
    "guile-repl",
    10,
    (int)sub_6A084,
    (int)"Start a Guile interactive prompt.\n"
         "\n"
         "Guile scripting is not supported in this copy of GDB.\n"
         "This command is only a placeholder.");
  sub_547D8((int)"gr", "guile-repl", 10, 1);
  sub_539E8(
    "guile",
    10,
    (int)sub_6A0B8,
    (int)"Evaluate a Guile expression.\n"
         "\n"
         "Guile scripting is not supported in this copy of GDB.\n"
         "This command is only a placeholder.");
  sub_547D8((int)"gu", "guile", 10, 1);
  sub_53420(
    "guile",
    10,
    (int)sub_6A03C,
    (int)"Prefix command for Guile preference settings.",
    &dword_4748A4,
    (int)"set guile ",
    0,
    (int **)&dword_47475C);
  sub_5474C((int)"gu", "guile", 10, 1, &dword_47475C);
  sub_53420(
    "guile",
    10,
    (int)sub_6A06C,
    (int)"Prefix command for Guile preference settings.",
    &dword_4748A8,
    (int)"show guile ",
    0,
    (int **)&dword_47474C);
  sub_5474C((int)"gu", "guile", 10, 1, &dword_47474C);
  sub_53420(
    "guile",
    10,
    (int)sub_6A000,
    (int)"Prefix command for Guile info displays.",
    &dword_4748A0,
    (int)"info guile ",
    0,
    (int **)&dword_474754);
  sub_547B0((int)"gu", "guile", 1);
  return sub_53514(
           "print-stack",
           -1,
           (int)off_35CC60,
           (int)&off_46BA10,
           "Set mode for Guile exception printing on error.",
           "Show the mode of Guile exception printing on error.",
           "none  == no stack or message will be printed.\n"
           "full == a message and a stack will be printed.\n"
           "message == an error message without a stack will be printed.",
           0,
           0,
           (int **)&dword_4748A4,
           (int **)&dword_4748A8);
}
