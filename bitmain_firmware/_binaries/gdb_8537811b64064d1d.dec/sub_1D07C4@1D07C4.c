int sub_1D07C4()
{
  sub_5329C(
    "psymbols",
    11,
    (int)sub_1D2378,
    (int)"Print dump of current partial symbol definitions.\n"
         "Usage: mt print psymbols [-objfile objfile] [-pc address] [--] [outfile]\n"
         "       mt print psymbols [-objfile objfile] [-source source] [--] [outfile]\n"
         "Entries in the partial symbol table are dumped to file OUTFILE,\n"
         "or the terminal if OUTFILE is unspecified.\n"
         "If ADDRESS is provided, dump only the file for that address.\n"
         "If SOURCE is provided, dump only that file's symbols.\n"
         "If OBJFILE is provided, dump only that file's minimal symbols.",
    (int **)&dword_474784);
  sub_5329C(
    "psymtabs",
    11,
    (int)sub_1D1BE8,
    (int)"List the partial symbol tables for all object files.\n"
         "This does not include information about individual partial symbols,\n"
         "just the symbol table structures themselves.",
    (int **)&dword_474788);
  return sub_5329C(
           "check-psymtabs",
           11,
           (int)sub_1D1888,
           (int)"Check consistency of currently expanded psymtabs versus symtabs.",
           (int **)&dword_47478C);
}
