char *__fastcall sub_250C48(int a1)
{
  char *v2; // r4
  int v3; // r0
  char *v4; // r0

  v2 = sub_15D2A4((char *)0x20);
  v3 = sub_15ECDC(a1);
  v4 = sub_250BF4(v3);
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 2) = v4;
  return v2;
}
