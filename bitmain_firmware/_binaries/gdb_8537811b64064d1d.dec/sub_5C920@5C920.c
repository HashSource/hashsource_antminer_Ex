void __fastcall sub_5C920(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  bool v5; // cc
  int v6; // r4
  void *v7; // r5
  int *v8; // r0
  const char *v9; // r0

  v4 = (_DWORD *)sub_243004(a1);
  v5 = a3 <= 0;
  v6 = *v4;
  if ( !v5 )
    sub_94708("-environment-pwd: No arguments allowed");
  if ( sub_690C0(*v4) <= 1 )
  {
    sub_5C8C0("pwd", 0);
  }
  else
  {
    v7 = (void *)sub_336448(0);
    if ( !v7 )
    {
      v8 = _errno_location();
      v9 = (const char *)sub_6FFC0(*v8);
      sub_94708("-environment-pwd: error finding name of working directory: %s", v9);
    }
    sub_257610(v6, "cwd", v7);
    free(v7);
  }
}
