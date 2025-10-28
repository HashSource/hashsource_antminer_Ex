void __fastcall sub_95294(int a1, int a2, int a3)
{
  int v5; // r0
  const char *v6; // r4
  void *v7; // r0
  void *v8; // r7
  int v9; // r5
  int v10; // r0

  if ( !sub_FA64C(0) )
  {
    v5 = off_489ACC();
    if ( v5 )
    {
      v6 = (const char *)sub_200680(v5, 0);
      v7 = sub_92564(608188, (int)v6);
      v8 = v7;
      if ( a2 )
        v9 = 8;
      else
        v9 = 0;
      if ( a3 )
        v9 |= 2u;
      v10 = sub_1836B0(v7);
      sub_95110(v6, v10, v9);
      sub_92648(v8);
    }
    else
    {
      sub_946D8(
        "No executable has been specified and target does not support\n"
        "determining executable automatically.  Try using the \"file\" command.");
    }
  }
}
