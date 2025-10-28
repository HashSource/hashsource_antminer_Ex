int __fastcall sub_5CD00(int a1, int a2, int a3)
{
  int v5; // r4
  int result; // r0
  _DWORD *v7; // r0

  v5 = sub_17FBBC();
  result = sub_6036C("-inferior-tty-show", a3, a2);
  if ( !result )
    sub_94708("-inferior-tty-show: Usage: No args");
  if ( v5 )
  {
    v7 = (_DWORD *)sub_243004(result);
    return sub_257610(*v7, "inferior_tty_terminal", v5);
  }
  return result;
}
