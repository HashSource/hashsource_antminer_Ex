_DWORD *__fastcall sub_33C404(_DWORD *a1, char *s)
{
  unsigned int v4; // r0

  v4 = strlen(s);
  if ( 0x7FFFFFFF - a1[1] < v4 )
    sub_33D1AC("basic_string::append");
  return sub_33C348(a1, s, v4);
}
