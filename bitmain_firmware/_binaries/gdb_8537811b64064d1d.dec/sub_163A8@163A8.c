void sub_163A8()
{
  int v0; // r4
  const char *v1; // r0

  v0 = *_errno_location();
  sub_231E64(2);
  v1 = (const char *)sub_6FFC0(v0);
  sub_92F8C(12, "%s: %s.", "Remote communication error.  Target disconnected.", v1);
  JUMPOUT(0x163E0);
}
