int sub_2590A8()
{
  int v0; // r0
  int *v2; // r0
  int v3; // [sp+0h] [bp-8h] BYREF
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( dword_487A50 )
  {
    dword_48A9B4 = -1;
    dword_48A9B8 = -1;
  }
  else
  {
    sub_294500();
    sub_293E74(&v3, &v4);
    dword_48A9B4 = v3;
    dword_48A9B8 = v4;
    if ( v3 <= 0 && tgetnum("li") < 0 || getenv("EMACS") || getenv("INSIDE_EMACS") )
      dword_48A9B4 = -1;
    v2 = (int *)sub_242FB4();
    if ( !sub_256840(*v2) )
      dword_48A9B4 = -1;
  }
  dword_47078C = 0;
  v0 = sub_258304();
  return sub_259190(v0);
}
