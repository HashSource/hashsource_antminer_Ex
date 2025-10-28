int sub_1D8834()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"set record full\" must be followed by an appropriate subcommand.\n");
  v1 = dword_4880AC;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "set record full ", -1, v2);
}
