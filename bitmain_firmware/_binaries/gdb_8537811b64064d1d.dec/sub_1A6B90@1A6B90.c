int sub_1A6B90()
{
  int v0; // r0

  sub_53420(
    "maintenance",
    11,
    (int)sub_1A5DB0,
    (int)"Commands for use by GDB maintainers.\n"
         "Includes commands to dump specific internal GDB structures in\n"
         "a human readable form, to cause GDB to deliberately dump core, etc.",
    &dword_47478C,
    (int)"maintenance ",
    0,
    (int **)&dword_474744);
  sub_547D8((int)"mt", "maintenance", 11, 1);
  sub_53420(
    "info",
    11,
    (int)sub_1A5D74,
    (int)"Commands for showing internal info about the program being debugged.",
    &dword_474788,
    (int)"maintenance info ",
    0,
    (int **)&dword_47478C);
  sub_5474C((int)"i", (unsigned __int8 *)"info", 11, 1, &dword_47478C);
  sub_5329C(
    "sections",
    11,
    (int)sub_1A646C,
    (int)"List the BFD sections of the exec and core files. \n"
         "Arguments may be any combination of:\n"
         "\t[one or more section names]\n"
         "\tALLOC LOAD RELOC READONLY CODE DATA ROM CONSTRUCTOR\n"
         "\tHAS_CONTENTS NEVER_LOAD COFF_SHARED_LIBRARY IS_COMMON\n"
         "Sections matching any argument will be listed (no argument\n"
         "implies all sections).  In addition, the special argument\n"
         "\tALLOBJ\n"
         "lists all sections from all object files, including shared libraries.",
    (int **)&dword_474788);
  sub_53420(
    "print",
    11,
    (int)sub_1A5D38,
    (int)"Maintenance command for printing GDB internal state.",
    &dword_474784,
    (int)"maintenance print ",
    0,
    (int **)&dword_47478C);
  sub_53420(
    "set",
    11,
    (int)sub_1A5CFC,
    (int)"Set GDB internal variables used by the GDB maintainer.\n"
         "Configure variables internal to GDB that aid in GDB's maintenance",
    &dword_487A7C,
    (int)"maintenance set ",
    0,
    (int **)&dword_47478C);
  sub_53420(
    "show",
    11,
    (int)sub_1A5E14,
    (int)"Show GDB internal variables used by the GDB maintainer.\n"
         "Configure variables internal to GDB that aid in GDB's maintenance",
    &dword_487A84,
    (int)"maintenance show ",
    0,
    (int **)&dword_47478C);
  sub_5329C(
    "dump-me",
    11,
    (int)sub_1A61A4,
    (int)"Get fatal error; make debugger dump its core.\n"
         "GDB sets its handling of SIGQUIT back to SIG_DFL and then sends\n"
         "itself a SIGQUIT signal.",
    (int **)&dword_47478C);
  sub_5329C(
    "internal-error",
    11,
    (int)sub_1A5938,
    (int)"Give GDB an internal error.\nCause GDB to behave as if an internal error was detected.",
    (int **)&dword_47478C);
  sub_5329C(
    "internal-warning",
    11,
    (int)sub_1A5E54,
    (int)"Give GDB an internal warning.\nCause GDB to behave as if an internal warning was reported.",
    (int **)&dword_47478C);
  sub_5329C(
    "demangler-warning",
    11,
    (int)sub_1A5E2C,
    (int)"Give GDB a demangler warning.\nCause GDB to behave as if a demangler warning was reported.",
    (int **)&dword_47478C);
  v0 = sub_5329C(
         "demangle",
         11,
         (int)sub_1A5724,
         (int)"This command has been moved to \"demangle\".",
         (int **)&dword_47478C);
  sub_532D0(v0, (int)"demangle");
  sub_53420(
    "per-command",
    11,
    (int)sub_1A60FC,
    (int)"Per-command statistics settings.",
    &dword_487A90,
    (int)"set per-command ",
    1,
    (int **)&dword_487A7C);
  sub_53420(
    "per-command",
    11,
    (int)sub_1A5DFC,
    (int)"Show per-command statistics settings.",
    &dword_487A80,
    (int)"show per-command ",
    0,
    (int **)&dword_487A84);
  sub_535E0(
    "time",
    11,
    (int)&dword_487A94,
    "Set whether to display per-command execution time.",
    "Show whether to display per-command execution time.",
    "If enabled, the execution time for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_535E0(
    "space",
    11,
    (int)&dword_487A98,
    "Set whether to display per-command space usage.",
    "Show whether to display per-command space usage.",
    "If enabled, the space usage for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_535E0(
    (char *)&aLineNumbersRec[32],
    11,
    (int)&dword_487A9C,
    "Set whether to display per-command symtab statistics.",
    "Show whether to display per-command symtab statistics.",
    "If enabled, the basic symtab statistics for each command will be\ndisplayed following the command's output.",
    0,
    0,
    (int **)&dword_487A90,
    (int **)&dword_487A80);
  sub_5329C(
    "time",
    11,
    (int)sub_1A670C,
    (int)"Set the display of time usage.\n"
         "If nonzero, will cause the execution time for each command to be\n"
         "displayed, following the command's output.",
    (int **)&dword_47478C);
  sub_5329C(
    "space",
    11,
    (int)sub_1A674C,
    (int)"Set the display of space usage.\n"
         "If nonzero, will cause the execution space for each command to be\n"
         "displayed, following the command's output.",
    (int **)&dword_47478C);
  sub_5329C(
    "type",
    11,
    (int)sub_256148,
    (int)"Print a type chain for a given symbol.\n"
         "For each node in a type chain, print the raw data for each member of\n"
         "the type structure, and the interpretation of the data.",
    (int **)&dword_474784);
  sub_5329C("statistics", 11, (int)sub_1A5DEC, (int)"Print statistics about internal gdb state.", (int **)&dword_474784);
  sub_5329C(
    "architecture",
    11,
    (int)sub_1A71B8,
    (int)"Print the internal architecture configuration.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_53420(
    "check",
    11,
    (int)sub_1A5CC0,
    (int)"Commands for checking internal gdb state.",
    &dword_474780,
    (int)"maintenance check ",
    0,
    (int **)&dword_47478C);
  sub_5329C(
    "translate-address",
    11,
    (int)&loc_1A5964,
    (int)"Translate a section name and address to a symbol.",
    (int **)&dword_47478C);
  sub_5329C(
    "deprecate",
    11,
    (int)sub_1A5904,
    (int)"Deprecate a command.  Note that this is just in here so the \n"
         "testsuite can check the command deprecator. You probably shouldn't use this,\n"
         "rather you should use the C function deprecate_cmd().  If you decide you \n"
         "want to use it: maintenance deprecate 'commandname' \"replacement\". The \n"
         "replacement is optional.",
    (int **)&dword_47478C);
  sub_5329C(
    "undeprecate",
    11,
    (int)sub_1A58D0,
    (int)"Undeprecate a command.  Note that this is just in here so the \n"
         "testsuite can check the command deprecator. You probably shouldn't use this,\n"
         "If you decide you want to use it: maintenance undeprecate 'commandname'",
    (int **)&dword_47478C);
  sub_5329C(
    "selftest",
    11,
    (int)sub_1A5718,
    (int)"Run gdb's unit tests.\n"
         "Usage: maintenance selftest [filter]\n"
         "This will run any unit tests that were built in to gdb.\n"
         "If a filter is given, only the tests with that value in their name will ran.",
    (int **)&dword_47478C);
  sub_5329C("selftests", 11, (int)sub_1A678C, (int)"List the registered selftests.", (int **)&dword_474788);
  sub_5389C(
    "watchdog",
    11,
    (int)&dword_487AA0,
    "Set watchdog timer.",
    "Show watchdog timer.",
    "When non-zero, this timeout is used instead of waiting forever for a target\n"
    "to finish a low-level step or continue operation.  If the specified amount\n"
    "of time passes without a response from the target, an error occurs.",
    0,
    (int)sub_1A56F0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  return sub_535E0(
           "profile",
           11,
           (int)&dword_487A88,
           "Set internal profiling.",
           "Show internal profiling.",
           "When enabled GDB is profiled.",
           (int)sub_1A6094,
           (int)sub_1A56E0,
           (int **)&dword_487A7C,
           (int **)&dword_487A84);
}
