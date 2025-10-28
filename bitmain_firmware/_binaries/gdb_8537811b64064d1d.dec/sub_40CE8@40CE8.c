int __fastcall sub_40CE8(int a1)
{
  int *v2; // r6
  int v3; // r0
  int result; // r0
  int v5; // r4
  int v6; // r6
  const char *v7; // r3
  int v8; // r7
  int v9; // r8
  const char *v10; // r3

  v2 = _errno_location();
  *v2 = 0;
  v3 = sub_40CA4(a1, 9);
  if ( dword_47202C )
  {
    v8 = *v2;
    v9 = *(_DWORD *)sub_242FF0(v3);
    if ( v8 )
      v10 = (const char *)sub_6FFC0(v8);
    else
      v10 = "OK";
    sub_2594D8(v9, "KC:  kill (SIGKILL) %ld, 0, 0 (%s)\n", a1, v10);
  }
  *v2 = 0;
  result = ptrace(PTRACE_KILL, a1, 0);
  if ( dword_47202C )
  {
    v5 = *v2;
    v6 = *(_DWORD *)sub_242FF0(result);
    if ( v5 )
      v7 = (const char *)sub_6FFC0(v5);
    else
      v7 = "OK";
    return sub_2594D8(v6, "KC:  PTRACE_KILL %ld, 0, 0 (%s)\n", a1, v7);
  }
  return result;
}
