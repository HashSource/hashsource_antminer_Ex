int sub_2116B0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259880("\"overlay\" must be followed by the name of an overlay command.\n");
  v1 = dword_4896B0;
  v2 = *(_DWORD *)sub_242FB4(v0);
  return sub_53DE8(v1, "overlay ", -1, v2);
}
