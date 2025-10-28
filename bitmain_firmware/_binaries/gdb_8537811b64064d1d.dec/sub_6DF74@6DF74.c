int sub_6DF74()
{
  int v0; // r1
  int v1; // r0
  int **v2; // r0

  if ( dword_487D14 == dword_487D18 )
  {
    sub_6E49C();
  }
  else
  {
    v0 = dword_487D14 + 4;
    if ( dword_487D14 )
      *(_DWORD *)dword_487D14 = &off_35D438;
    dword_487D14 = v0;
  }
  v1 = sub_5395C(
         "stap-expression",
         11,
         (int)&dword_4748C0,
         "Set SystemTap expression debugging.",
         "Show SystemTap expression debugging.",
         "When non-zero, the internal representation of SystemTap expressions will be printed.",
         0,
         (int)sub_6C5AC,
         (int **)&dword_474750,
         (int **)&dword_474748);
  v2 = (int **)sub_1CA864(v1);
  return sub_5329C(
           "stap",
           5,
           (int)sub_6C5A0,
           (int)"Show information about SystemTap static probes.\n"
                "Usage: info probes stap [PROVIDER [NAME [OBJECT]]]\n"
                "Each argument is a regular expression, used to select probes.\n"
                "PROVIDER matches probe provider names.\n"
                "NAME matches the probe names.\n"
                "OBJECT matches the executable or shared library name.",
           v2);
}
