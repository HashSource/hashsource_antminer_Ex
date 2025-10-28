int sub_1A5CC0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"maintenance check\" must be followed by the name of a check command.\n");
  v1 = dword_474780;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "maintenance check ", -1, v2);
}
