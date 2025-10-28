const char **__fastcall V_BOOL(const char **a1, const char *a2, char a3)
{
  const char *v3; // r4

  ++dword_C26A7C;
  v3 = (const char *)strlen(a2);
  memset(a1, 0, 0x20u);
  *a1 = a2;
  a1[1] = v3;
  a1[2] = (const char *)2;
  *((_BYTE *)a1 + 16) = a3;
  return a1;
}
