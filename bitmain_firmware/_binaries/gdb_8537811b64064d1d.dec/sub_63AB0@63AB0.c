void __fastcall sub_63AB0(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_6344C("reverse-nexti", a2 + 1, a3 - 1);
  else
    sub_6344C("nexti", a2, a3);
}
