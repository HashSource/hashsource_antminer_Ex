int sub_FAC2C()
{
  int v0; // r0
  int v1; // r0
  char *v2; // r0

  v0 = sub_5329C(
         "core-file",
         3,
         (int)sub_FA37C,
         (int)"Use FILE as core dump for examining memory and registers.\n"
              "No arg means have no core file.  This command has been superseded by the\n"
              "`target core' and `detach' commands.",
         (int **)&dword_474744);
  sub_53274(v0, (int)&loc_F6D28);
  v1 = sub_53708(
         "gnutarget",
         3,
         (int)&dword_47ACA4,
         "Set the current BFD target.",
         "Show the current BFD target.",
         "Use `set gnutarget auto' to specify automatic detection.",
         (int)sub_FA250,
         (int)sub_FA36C,
         (int **)&dword_47475C,
         (int **)&dword_47474C);
  sub_53274(v1, 1024676);
  sub_5474C((int)"g", "gnutarget", 3, 1, &dword_47475C);
  if ( !getenv("GNUTARGET") )
    return sub_FABEC((int)"auto");
  v2 = getenv("GNUTARGET");
  return sub_FABEC((int)v2);
}
