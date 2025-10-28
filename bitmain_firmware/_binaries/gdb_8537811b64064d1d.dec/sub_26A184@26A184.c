int sub_26A184()
{
  sub_53420(
    "print",
    -1,
    (int)sub_2663E0,
    (int)"Generic command for setting how things print.",
    &dword_47477C,
    (int)"set print ",
    0,
    (int **)&dword_47475C);
  sub_5474C((int)"p", (unsigned __int8 *)"print", -1, 1, &dword_47475C);
  sub_5474C((int)"pr", (unsigned __int8 *)"print", -1, 1, &dword_47475C);
  sub_53420(
    "print",
    -1,
    (int)sub_26638C,
    (int)"Generic command for showing print settings.",
    &dword_474778,
    (int)"show print ",
    0,
    (int **)&dword_47474C);
  sub_5474C((int)"p", (unsigned __int8 *)"print", -1, 1, &dword_47474C);
  sub_5474C((int)"pr", (unsigned __int8 *)"print", -1, 1, &dword_47474C);
  sub_53420(
    "raw",
    -1,
    (int)sub_2663A4,
    (int)"Generic command for setting what things to print in \"raw\" mode.",
    &dword_48A9FC,
    (int)"set print raw ",
    0,
    (int **)&dword_47477C);
  sub_53420(
    "raw",
    -1,
    (int)sub_266374,
    (int)"Generic command for showing \"print raw\" settings.",
    &dword_48A9F8,
    (int)"show print raw ",
    0,
    (int **)&dword_474778);
  sub_53834(
    "elements",
    -1,
    (int)&unk_46DE78,
    "Set limit on string chars or array elements to print.",
    "Show limit on string chars or array elements to print.",
    "\"set print elements unlimited\" causes there to be no limit.",
    0,
    (int)sub_265DD4,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "null-stop",
    -1,
    (int)&unk_46DE88,
    "Set printing of char arrays to stop at first null char.",
    "Show printing of char arrays to stop at first null char.",
    0,
    0,
    (int)sub_265DC4,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_53834(
    "repeats",
    -1,
    (int)&unk_46DE7C,
    "Set threshold for repeated print elements.",
    "Show threshold for repeated print elements.",
    "\"set print repeats unlimited\" causes all elements to be individually printed.",
    0,
    (int)sub_265DB4,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "pretty",
    4,
    (int)&unk_46DE64,
    "Set pretty formatting of structures.",
    "Show pretty formatting of structures.",
    0,
    0,
    (int)sub_265DA4,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "union",
    4,
    (int)&unk_46DE6C,
    "Set printing of unions interior to structures.",
    "Show printing of unions interior to structures.",
    0,
    0,
    (int)sub_265D94,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "array",
    4,
    (int)&unk_46DE60,
    "Set pretty formatting of arrays.",
    "Show pretty formatting of arrays.",
    0,
    0,
    (int)sub_265D84,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "address",
    4,
    (int)&unk_46DE70,
    "Set printing of addresses.",
    "Show printing of addresses.",
    0,
    0,
    (int)sub_265D74,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "symbol",
    4,
    (int)&unk_46DEA4,
    "Set printing of symbol names when printing pointers.",
    "Show printing of symbol names when printing pointers.",
    0,
    0,
    (int)sub_265D64,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_5395C(
    "input-radix",
    4,
    (int)&dword_46DEAC,
    "Set default input radix for entering numbers.",
    "Show default input radix for entering numbers.",
    0,
    (int)sub_2665C8,
    (int)sub_265D54,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5395C(
    "output-radix",
    4,
    (int)&dword_46DEA8,
    "Set default output radix for printing of values.",
    "Show default output radix for printing of values.",
    0,
    (int)sub_266520,
    (int)sub_265D44,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5329C(
    "radix",
    4,
    (int)sub_266534,
    (int)"Set default input and output number radices.\n"
         "Use 'set input-radix' or 'set output-radix' to independently set each.\n"
         "Without an argument, sets both radices back to the default value of 10.",
    (int **)&dword_47475C);
  sub_5329C(
    "radix",
    4,
    (int)sub_26641C,
    (int)"Show the default input and output number radices.\n"
         "Use 'show input-radix' or 'show output-radix' to independently show each.",
    (int **)&dword_47474C);
  return sub_535E0(
           "array-indexes",
           4,
           (int)&unk_46DE8C,
           "Set printing of array indexes.",
           "Show printing of array indexes",
           0,
           0,
           (int)sub_265D34,
           (int **)&dword_47477C,
           (int **)&dword_474778);
}
