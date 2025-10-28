char *__fastcall sub_2D066C(int a1, char *s1)
{
  const char *v3; // r5
  char *result; // r0

  v3 = s1;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 465) & 2) == 0 || strcmp(s1, ".plt") )
    return sub_2AD7D4(a1, v3);
  result = sub_2AD7D4(a1, ".got.plt");
  if ( !result )
  {
    v3 = ".got";
    return sub_2AD7D4(a1, v3);
  }
  return result;
}
