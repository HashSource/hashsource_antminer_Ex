int sub_20213C()
{
  dword_4893A0 = (int)sub_16EBE0((int)sub_20057C);
  sub_1B9720(2098708);
  sub_539E8("sharedlibrary", 3, (int)sub_2018EC, (int)"Load shared object library symbols for files matching REGEXP.");
  sub_539B4("sharedlibrary", (int)sub_201080, (int)"Status of loaded shared object libraries.");
  sub_547B0((int)"dll", "sharedlibrary", 1);
  sub_539E8("nosharedlibrary", 3, (int)sub_201A68, (int)"Unload all shared object library symbols.");
  sub_535E0(
    "auto-solib-add",
    4,
    (int)&dword_46DBA8,
    "Set autoloading of shared library symbols.",
    "Show autoloading of shared library symbols.",
    "If \"on\", symbols from all shared object libraries will be loaded\n"
    "automatically when the inferior begins execution, when the dynamic linker\n"
    "informs gdb that a new library has been loaded, or when attaching to the\n"
    "inferior.  Otherwise, symbols must be loaded manually, using `sharedlibrary'.",
    0,
    (int)sub_20056C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53764(
    "sysroot",
    4,
    (int)&dword_487A40,
    "Set an alternate system root.",
    "Show the current system root.",
    "The system root is used to load absolute shared library symbol files.\n"
    "For other (relative) files, you can add directories using\n"
    "`set solib-search-path'.",
    (int)sub_201DA0,
    0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5474C((int)"solib-absolute-prefix", "sysroot", 4, 0, &dword_47475C);
  sub_5474C((int)"solib-absolute-prefix", "sysroot", 4, 0, &dword_47474C);
  return sub_53764(
           "solib-search-path",
           4,
           (int)&dword_4893A4,
           "Set the search path for loading non-absolute shared library symbol files.",
           "Show the search path for loading non-absolute shared library symbol files.",
           "This takes precedence over the environment variables PATH and LD_LIBRARY_PATH.",
           (int)sub_201AA8,
           (int)sub_20055C,
           (int **)&dword_47475C,
           (int **)&dword_47474C);
}
