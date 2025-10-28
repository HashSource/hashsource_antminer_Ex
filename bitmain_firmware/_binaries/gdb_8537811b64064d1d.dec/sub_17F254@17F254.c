int sub_17F254()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  if ( sub_98FA0(&dword_4878EC, &dword_475848) )
    sub_94708("The program is not being run.");
  if ( !sub_25A40C("Kill the program being debugged? ") )
    sub_94708("Not confirmed.");
  v0 = sub_22EF3C();
  v1 = sub_183CD0(v0);
  if ( !v1 )
  {
    v2 = sub_23E17C(0);
    v1 = sub_22EAE8(v2);
    if ( v1 )
    {
      sub_259F38("In %s,\n", (const char *)dword_4899A8);
      v3 = sub_15F810(0);
      v1 = sub_20E810(v3, 1, 1);
    }
  }
  return sub_2A8F8C(v1);
}
