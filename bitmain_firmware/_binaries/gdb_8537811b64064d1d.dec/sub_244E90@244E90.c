int *sub_244E90()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  void *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  if ( off_48A558 )
    off_48A558();
  sub_51EE4();
  v0 = sub_232A10();
  v1 = sub_25AAB0(v0);
  v2 = sub_2590A8(v1);
  sub_27EC2C(v2);
  v3 = sub_1CD63C();
  v4 = ((int (__fastcall *)(int))loc_1843E4)(v3);
  ((void (__fastcall *)(int))loc_B8404)(v4);
  sub_52774();
  sub_2445FC((int)"(gdb) ");
  off_48AD28 = sub_F6764;
  dword_48A548 = 1;
  off_48AD10 = sub_F65C8;
  dword_48A55C = 0;
  dword_48A550 = 0;
  v5 = sub_1939D8();
  sub_F55D0((int)v5);
  dword_48ACB4 = (int)sub_F548C();
  off_48AD24 = sub_F0074;
  off_470770 = "gdb";
  dword_48AAF4 = (int)getenv("TERM");
  sub_288CA8("operate-and-get-next", sub_242BB4, 15);
  sub_536B0(
    "prompt",
    4,
    (int)&dword_48A54C,
    "Set gdb's prompt",
    "Show gdb's prompt",
    0,
    0,
    (int)sub_242A6C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_539E8(
    "dont-repeat",
    4,
    (int)sub_242998,
    (int)"Don't repeat this command.\n"
         "Primarily used inside of user-defined commands that should not be repeated when\n"
         "hitting return.");
  sub_535E0(
    "editing",
    4,
    (int)&dword_4876A4,
    "Set editing of command lines as they are typed.",
    "Show editing of command lines as they are typed.",
    "Use \"on\" to enable the editing, and \"off\" to disable it.\n"
    "Without an argument, command line editing is enabled.  To edit, use\n"
    "EMACS-like or VI-like commands like control-P or ESC.",
    (int)sub_242B88,
    (int)sub_242A38,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "save",
    -1,
    (int)&dword_48A550,
    "Set saving of the history record on exit.",
    "Show saving of the history record on exit.",
    "Use \"on\" to enable the saving, and \"off\" to disable it.\nWithout an argument, saving is enabled.",
    0,
    (int)sub_242A28,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_538F4(
    "size",
    -1,
    (int)&dword_46DCDC,
    "Set the size of the command history,",
    "Show the size of the command history,",
    "ie. the number of previous commands to keep a record of.\n"
    "If set to \"unlimited\", the number of commands kept in the history\n"
    "list is unlimited.  This defaults to the value of the environment\n"
    "variable \"GDBHISTSIZE\", or to 256 if this variable is not set.",
    (int)sub_242EF8,
    (int)sub_242A18,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_538F4(
    "remove-duplicates",
    -1,
    (int)&dword_48A528,
    "Set how far back in history to look for and remove duplicate entries.",
    "Show how far back in history to look for and remove duplicate entries.",
    "If set to a nonzero value N, GDB will look back at the last N history entries\n"
    "and remove the first history entry that is a duplicate of the most recent\n"
    "entry, each time a new history entry is added.\n"
    "If set to \"unlimited\", this lookbehind is unbounded.\n"
    "Only history entries added during this session are considered for removal.\n"
    "If set to 0, removal of duplicate history entries is disabled.\n"
    "By default this option is set to 0.",
    0,
    (int)sub_242A08,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_53648(
    "filename",
    -1,
    (int)&dword_48A4F4,
    "Set the filename in which to record the command history",
    "Show the filename in which to record the command history",
    "(the list of previous commands of which a record is kept).",
    (int)sub_242B40,
    (int)sub_2429F8,
    (int **)&dword_474760,
    (int **)&dword_474764);
  sub_535E0(
    "confirm",
    4,
    (int)&dword_46DCE4,
    "Set whether to confirm potentially dangerous operations.",
    "Show whether to confirm potentially dangerous operations.",
    0,
    0,
    (int)sub_2429E8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_5389C(
    "annotate",
    10,
    (int)&dword_48968C,
    "Set annotation_level.",
    "Show annotation_level.",
    "0 == normal;     1 == fullname (for use when running under emacs)\n"
    "2 == output annotated suitably for use by programs that control GDB.",
    0,
    (int)sub_2429D8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_535E0(
    "exec-done-display",
    4,
    (int)&dword_4876A0,
    "Set notification of completion for asynchronous execution commands.",
    "Show notification of completion for asynchronous execution commands.",
    "Use \"on\" to enable the notification, and \"off\" to disable it.",
    0,
    (int)sub_2429C8,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53648(
    "data-directory",
    11,
    (int)&dword_48A4F0,
    "Set GDB's data directory.",
    "Show GDB's data directory.",
    "When set, GDB uses the specified path to search for data files.",
    (int)sub_242B24,
    (int)sub_2429B0,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_53578(
    "interactive-mode",
    4,
    (int)&dword_46DCE0,
    "Set whether GDB's standard input is a terminal.",
    "Show whether GDB's standard input is a terminal.",
    "If on, GDB assumes that standard input is a terminal.  In practice, it\n"
    "means that GDB should wait for the user to answer queries associated to\n"
    "commands entered at the command prompt.  If off, GDB assumes that standard\n"
    "input is not a terminal, and uses the default answer to all queries.\n"
    "If auto (the default), determine which mode to use based on the standard\n"
    "input settings.",
    0,
    (int)sub_242F28,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v6 = sub_5329C(
         "new-ui",
         4,
         (int)sub_243220,
         (int)"Create a new UI.  It takes two arguments:\n"
              "The first argument is the name of the interpreter to run.\n"
              "The second argument is the terminal the UI runs on.\n",
         (int **)&dword_474744);
  v7 = sub_53274(v6, 1643032);
  v8 = sub_27EBB8(v7);
  sub_27E478(v8);
  sub_15462C();
  sub_19422C(2);
  dword_487A08 = (int)off_46D5A4[0];
  return sub_157A80();
}
