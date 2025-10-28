int sub_17F3C8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259F38("\"unset\" must be followed by the name of an unset subcommand.\n");
  v1 = dword_474794;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "unset ", -1, v2);
}
