int sub_210578()
{
  sub_539E8(
    "return",
    2,
    (int)sub_20E914,
    (int)"Make selected stack frame return to its caller.\n"
         "Control remains in the debugger, but when you continue\n"
         "execution will resume in the frame above the one now selected.\n"
         "If an argument is given, it is an expression for the value to return.");
  sub_539E8(
    "up",
    2,
    (int)sub_20F568,
    (int)"Select and print stack frame that called this one.\nAn argument says how many frames up to go.");
  sub_539E8(
    "up-silently",
    4,
    (int)sub_20F564,
    (int)"Same as the `up' command, but does not print anything.\nThis is useful in command scripts.");
  sub_539E8(
    "down",
    2,
    (int)sub_20F4E0,
    (int)"Select and print stack frame called by this one.\nAn argument says how many frames down to go.");
  sub_547D8((int)"do", "down", 2, 1);
  sub_547D8((int)"dow", "down", 2, 1);
  sub_539E8(
    "down-silently",
    4,
    (int)sub_20F4DC,
    (int)"Same as the `down' command, but does not print anything.\nThis is useful in command scripts.");
  sub_539E8(
    "frame",
    2,
    (int)sub_2102CC,
    (int)"Select and print a stack frame.\n"
         "With no argument, print the selected stack frame.  (See also \"info frame\").\n"
         "An argument specifies the frame to select.\n"
         "It can be a stack frame number or the address of the frame.\n");
  sub_547D8((int)"f", (unsigned __int8 *)"frame", 2, 1);
  sub_53A20(
    "select-frame",
    2,
    (int)sub_20F894,
    (int)"Select a stack frame without printing anything.\n"
         "An argument specifies the frame to select.\n"
         "It can be a stack frame number or the address of the frame.\n",
    (int)&dword_4747EC);
  sub_539E8(
    "backtrace",
    2,
    (int)sub_20EC78,
    (int)"Print backtrace of all stack frames, or innermost COUNT frames.\n"
         "With a negative argument, print outermost -COUNT frames.\n"
         "Use of the 'full' qualifier also prints the values of the local variables.\n"
         "Use of the 'no-filters' qualifier prohibits frame filters from executing\n"
         "on this backtrace.\n");
  sub_547D8((int)"bt", "backtrace", 2, 0);
  sub_547D8((int)"where", "backtrace", 8, 0);
  sub_539B4("stack", (int)sub_20EC78, (int)"Backtrace of the stack, or innermost COUNT frames.");
  sub_547B0((int)&word_3DDCA0, (unsigned __int8 *)"stack", 1);
  sub_539B4("frame", (int)sub_20F8CC, (int)"All about selected stack frame, or frame at ADDR.");
  sub_547B0((int)"f", (unsigned __int8 *)"frame", 1);
  sub_539B4("locals", (int)sub_20C800, (int)"Local variables of current stack frame.");
  sub_539B4("args", (int)sub_20F2C8, (int)"Argument variables of current stack frame.");
  if ( dword_487A74 )
    sub_539E8("func", 2, (int)sub_210318, (int)"Select the stack frame that contains <func>.\nUsage: func <name>\n");
  sub_53514(
    "frame-arguments",
    2,
    (int)&off_3DF16C,
    (int)off_46DB8C,
    "Set printing of non-scalar frame arguments",
    "Show printing of non-scalar frame arguments",
    0,
    0,
    0,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_535E0(
    "frame-arguments",
    -1,
    (int)&dword_489670,
    "Set whether to print frame arguments in raw form.",
    "Show whether to print frame arguments in raw form.",
    "If set, frame arguments are printed in raw form, bypassing any\npretty-printers for that value.",
    0,
    0,
    (int **)&dword_48A9FC,
    (int **)&dword_48A9F8);
  sub_53578(
    "disassemble-next-line",
    2,
    (int)&dword_489688,
    "Set whether to disassemble next source line or insn when execution stops.",
    "Show whether to disassemble next source line or insn when execution stops.",
    "If ON, GDB will display disassembly of the next source line, in addition\n"
    "to displaying the source line itself.  If the next source line cannot\n"
    "be displayed (e.g., source is unavailable or there's no line info), GDB\n"
    "will display disassembly of next instruction instead of showing the\n"
    "source line.\n"
    "If AUTO, display disassembly of next instruction only if the source line\n"
    "cannot be displayed.\n"
    "If OFF (which is the default), never display the disassembly of the next\n"
    "source line.",
    0,
    (int)sub_20C594,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  dword_489688 = 1;
  return sub_53514(
           "entry-values",
           2,
           (int)off_3DF17C,
           (int)off_46DB90,
           "Set printing of function arguments at function entry",
           "Show printing of function arguments at function entry",
           "GDB can sometimes determine the values of function arguments at entry,\n"
           "in addition to their current values.  This option tells GDB whether\n"
           "to print the current value, the value at entry (marked as val@entry),\n"
           "or both.  Note that one or both of these values may be <optimized out>.",
           0,
           0,
           (int **)&dword_47477C,
           (int **)&dword_474778);
}
