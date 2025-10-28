__pid_t __fastcall sub_4FB78(int a1)
{
  __pid_t v1; // r0
  char *v3; // r0
  const char *v4; // r4
  const char *v5; // r0
  int v6; // r0
  int v7; // r5
  int *v8; // r0
  const char *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int stat_loc; // [sp+14h] [bp-8h] BYREF

  v1 = vfork();
  if ( !v1 )
  {
    sub_967D0(0);
    v3 = getenv("SHELL");
    if ( v3 )
      v4 = v3;
    else
      v4 = "/bin/sh";
    v5 = (const char *)sub_3245CC(v4);
    if ( a1 )
      v6 = execl(v4, v5, "-c", a1, 0);
    else
      v6 = execl(v4, v5, 0);
    v7 = *(_DWORD *)sub_242FDC(v6);
    v8 = _errno_location();
    v9 = (const char *)sub_6FFC0(*v8);
    v10 = sub_2594D8(v7, "Cannot execute %s: %s\n", v4, v9);
    v11 = (_DWORD *)sub_242FDC(v10);
    sub_256834(*v11);
    exit(127);
  }
  if ( v1 == -1 )
    sub_94708("Fork failed");
  return waitpid(v1, &stat_loc, 0);
}
