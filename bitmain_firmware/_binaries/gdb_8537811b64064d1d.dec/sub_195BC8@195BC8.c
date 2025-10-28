char *__fastcall sub_195BC8(const char **a1)
{
  const char *v1; // r3
  const char *v3; // r0

  v1 = a1[1];
  if ( !v1 )
    return (char *)sub_32727C(*a1);
  v3 = (const char *)sub_204330(v1);
  return sub_93168("%s:%s", v3, *a1);
}
