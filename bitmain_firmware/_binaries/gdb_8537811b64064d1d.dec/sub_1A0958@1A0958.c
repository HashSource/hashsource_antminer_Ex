int sub_1A0958()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"macro\" must be followed by the name of a macro command.\n");
  v1 = dword_487A18;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "macro ", -1, v2);
}
