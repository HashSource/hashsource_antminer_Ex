int sub_109AAC()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"set dcache\" must be followed by the name of a subcommand.\n");
  v1 = dword_4872A8;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "set dcache ", -1, v2);
}
