int sub_30D9DC()
{
  int v0; // r4
  int v1; // r3
  void *v2; // r0

  v0 = sub_31D9D0();
  if ( v0 )
  {
    v1 = sub_3260A4();
    v2 = (void *)v0;
    if ( v1 )
    {
      sub_326578(v0);
    }
    else
    {
      v0 = 0;
      free(v2);
    }
  }
  return v0;
}
