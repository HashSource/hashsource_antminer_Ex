int sub_1A5CFC()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"maintenance set\" must be followed by the name of a set command.\n");
  v1 = dword_487A7C;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "maintenance set ", -1, v2);
}
