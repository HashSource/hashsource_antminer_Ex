char *__fastcall sub_14248(char *result, int a2)
{
  char *v2; // r4
  char *v3; // r6
  int v4; // r2
  char **v5; // r3
  char *v6; // t1

  if ( (int)result <= a2 )
  {
    v2 = result;
    v3 = (char *)(a2 + 1);
    do
    {
      v4 = 21;
      v5 = &off_17108;
      while ( v2 != (char *)v4 )
      {
        if ( v5 == (char **)&unk_17DF0 )
          goto LABEL_8;
        v6 = v5[14];
        v5 += 14;
        if ( !v6 )
          goto LABEL_8;
        v4 = (int)v5[1];
      }
      result = (char *)sub_14140(v2);
LABEL_8:
      ++v2;
    }
    while ( v2 != v3 );
  }
  return result;
}
