int __fastcall sub_2204A8(const char *a1)
{
  char **v2; // r5
  const char *v3; // r4
  size_t i; // r2
  const char *v5; // t1

  if ( !a1 )
    return 0;
  v2 = off_3E3914;
  v3 = "ARM C Compiler, ADS";
  for ( i = 19; strncmp(a1, v3, i); i = strlen(v5) )
  {
    if ( v2 == &off_3E3928 )
      return 0;
    v5 = v2[1];
    ++v2;
    v3 = v5;
  }
  return 1;
}
