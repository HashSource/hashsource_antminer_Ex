int sub_B9B64()
{
  return sub_53420(
           "auto-load",
           5,
           (int)sub_B9BC0,
           (int)"Print current status of auto-loaded files.\n"
                "Print whether various files like Python scripts or .gdbinit files have been\n"
                "found and/or loaded.",
           &dword_478240,
           (int)"info auto-load ",
           0,
           (int **)&dword_474754);
}
