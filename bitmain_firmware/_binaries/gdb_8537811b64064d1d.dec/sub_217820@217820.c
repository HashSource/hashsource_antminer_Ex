int sub_217820()
{
  dword_4896EC = sub_1B6B00(0, (int)sub_2167B0);
  return sub_535E0(
           "symfile",
           -1,
           (int)&dword_4896F0,
           "Set debugging of the symfile functions.",
           "Show debugging of the symfile functions.",
           "When enabled, all calls to the symfile functions are logged.",
           (int)sub_2176D4,
           (int)sub_216EE8,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
