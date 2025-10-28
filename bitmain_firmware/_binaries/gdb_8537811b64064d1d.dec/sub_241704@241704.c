int sub_241704()
{
  sub_539B4(
    "threads",
    (int)sub_241698,
    (int)"Display currently known threads.\n"
         "Usage: info threads [-gid] [ID]...\n"
         "-gid: Show global thread IDs.\n"
         "If ID is given, it is a space-separated list of IDs of threads to display.\n"
         "Otherwise, all threads are displayed.");
  sub_53420(
    "thread",
    0,
    (int)sub_240664,
    (int)"Use this command to switch between threads.\nThe new thread ID must be currently known.",
    &dword_48A4E4,
    (int)"thread ",
    1,
    (int **)&dword_474744);
  sub_53420(
    "apply",
    0,
    (int)sub_2401D4,
    (int)"Apply a command to a list of threads.",
    &dword_48A4E8,
    (int)"thread apply ",
    1,
    &dword_48A4E4);
  sub_5329C(
    "all",
    0,
    (int)&loc_2418D4,
    (int)"Apply a command to all threads.\n"
         "\n"
         "Usage: thread apply all [-ascending] <command>\n"
         "-ascending: Call <command> for all threads in ascending order.\n"
         "            The default is descending order.",
    &dword_48A4E8);
  sub_5329C(
    "name",
    0,
    (int)sub_23DCA8,
    (int)"Set the current thread's name.\n"
         "Usage: thread name [NAME]\n"
         "If NAME is not given, then any existing name is removed.",
    &dword_48A4E4);
  sub_5329C(
    "find",
    0,
    (int)sub_240814,
    (int)"Find threads that match a regular expression.\n"
         "Usage: thread find REGEXP\n"
         "Will display thread ids whose name, target ID, or extra info matches REGEXP.",
    &dword_48A4E4);
  sub_547D8((int)"t", "thread", 0, 1);
  sub_535E0(
    "thread-events",
    -1,
    (int)&dword_46DCD4,
    "Set printing of thread events (such as thread start and exit).",
    "Show printing of thread events (such as thread start and exit).",
    0,
    0,
    (int)sub_23D954,
    (int **)&dword_47477C,
    (int **)&dword_474778);
  sub_26CBB8("_thread", &off_3EB7CC, 0);
  return sub_26CBB8("_gthread", &unk_3EB7D8, 0);
}
