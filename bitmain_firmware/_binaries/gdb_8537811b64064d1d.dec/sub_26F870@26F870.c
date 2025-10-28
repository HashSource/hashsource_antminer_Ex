int sub_26F870()
{
  sub_5329C(
    "convenience",
    -1,
    (int)&loc_26F134,
    (int)"Debugger convenience (\"$foo\") variables and functions.\n"
         "Convenience variables are created when you assign them values;\n"
         "thus, \"set $foo=1\" gives \"$foo\" the value 1.  Values may be any type.\n"
         "\n"
         "A few convenience variables are given values automatically:\n"
         "\"$_\"holds the last address examined with \"x\" or \"info lines\",\n"
         "\"$__\" holds the contents of the last address examined with \"x\".",
    (int **)&dword_47474C);
  sub_5474C((int)"conv", "convenience", -1, 1, &dword_47474C);
  sub_5329C(
    "values",
    16,
    (int)&loc_26C92C,
    (int)"Elements of value history around item number IDX (or last ten).",
    (int **)&dword_47474C);
  sub_539E8(
    "init-if-undefined",
    1,
    (int)sub_26A924,
    (int)"Initialize a convenience variable if necessary.\n"
         "init-if-undefined VARIABLE = EXPRESSION\n"
         "Set an internal VARIABLE to the result of the EXPRESSION if it does not\n"
         "exist or does not contain a value.  The EXPRESSION is not evaluated if the\n"
         "VARIABLE is already initialized.");
  sub_53420(
    "function",
    -1,
    (int)nullsub_98,
    (int)"Placeholder command for showing help on convenience functions.",
    &dword_48AA10,
    (int)"function ",
    0,
    (int **)&dword_474744);
  sub_26CE20(
    "_isvoid",
    (int)"Check whether an expression is void.\n"
         "Usage: $_isvoid (expression)\n"
         "Return 1 if the expression is void, zero otherwise.",
    (int)sub_26DB50,
    0);
  return sub_538F4(
           "max-value-size",
           4,
           (int)&dword_46DEB0,
           "Set maximum sized value gdb will load from the inferior.",
           "Show maximum sized value gdb will load from the inferior.",
           "Use this to control the maximum size, in bytes, of a value that gdb\n"
           "will load from the inferior.  Setting this value to 'unlimited'\n"
           "disables checking.\n"
           "Setting this does not invalidate already allocated values, it only\n"
           "prevents future values, larger than this size, from being allocated.",
           (int)sub_26AA40,
           (int)sub_26A8F8,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
