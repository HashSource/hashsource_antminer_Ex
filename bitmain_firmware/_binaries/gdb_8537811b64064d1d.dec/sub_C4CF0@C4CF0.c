int sub_C4CF0()
{
  __int64 v0; // r2

  sub_D23FC();
  memcpy(&unk_4782B4, off_46C04C, 0x48u);
  dword_4782BC = (int)sub_C4A9C;
  dword_4782C0 = (int)sub_C49C0;
  dword_4782C4 = (int)sub_C43F0;
  LODWORD(v0) = sub_C456C;
  HIDWORD(v0) = sub_C44C8;
  *(_QWORD *)&dword_4782E0 = v0;
  dword_4782D4 = (int)sub_C47D4;
  dword_4782D8 = (int)sub_C4640;
  sub_1BA1C4(sub_C49A0);
  dword_4782FC = sub_18365C(0, sub_C449C);
  return sub_D21EC(
           "syscall",
           "Catch system calls by their names, groups and/or numbers.\n"
           "Arguments say which system calls to catch.  If no arguments are given,\n"
           "every system call will be caught.  Arguments, if given, should be one\n"
           "or more system call names (if your system supports that), system call\n"
           "groups or system call numbers.",
           sub_C4DC0,
           sub_C51BC,
           0,
           1);
}
