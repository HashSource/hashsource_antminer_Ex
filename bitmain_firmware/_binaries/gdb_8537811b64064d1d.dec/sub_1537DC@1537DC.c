int sub_1537DC()
{
  const char *v0; // r4
  int v1; // r0
  _DWORD *v2; // r0
  int v3; // r0
  sigset_t v5; // [sp+0h] [bp-80h] BYREF

  v0 = (const char *)sub_2445EC();
  signal(20, 0);
  sigemptyset(&v5);
  sigprocmask(2, &v5, 0);
  raise(20);
  signal(20, (__sighandler_t)sub_1538E4);
  v1 = sub_259880("%s", v0);
  v2 = (_DWORD *)sub_242FB4(v1);
  v3 = sub_256834(*v2);
  return sub_243C5C(v3);
}
