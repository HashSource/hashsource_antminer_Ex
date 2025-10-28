void __fastcall __noreturn sub_3D5F0(const char *a1)
{
  int *v2; // r0
  const char *v3; // r0

  v2 = _errno_location();
  v3 = (const char *)sub_6FFC0(*v2);
  sub_3D5B8((int)"%s: %s", a1, v3);
}
