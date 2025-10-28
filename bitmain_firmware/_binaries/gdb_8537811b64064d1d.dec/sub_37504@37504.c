int sub_37504()
{
  dword_471B90 = sub_16EBE8(sub_348E0);
  dword_471ACC = sub_18365C(0, sub_33BBC);
  sub_1BA1C4(sub_33B84);
  sub_1BA108(sub_33B84);
  sub_535E0(
    "use-coredump-filter",
    3,
    &dword_46AF64,
    "Set whether gcore should consider /proc/PID/coredump_filter.",
    "Show whether gcore should consider /proc/PID/coredump_filter.",
    "Use this command to set whether gcore should consider the contents\n"
    "of /proc/PID/coredump_filter when generating the corefile.  For more information\n"
    "about this file, refer to the manpage of core(5).",
    0,
    sub_348D0,
    &dword_47475C,
    &dword_47474C);
  return sub_535E0(
           "dump-excluded-mappings",
           3,
           &dword_471B8C,
           "Set whether gcore should dump mappings marked with the VM_DONTDUMP flag.",
           "Show whether gcore should dump mappings marked with the VM_DONTDUMP flag.",
           "Use this command to set whether gcore should dump mappings marked with the\n"
           "VM_DONTDUMP flag (\"dd\" in /proc/PID/smaps) when generating the corefile.  For\n"
           "more information about this file, refer to the manpage of proc(5) and core(5).",
           0,
           sub_348C0,
           &dword_47475C,
           &dword_47474C);
}
