int sub_10A2F4()
{
  sub_535E0(
    "remotecache",
    4,
    (int)algn_4872AC,
    "Set cache use for remote targets.",
    "Show cache use for remote targets.",
    "This used to enable the data cache for remote targets.  The cache\n"
    "functionality is now controlled by the memory region system and the\n"
    "\"stack-cache\" flag; \"remotecache\" now does nothing and\n"
    "exists only for compatibility reasons.",
    0,
    (int)sub_109D4C,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_539B4(
    "dcache",
    (int)sub_109AE8,
    (int)"Print information on the dcache performance.\n"
         "With no arguments, this command prints the cache configuration and a\n"
         "summary of each line in the cache.  Use \"info dcache <lineno> to dump\"\n"
         "the contents of a given line.");
  sub_53420(
    "dcache",
    10,
    (int)sub_109AAC,
    (int)"Use this command to set number of lines in dcache and line-size.",
    &dword_4872A8,
    (int)"set dcache ",
    0,
    (int **)&dword_47475C);
  sub_53420(
    "dcache",
    10,
    (int)sub_109A94,
    (int)"Show dcachesettings.",
    &dword_4872A4,
    (int)"show dcache ",
    0,
    (int **)&dword_47474C);
  sub_5395C(
    "line-size",
    10,
    (int)&dword_46D43C,
    "Set dcache line size in bytes (must be power of 2).",
    "Show dcache line size.",
    0,
    (int)sub_109A58,
    0,
    (int **)&dword_4872A8,
    (int **)&dword_4872A4);
  return sub_5395C(
           "size",
           10,
           (int)&dword_46D440,
           "Set number of dcache lines.",
           "Show number of dcache lines.",
           0,
           (int)sub_109D5C,
           0,
           (int **)&dword_4872A8,
           (int **)&dword_4872A4);
}
