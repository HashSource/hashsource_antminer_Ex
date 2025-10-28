int sub_1D3C34()
{
  int v0; // r0
  int v1; // r0
  int result; // r0

  sub_5395C(
    "record",
    -1,
    (int)&dword_487D4C,
    "Set debugging of record/replay feature.",
    "Show debugging of record/replay feature.",
    "When enabled, debugging output for record/replay feature is displayed.",
    0,
    (int)sub_1D3168,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_53834(
    "instruction-history-size",
    -1,
    (int)&dword_487D48,
    "Set number of instructions to print in \"record instruction-history\".",
    "Show number of instructions to print in \"record instruction-history\".",
    "A size of \"unlimited\" means unlimited instructions.  The default is 10.",
    (int)sub_1D2E30,
    0,
    (int **)&dword_487D54,
    (int **)&dword_487D50);
  sub_53834(
    "function-call-history-size",
    -1,
    (int)&dword_487D44,
    "Set number of function to print in \"record function-call-history\".",
    "Show number of functions to print in \"record function-call-history\".",
    "A size of \"unlimited\" means unlimited lines.  The default is 10.",
    (int)sub_1D2DE8,
    0,
    (int **)&dword_487D54,
    (int **)&dword_487D50);
  v0 = sub_53420(
         "record",
         10,
         (int)sub_1D315C,
         (int)"Start recording.",
         &dword_487D58,
         (int)"record ",
         0,
         (int **)&dword_474744);
  sub_53274(v0, (int)&loc_F6D28);
  sub_547D8((int)"rec", (unsigned __int8 *)"record", 10, 1);
  sub_53420(
    "record",
    4,
    (int)sub_1D3120,
    (int)"Set record options",
    &dword_487D54,
    (int)"set record ",
    0,
    (int **)&dword_47475C);
  sub_5474C((int)"rec", (unsigned __int8 *)"record", 10, 1, &dword_47475C);
  sub_53420(
    "record",
    4,
    (int)sub_1D3108,
    (int)"Show record options",
    &dword_487D50,
    (int)"show record ",
    0,
    (int **)&dword_47474C);
  sub_5474C((int)"rec", (unsigned __int8 *)"record", 10, 1, &dword_47474C);
  sub_53420(
    "record",
    4,
    (int)sub_1D30C4,
    (int)"Info record options",
    dword_487D5C,
    (int)"info record ",
    0,
    (int **)&dword_474754);
  sub_5474C((int)"rec", (unsigned __int8 *)"record", 10, 1, &dword_474754);
  v1 = sub_5329C(
         "save",
         10,
         (int)sub_1D3068,
         (int)"Save the execution log to a file.\n"
              "Argument is optional filename.\n"
              "Default filename is 'gdb_record.<process_id>'.",
         &dword_487D58);
  sub_53274(v1, (int)&loc_F6D28);
  sub_5329C(
    "delete",
    10,
    (int)sub_1D36F8,
    (int)"Delete the rest of execution log and start recording it anew.",
    &dword_487D58);
  sub_5474C((int)"d", (unsigned __int8 *)"delete", 10, 1, (int *)&dword_487D58);
  sub_5474C((int)"del", (unsigned __int8 *)"delete", 10, 1, (int *)&dword_487D58);
  sub_5329C("stop", 10, (int)sub_1D302C, (int)"Stop the record/replay target.", &dword_487D58);
  sub_5474C((int)&word_3DDCA0, (unsigned __int8 *)"stop", 10, 1, (int *)&dword_487D58);
  sub_53420(
    "goto",
    10,
    (int)sub_1D3C30,
    (int)"Restore the program to its state at instruction number N.\n"
         "Argument is instruction number, as shown by 'info record'.",
    &dword_487D5C[1],
    (int)"record goto ",
    1,
    &dword_487D58);
  sub_5329C("begin", 10, (int)sub_1D2FFC, (int)"Go to the beginning of the execution log.", (int **)&dword_487D5C[1]);
  sub_5474C((int)"start", (unsigned __int8 *)"begin", 10, 1, &dword_487D5C[1]);
  sub_5329C("end", 10, (int)sub_1D2FCC, (int)"Go to the end of the execution log.", (int **)&dword_487D5C[1]);
  sub_5329C(
    "instruction-history",
    10,
    (int)sub_1D3428,
    (int)"Print disassembled instructions stored in the execution log.\n"
         "With a /m or /s modifier, source lines are included (if available).\n"
         "With a /r modifier, raw instructions in hex are included.\n"
         "With a /f modifier, function names are omitted.\n"
         "With a /p modifier, current position markers are omitted.\n"
         "With no argument, disassembles ten more instructions after the previous disassembly.\n"
         "\"record instruction-history -\" disassembles ten instructions before a previous disassembly.\n"
         "One argument specifies an instruction number as shown by 'info record', and ten instructions are disassembled a"
         "fter that instruction.\n"
         "Two arguments with comma between them specify starting and ending instruction numbers to disassemble.\n"
         "If the second argument is preceded by '+' or '-', it specifies the distance from the first argument.\n"
         "The number of instructions to disassemble can be defined with \"set record instruction-history-size\".",
    &dword_487D58);
  result = sub_5329C(
             "function-call-history",
             10,
             (int)sub_1D3178,
             (int)"Prints the execution history at function granularity.\n"
                  "It prints one line for each sequence of instructions that belong to the same function.\n"
                  "Without modifiers, it prints the function name.\n"
                  "With a /l modifier, the source file and line number range is included.\n"
                  "With a /i modifier, the instruction number range is included.\n"
                  "With a /c modifier, the output is indented based on the call stack depth.\n"
                  "With no argument, prints ten more lines after the previous ten-line print.\n"
                  "\"record function-call-history -\" prints ten lines before a previous ten-line print.\n"
                  "One argument specifies a function number as shown by 'info record', and ten lines are printed after th"
                  "at function.\n"
                  "Two arguments with comma between them specify a range of functions to print.\n"
                  "If the second argument is preceded by '+' or '-', it specifies the distance from the first argument.\n"
                  "The number of functions to print can be defined with \"set record function-call-history-size\".",
             &dword_487D58);
  dword_487D48 = dword_46DAB0;
  dword_487D44 = dword_46DAAC;
  return result;
}
