int sub_1CB598()
{
  int v0; // r1
  int (***v2)(); // [sp+Ch] [bp-4h] BYREF

  v2 = &off_3CD484;
  if ( dword_487D14 == dword_487D18 )
  {
    sub_6E49C(&dword_487D10, (char *)dword_487D14, &v2);
  }
  else
  {
    v0 = dword_487D14 + 4;
    if ( dword_487D14 )
      *(_DWORD *)dword_487D14 = &off_3CD484;
    dword_487D14 = v0;
  }
  sub_26CBB8("_probe_argc", off_3CD528, -1);
  sub_26CBB8("_probe_arg0", off_3CD528, 0);
  sub_26CBB8("_probe_arg1", off_3CD528, 1);
  sub_26CBB8("_probe_arg2", off_3CD528, 2);
  sub_26CBB8("_probe_arg3", off_3CD528, 3);
  sub_26CBB8("_probe_arg4", off_3CD528, 4);
  sub_26CBB8("_probe_arg5", off_3CD528, 5);
  sub_26CBB8("_probe_arg6", off_3CD528, 6);
  sub_26CBB8("_probe_arg7", off_3CD528, 7);
  sub_26CBB8("_probe_arg8", off_3CD528, 8);
  sub_26CBB8("_probe_arg9", off_3CD528, 9);
  sub_26CBB8("_probe_arg10", off_3CD528, 10);
  sub_26CBB8("_probe_arg11", off_3CD528, 11);
  if ( !dword_487D0C )
    sub_1C9B18();
  sub_5329C("all", 5, (int)sub_1CC0E8, (int)"Show information about all type of probes.", (int **)&dword_487D0C);
  sub_5329C(
    "probes",
    6,
    (int)sub_1CB3B8,
    (int)"Enable probes.\n"
         "Usage: enable probes [PROVIDER [NAME [OBJECT]]]\n"
         "Each argument is a regular expression, used to select probes.\n"
         "PROVIDER matches probe provider names.\n"
         "NAME matches the probe names.\n"
         "OBJECT matches the executable or shared library name.\n"
         "If you do not specify any argument then the command will enable\n"
         "all defined probes.",
    &dword_4747AC);
  return sub_5329C(
           "probes",
           6,
           (int)sub_1CB1D8,
           (int)"Disable probes.\n"
                "Usage: disable probes [PROVIDER [NAME [OBJECT]]]\n"
                "Each argument is a regular expression, used to select probes.\n"
                "PROVIDER matches probe provider names.\n"
                "NAME matches the probe names.\n"
                "OBJECT matches the executable or shared library name.\n"
                "If you do not specify any argument then the command will disable\n"
                "all defined probes.",
           &dword_4747A8);
}
