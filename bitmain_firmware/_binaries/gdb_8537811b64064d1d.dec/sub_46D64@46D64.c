int sub_46D64()
{
  int result; // r0

  sub_5395C(
    "lin-lwp",
    11,
    &dword_47202C,
    "Set debugging of GNU/Linux lwp module.",
    "Show debugging of GNU/Linux lwp module.",
    "Enables printf debugging output.",
    0,
    sub_41760,
    &dword_474750,
    &dword_474748);
  sub_535E0(
    "linux-namespaces",
    11,
    &dword_473724,
    "Set debugging of GNU/Linux namespaces module.",
    "Show debugging of GNU/Linux namespaces module.",
    "Enables printf debugging output.",
    0,
    0,
    &dword_474750,
    &dword_474748);
  sigprocmask(2, 0, &stru_472500);
  dword_472580 = (int)sub_416EC;
  sigemptyset(&stru_472584);
  dword_472604 = 0x10000000;
  sigaction(17, (const struct sigaction *)&dword_472580, 0);
  sigprocmask(2, 0, &stru_472198);
  sigdelset(&stru_472198, 17);
  sigemptyset(&set);
  result = sub_323B54(100, sub_41770, sub_40C7C, 0);
  dword_472134 = result;
  return result;
}
