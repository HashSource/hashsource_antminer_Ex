int sub_218E80()
{
  dword_4896F8 = stdout;
  dword_4896F4 = stdin;
  dword_4896FC = stderr;
  sub_5329C(
    "symbols",
    11,
    (int)sub_219404,
    (int)"Print dump of current symbol definitions.\n"
         "Usage: mt print symbols [-pc address] [--] [outfile]\n"
         "       mt print symbols [-objfile objfile] [-source source] [--] [outfile]\n"
         "Entries in the full symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If ADDRESS is provided, dump only the file for that address.\n"
         "If SOURCE is provided, dump only that file's symbols.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_5329C(
    "msymbols",
    11,
    (int)sub_218FDC,
    (int)"Print dump of current minimal symbol definitions.\n"
         "Usage: mt print msymbols [-objfile objfile] [--] [outfile]\n"
         "Entries in the minimal symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_5329C(
    "objfiles",
    11,
    (int)sub_217DBC,
    (int)"Print dump of current object file definitions.\n"
         "With an argument REGEXP, list the object files with matching names.",
    (int **)&dword_474784);
  sub_5329C(
    "symtabs",
    11,
    (int)sub_217B3C,
    (int)"List the full symbol tables for all object files.\n"
         "This does not include information about individual symbols, blocks, or\n"
         "linetables --- just the symbol table structures themselves.\n"
         "With an argument REGEXP, list the symbol tables with matching names.",
    (int **)&dword_474788);
  sub_5329C(
    "line-table",
    11,
    (int)sub_218910,
    (int)"List the contents of all line tables, from all symbol tables.\n"
         "With an argument REGEXP, list just the line tables for the symbol\n"
         "tables with matching names.",
    (int **)&dword_474788);
  sub_5329C(
    "check-symtabs",
    11,
    (int)sub_2179FC,
    (int)"Check consistency of currently expanded symtabs.",
    (int **)&dword_47478C);
  return sub_5329C(
           "expand-symtabs",
           11,
           (int)sub_2178B0,
           (int)"Expand symbol tables.\nWith an argument REGEXP, only expand the symbol tables with matching names.",
           (int **)&dword_47478C);
}
