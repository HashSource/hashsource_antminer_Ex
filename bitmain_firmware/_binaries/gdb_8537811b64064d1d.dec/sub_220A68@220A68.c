_DWORD *sub_220A68()
{
  int i; // r3

  for ( i = 0; i != 16; ++i )
    dword_4897FC[4 * i] = i;
  dword_489704 = sub_1CD128(0, (int)sub_219850);
  dword_489700 = sub_1CD128(0, (int)sub_21981C);
  sub_539B4("variables", (int)sub_222614, (int)"All global and static variable names, or those matching REGEXP.");
  if ( dword_487A74 )
    sub_539E8("whereis", 5, (int)sub_222614, (int)"All global and static variable names, or those matching REGEXP.");
  sub_539B4("functions", (int)sub_22260C, (int)"All function names, or those matching REGEXP.");
  sub_539B4("types", (int)&loc_222604, (int)"All type names, or those matching REGEXP.");
  sub_539B4("sources", (int)sub_21A29C, (int)"Source files in the program.");
  sub_539E8("rbreak", 6, (int)sub_222088, (int)"Set a breakpoint for all functions matching REGEXP.");
  sub_53514(
    "multiple-symbols",
    -1,
    (int)"0;>",
    (int)&off_46DBB4,
    "Set the debugger behavior when more than one symbol are possible matches\nin an expression.",
    "Show how the debugger handles ambiguities in expressions.",
    "Valid values are \"ask\", \"all\", \"cancel\", and the default is \"all\".",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "basenames-may-differ",
    10,
    (int)&dword_489708,
    "Set whether a source file may have multiple base names.",
    "Show whether a source file may have multiple base names.",
    "(A \"base name\" is the name of a file with the directory part removed.\n"
    "Example: The base name of \"/home/user/hello.c\" is \"hello.c\".)\n"
    "If set, GDB will canonicalize file names (e.g., expand symlinks)\n"
    "before comparing them.  Canonicalization is an expensive operation,\n"
    "but it allows the same file be known by more than one base name.\n"
    "If not set (the default), all source files are assumed to have just\n"
    "one base name, and gdb will do file name comparisons more efficiently.",
    0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5395C(
    "symtab-create",
    -1,
    (int)&dword_48999C,
    "Set debugging of symbol table creation.",
    "Show debugging of symbol table creation.",
    "When enabled (non-zero), debugging messages are printed when building\n"
    "symbol tables.  A value of 1 (one) normally provides enough information.\n"
    "A value greater than 1 provides more verbose information.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_5395C(
    "symbol-lookup",
    -1,
    (int)&dword_48970C,
    "Set debugging of symbol lookup.",
    "Show debugging of symbol lookup.",
    "When enabled (non-zero), symbol lookups are logged.",
    0,
    0,
    (int **)&dword_474750,
    (int **)&dword_474748);
  sub_5395C(
    "symbol-cache-size",
    -1,
    (int)&dword_46DBB0,
    "Set the size of the symbol cache.",
    "Show the size of the symbol cache.",
    "The size of the symbol cache.\nIf zero then the symbol cache is disabled.",
    (int)sub_219EFC,
    0,
    (int **)&dword_487A7C,
    (int **)&dword_487A84);
  sub_5329C(
    "symbol-cache",
    11,
    (int)sub_21B440,
    (int)"Dump the symbol cache for each program space.",
    (int **)&dword_474784);
  sub_5329C(
    "symbol-cache-statistics",
    11,
    (int)sub_219D14,
    (int)"Print symbol cache statistics for each program space.",
    (int **)&dword_474784);
  sub_5329C(
    "flush-symbol-cache",
    11,
    (int)sub_219CA4,
    (int)"Flush the symbol cache for each program space.",
    (int **)&dword_47478C);
  sub_1B92A8(2203776);
  sub_1B9664(2202772);
  return sub_1B9720(2202764);
}
