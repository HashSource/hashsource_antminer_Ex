int sub_551F0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"dump ihex\" must be followed by a subcommand.\n");
  v1 = dword_4747C8;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "dump ihex ", -1, v2);
}
