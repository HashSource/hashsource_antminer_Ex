int sub_2349D0()
{
  int result; // r0

  sub_535E0(
    "stack-cache",
    4,
    (int)&dword_46DCCC,
    "Set cache use for stack access.",
    "Show cache use for stack access.",
    "When on, use the target memory cache for all stack access, regardless of any\n"
    "configured memory regions.  This improves remote performance significantly.\n"
    "By default, caching for stack access is on.",
    (int)sub_23490C,
    (int)sub_23486C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "code-cache",
    4,
    (int)&dword_46DCC4,
    "Set cache use for code segment access.",
    "Show cache use for code segment access.",
    "When on, use the target memory cache for all code segment accesses,\n"
    "regardless of any configured memory regions.  This improves remote\n"
    "performance significantly.  By default, caching for code segment\n"
    "access is on.",
    (int)sub_2348E0,
    (int)sub_23485C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  result = sub_1CD17C(0, (int)sub_234854);
  dword_48A290 = result;
  return result;
}
