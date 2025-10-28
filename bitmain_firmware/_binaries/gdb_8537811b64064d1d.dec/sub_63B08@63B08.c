void __fastcall sub_63B08(int a1, int *a2, int a3)
{
  if ( a3 > 0 && !strcmp((const char *)*a2, "--reverse") )
    sub_6344C("reverse-step", a2 + 1, a3 - 1);
  else
    sub_6344C("step", a2, a3);
}
