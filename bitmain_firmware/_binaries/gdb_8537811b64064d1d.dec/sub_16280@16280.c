void __fastcall __noreturn sub_16280(const char **a1, int a2)
{
  const char *v3; // r5
  int v4; // r0
  const char *v5; // r0

  v3 = *a1;
  v4 = sub_2A6938();
  v5 = (const char *)sub_2A6948(v4);
  sub_94708("Failed to read %d bytes from core file %s ('%s').", a2, v3, v5);
}
