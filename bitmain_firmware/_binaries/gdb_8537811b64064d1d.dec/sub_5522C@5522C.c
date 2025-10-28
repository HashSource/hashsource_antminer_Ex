int sub_5522C()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"dump srec\" must be followed by a subcommand.\n");
  v1 = dword_4747CC;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "dump srec ", -1, v2);
}
