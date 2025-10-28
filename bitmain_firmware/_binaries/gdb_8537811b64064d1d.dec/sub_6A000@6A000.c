int sub_6A000()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"info guile\" must be followed by the name of an info command.\n");
  v1 = dword_4748A0;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "info guile ", -1, v2);
}
