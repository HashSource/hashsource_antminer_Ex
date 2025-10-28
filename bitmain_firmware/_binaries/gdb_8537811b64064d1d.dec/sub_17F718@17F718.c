int __fastcall sub_17F718(char *a1)
{
  int v2; // r0
  const char *v3; // r5
  int result; // r0
  int v5; // r0
  int *v6; // r4
  int v7; // t1

  if ( a1 )
  {
    v2 = sub_1836B0(a1);
    v3 = sub_93850((const char ***)(v2 + 60), a1);
    if ( v3 )
    {
      sub_259B5C(a1);
      sub_259B5C(" = ");
      sub_259B5C(v3);
      return sub_259B5C(&word_356660);
    }
    else
    {
      sub_259B5C("Environment variable \"");
      sub_259B5C(a1);
      return sub_259B5C("\" not defined.\n");
    }
  }
  else
  {
    v5 = sub_1836B0(0);
    v6 = (int *)sub_938BC(v5 + 60);
    result = *v6;
    if ( *v6 )
    {
      do
      {
        sub_259B5C(result);
        sub_259B5C(&word_356660);
        v7 = v6[1];
        ++v6;
        result = v7;
      }
      while ( v7 );
    }
  }
  return result;
}
