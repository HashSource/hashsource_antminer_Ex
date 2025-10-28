int sub_2561BC()
{
  int v0; // r0
  int v1; // r0

  v0 = sub_539E8(
         "ptype",
         1,
         (int)sub_255B84,
         (int)"Print definition of type TYPE.\n"
              "Usage: ptype[/FLAGS] TYPE | EXPRESSION\n"
              "Argument may be any type (for example a type name defined by typedef,\n"
              "or \"struct STRUCT-TAG\" or \"class CLASS-NAME\" or \"union UNION-TAG\"\n"
              "or \"enum ENUM-TAG\") or an expression.\n"
              "The selected stack frame's lexical context is used to look up the name.\n"
              "Contrary to \"whatis\", \"ptype\" always unrolls any typedefs.\n"
              "\n"
              "Available FLAGS are:\n"
              "  /r    print in \"raw\" form; do not substitute typedefs\n"
              "  /m    do not print methods defined in a class\n"
              "  /M    print methods defined in a class\n"
              "  /t    do not print typedefs defined in a class\n"
              "  /T    print typedefs defined in a class\n"
              "  /o    print offsets and sizes of fields in a struct (like pahole)\n");
  sub_53274(v0, (int)sub_F7440);
  v1 = sub_539E8(
         "whatis",
         1,
         (int)sub_255B7C,
         (int)"Print data type of expression EXP.\nOnly one level of typedefs is unrolled.  See also \"ptype\".");
  sub_53274(v1, (int)sub_F7440);
  sub_53420(
    "type",
    -1,
    (int)sub_255358,
    (int)"Generic command for showing type-printing settings.",
    &dword_48A99C,
    (int)"show print type ",
    0,
    (int **)&dword_474778);
  sub_53420(
    "type",
    -1,
    (int)sub_25531C,
    (int)"Generic command for setting how types print.",
    &dword_48A9A0,
    (int)"show print type ",
    0,
    (int **)&dword_47477C);
  sub_535E0(
    "methods",
    -1,
    (int)&dword_46DD3C,
    "Set printing of methods defined in classes.",
    "Show printing of methods defined in classes.",
    0,
    (int)sub_25520C,
    (int)sub_25530C,
    &dword_48A9A0,
    (int **)&dword_48A99C);
  sub_535E0(
    "typedefs",
    -1,
    (int)&dword_46DD40,
    "Set printing of typedefs defined in classes.",
    "Show printing of typedefs defined in classes.",
    0,
    (int)sub_255228,
    (int)sub_2552FC,
    &dword_48A9A0,
    (int **)&dword_48A99C);
  return sub_538F4(
           "nested-type-limit",
           -1,
           (int)&dword_48A998,
           "Set the number of recursive nested type definitions to print (\"unlimited\" or -1 to show all).",
           "Show the number of recursive nested type definitions to print.",
           0,
           (int)sub_255244,
           (int)sub_2552D4,
           &dword_48A9A0,
           (int **)&dword_48A99C);
}
