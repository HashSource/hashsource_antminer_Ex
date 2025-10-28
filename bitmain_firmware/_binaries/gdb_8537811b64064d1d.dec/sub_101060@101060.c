int sub_101060()
{
  sub_53420(
    "cplus",
    11,
    (int)sub_FE5E8,
    (int)"C++ maintenance commands.",
    &dword_47B1A0,
    (int)"maintenance cplus ",
    0,
    (int **)&dword_47478C);
  sub_5474C((int)"cp", "cplus", 11, 1, &dword_47478C);
  sub_5329C(
    "first_component",
    11,
    (int)sub_FEB10,
    (int)"Print the first class/namespace component of NAME.",
    (int **)&dword_47B1A0);
  sub_539B4(
    "vtbl",
    (int)sub_FE5D8,
    (int)"Show the virtual function table for a C++ object.\n"
         "Usage: info vtbl EXPRESSION\n"
         "Evaluate EXPRESSION and display the virtual function table for the\n"
         "resulting object.");
  return sub_535E0(
           "catch-demangler-crashes",
           11,
           (int)&dword_46D424,
           "Set whether to attempt to catch demangler crashes.",
           "Show whether to attempt to catch demangler crashes.",
           "If enabled GDB will attempt to catch demangler crashes and\ndisplay the offending symbol.",
           0,
           0,
           (int **)&dword_487A7C,
           (int **)&dword_487A84);
}
