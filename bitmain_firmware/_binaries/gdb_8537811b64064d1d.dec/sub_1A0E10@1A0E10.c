int sub_1A0E10()
{
  sub_53420(
    "macro",
    5,
    (int)sub_1A0958,
    (int)"Prefix for commands dealing with C preprocessor macros.",
    &dword_487A18,
    (int)"macro ",
    0,
    (int **)&dword_474744);
  sub_5329C(
    "expand",
    -1,
    (int)sub_1A086C,
    (int)"Fully expand any C/C++ preprocessor macro invocations in EXPRESSION.\nShow the expanded expression.",
    (int **)&dword_487A18);
  sub_5474C((int)"exp", "expand", -1, 1, &dword_487A18);
  sub_5329C(
    "expand-once",
    -1,
    (int)sub_1A0780,
    (int)"Expand C/C++ preprocessor macro invocations appearing directly in EXPRESSION.\n"
         "Show the expanded expression.\n"
         "\n"
         "This command differs from `macro expand' in that it only expands macro\n"
         "invocations that appear directly in EXPRESSION; if expanding a macro\n"
         "introduces further macro invocations, those are left unexpanded.\n"
         "\n"
         "`macro expand-once' helps you see how a particular macro expands,\n"
         "whereas `macro expand' shows you how all the macros involved in an\n"
         "expression work together to yield a pre-processed expression.",
    (int **)&dword_487A18);
  sub_5474C((int)"exp1", "expand-once", -1, 1, &dword_487A18);
  sub_539B4(
    "macro",
    (int)sub_1A056C,
    (int)"Show the definition of MACRO, and it's source location.\n"
         "Usage: info macro [-a|-all] [--] MACRO\n"
         "Options: \n"
         "  -a, --all    Output all definitions of MACRO in the current compilation unit.\n"
         "  --           Specify the end of arguments and the beginning of the MACRO.");
  sub_539B4(
    "macros",
    (int)sub_1A044C,
    (int)"Show the definitions of all macros at LINESPEC, or the current source location.\n"
         "Usage: info macros [LINESPEC]");
  sub_5329C(
    "define",
    -1,
    (int)sub_1A0B1C,
    (int)"Define a new C/C++ preprocessor macro.\n"
         "The GDB command `macro define DEFINITION' is equivalent to placing a\n"
         "preprocessor directive of the form `#define DEFINITION' such that the\n"
         "definition is visible in all the inferior's source files.\n"
         "For example:\n"
         "  (gdb) macro define PI (3.1415926)\n"
         "  (gdb) macro define MIN(x,y) ((x) < (y) ? (x) : (y))",
    (int **)&dword_487A18);
  sub_5329C(
    "undef",
    -1,
    (int)sub_1A0A94,
    (int)"Remove the definition of the C/C++ preprocessor macro with the given name.",
    (int **)&dword_487A18);
  return sub_5329C(
           "list",
           -1,
           (int)sub_1A009C,
           (int)"List all the macros defined using the `macro define' command.",
           (int **)&dword_487A18);
}
