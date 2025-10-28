int sub_1A5DB0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"maintenance\" must be followed by the name of a maintenance command.\n");
  v1 = dword_47478C;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "maintenance ", -1, v2);
}
