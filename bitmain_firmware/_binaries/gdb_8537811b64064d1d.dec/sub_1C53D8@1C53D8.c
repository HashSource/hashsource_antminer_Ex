int sub_1C53D8()
{
  dword_487C98 = 0;
  dword_487CA0 = 0;
  dword_487C9C = 0;
  sub_5395C(
    "expression",
    11,
    (int)&dword_487CD8,
    "Set expression debugging.",
    "Show expression debugging.",
    "When non-zero, the internal representation of expressions will be printed.",
    0,
    (int)sub_1C366C,
    (int **)&dword_474750,
    (int **)&dword_474748);
  return sub_535E0(
           "parser",
           11,
           (int)&dword_487CDC,
           "Set parser debugging.",
           "Show parser debugging.",
           "When non-zero, expression parser tracing will be enabled.",
           0,
           (int)sub_1C365C,
           (int **)&dword_474750,
           (int **)&dword_474748);
}
