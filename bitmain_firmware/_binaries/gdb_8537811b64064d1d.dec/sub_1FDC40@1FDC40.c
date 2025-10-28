int sub_1FDC40()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"set serial\" must be followed by the name of a command.\n");
  v1 = dword_489384;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "set serial ", -1, v2);
}
