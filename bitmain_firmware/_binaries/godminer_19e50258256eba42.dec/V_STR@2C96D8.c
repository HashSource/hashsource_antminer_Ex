const char **__fastcall V_STR(const char **a1, const char *a2, const char *a3)
{
  const char *v3; // r5
  const char *v4; // r4

  ++dword_C26A7C;
  v3 = (const char *)strlen(a2);
  v4 = (const char *)strlen(a3);
  memset(a1, 0, 0x20u);
  *a1 = a2;
  a1[1] = v3;
  a1[4] = a3;
  a1[6] = v4;
  return a1;
}
