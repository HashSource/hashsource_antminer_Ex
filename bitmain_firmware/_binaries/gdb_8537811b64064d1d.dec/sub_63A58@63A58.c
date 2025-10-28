void __fastcall sub_63A58(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_6344C("reverse-next", a2 + 1, a3 - 1);
  else
    sub_6344C("next", a2, a3);
}
