int sub_407F4()
{
  int v0; // r0
  int v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0

  dword_471C40 = (int)"multi-thread";
  dword_471C44 = (int)"multi-threaded child process.";
  dword_471C48 = (int)"Threads and pthreads support.";
  dword_471C64 = (int)sub_3EC18;
  dword_471C74 = (int)sub_3F28C;
  dword_471C6C = (int)sub_3EC70;
  dword_471D30 = (int)sub_3EBCC;
  dword_471D44 = (int)sub_3EB00;
  dword_471D48 = (int)sub_3EA7C;
  dword_471D74 = 3;
  dword_471D8C = 1;
  dword_471F1C = 3840;
  dword_471DBC = (int)&loc_3F0C8;
  dword_471D4C = (int)sub_3E4C4;
  dword_471DD8 = (int)sub_3E6E8;
  dword_471D54 = (int)sub_3ED7C;
  ((void (__fastcall *)(void *))loc_22ECDC)(&unk_471C3C);
  dword_471BF8 = sub_32727C("$sdir:$pdir");
  sub_53764(
    "libthread-db-search-path",
    4,
    &dword_471BF8,
    "Set search path for libthread_db.",
    "Show the current search path or libthread_db.",
    "This path is used to search for libthread_db to be loaded into gdb itself.\n"
    "Its value is a colon (':') separate list of directories to search.\n"
    "Setting the search path to an empty list resets it to its default value.",
    sub_3EA28,
    0,
    &dword_47475C,
    &dword_47474C);
  v0 = sub_5395C(
         "libthread-db",
         11,
         &dword_471BF0,
         "Set libthread-db debugging.",
         "Show libthread-db debugging.",
         "When non-zero, libthread-db debugging is enabled.",
         0,
         sub_3EA6C,
         &dword_474750,
         &dword_474748);
  v1 = sub_BA664(v0);
  v2 = sub_BA694();
  v3 = sub_535E0(
         "libthread-db",
         4,
         &dword_46AF70,
         "Enable or disable auto-loading of inferior specific libthread_db.",
         "Show whether auto-loading inferior specific libthread_db is enabled.",
         "If enabled, libthread_db will be searched in 'set libthread-db-search-path'\n"
         "locations to load libthread_db compatible with the inferior.\n"
         "Standard system libthread_db still gets loaded even with this option off.\n"
         "This options has security implications for untrusted inferiors.",
         0,
         sub_3EA5C,
         v1,
         v2);
  v4 = sub_BA6C4(v3);
  sub_5329C(
    "libthread-db",
    5,
    sub_40178,
    "Print the list of loaded inferior specific libthread_db.\nUsage: info auto-load libthread-db",
    v4);
  sub_1B9664(sub_40138);
  return sub_1B9368(262372);
}
