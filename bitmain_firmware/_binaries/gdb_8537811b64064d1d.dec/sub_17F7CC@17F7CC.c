void __fastcall sub_17F7CC(int a1, int a2)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r0

  v2 = (char *)a1;
  if ( a1 )
  {
    v3 = sub_1836B0(a1);
    sub_93E98(v3 + 60, v2);
  }
  else if ( !a2 || (a1 = sub_25A40C("Delete all environment variables? ")) != 0 )
  {
    v4 = sub_1836B0(a1);
    sub_93A78((int *)(v4 + 60));
  }
}
