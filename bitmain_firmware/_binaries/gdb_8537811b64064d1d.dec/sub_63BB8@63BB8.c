void __fastcall sub_63BB8(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_6344C("reverse-finish", a2 + 1, a3 - 1);
  else
    sub_6344C("finish", a2, a3);
}
