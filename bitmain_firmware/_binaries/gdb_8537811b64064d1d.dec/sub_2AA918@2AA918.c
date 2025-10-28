const char *__fastcall sub_2AA918(unsigned int a1)
{
  unsigned int v1; // r0

  if ( a1 > 3 )
    return "invalid";
  v1 = a1 - 1;
  if ( v1 > 2 )
    return "unknown";
  else
    return (const char *)*(&off_411B9C + v1);
}
