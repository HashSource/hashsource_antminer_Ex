void sub_95BA0()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0

  dword_475228 = (int)"exec";
  dword_47522C = (int)"Local exec file";
  dword_475230 = (int)"Use an executable file as a target.\nSpecify the filename of the executable file.";
  dword_475238 = (int)sub_95334;
  dword_475240 = (int)sub_94D04;
  dword_4753A8 = (int)&loc_95744;
  dword_475358 = (int)sub_94778;
  dword_47526C = (int)sub_959D0;
  v0 = 18244;
  dword_475270 = (int)sub_9478C;
  dword_475274 = (int)sub_94794;
  dword_47535C = 1;
  dword_475364 = (int)sub_9479C;
  if ( dword_487A74 )
    HIWORD(v0) = 71;
  dword_475398 = (int)sub_947C8;
  dword_475394 = (int)sub_161A60;
  dword_475504 = 3840;
  if ( !dword_487A74 )
  {
    HIWORD(v0) = 71;
    v1 = sub_5329C(
           "file",
           3,
           (int)sub_95450,
           (int)"Use FILE as program to be debugged.\n"
                "It is read for its symbols, for getting the contents of pure memory,\n"
                "and it is the program executed when you use the `run' command.\n"
                "If FILE cannot be found as specified, your execution directory path\n"
                "($PATH) is searched for a command of that name.\n"
                "No arg means to have no executable file and no symbols.",
           (int **)v0);
    sub_53274(v1, 1010984);
  }
  v2 = sub_5329C(
         "exec-file",
         3,
         (int)sub_95358,
         (int)"Use FILE as program for getting contents of pure memory.\n"
              "If FILE cannot be found as specified, your execution directory path\n"
              "is searched for a command of that name.\n"
              "No arg means have no executable file.",
         (int **)v0);
  sub_53274(v2, 1010984);
  sub_539E8(
    "section",
    3,
    (int)sub_959FC,
    (int)"Change the base address of section SECTION of the exec file to ADDR.\n"
         "This can be used if the exec file does not contain section addresses,\n"
         "(such as in the a.out format), or when the addresses specified in the\n"
         "file itself are wrong.  Each section must be changed separately.  The\n"
         "``info files'' command lists all the sections and their addresses.");
  sub_535E0(
    "write",
    4,
    (int)&dword_475508,
    "Set writing into executable and core files.",
    "Show writing into executable and core files.",
    0,
    0,
    (int)sub_94834,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  JUMPOUT(0x22ED9C);
}
