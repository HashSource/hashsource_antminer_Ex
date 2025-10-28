int sub_C8EF8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"save\" must be followed by the name of a save subcommand.\n");
  v1 = dword_478364;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "save ", -1, v2);
}
