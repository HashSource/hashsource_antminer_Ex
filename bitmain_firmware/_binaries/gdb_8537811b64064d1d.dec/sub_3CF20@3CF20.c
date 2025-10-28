int __fastcall sub_3CF20(int a1, const char *a2, int a3)
{
  int v6; // r6
  int *v7; // r5

  v6 = ps_getpid_0(&dword_4878EC);
  sub_2319A0(a3);
  if ( a2 )
    a2 = (const char *)strtol(a2, 0, 10);
  v7 = _errno_location();
  *v7 = 0;
  ptrace(PTRACE_DETACH, v6, 1, a2);
  if ( *v7 )
    sub_258B2C("ptrace");
  return sub_3CEE0(a1);
}
