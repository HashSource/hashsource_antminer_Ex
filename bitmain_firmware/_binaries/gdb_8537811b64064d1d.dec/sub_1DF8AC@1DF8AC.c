int sub_1DF8AC()
{
  dword_4886CC = (int)sub_16EBE8((int)sub_1DD1D8);
  sub_1B91EC(1957200);
  sub_1B9F60(1954128);
  sub_539E8("flushregs", 11, (int)sub_1DDD2C, (int)"Force gdb to flush its register cache (maintainer command)");
  sub_5329C(
    "registers",
    11,
    (int)sub_1DFE30,
    (int)"Print the internal register configuration.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_5329C(
    "raw-registers",
    11,
    (int)sub_1DFE28,
    (int)"Print the internal register configuration including raw values.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_5329C(
    "cooked-registers",
    11,
    (int)sub_1DFE20,
    (int)"Print the internal register configuration including cooked values.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  sub_5329C(
    "register-groups",
    11,
    (int)sub_1DFE18,
    (int)"Print the internal register configuration including each register's group.\nTakes an optional file parameter.",
    (int **)&dword_474784);
  return sub_5329C(
           "remote-registers",
           11,
           (int)sub_1DFE10,
           (int)"Print the internal register configuration including each register's\n"
                "remote register number and buffer offset in the g/G packets.\n"
                "Takes an optional file parameter.",
           (int **)&dword_474784);
}
