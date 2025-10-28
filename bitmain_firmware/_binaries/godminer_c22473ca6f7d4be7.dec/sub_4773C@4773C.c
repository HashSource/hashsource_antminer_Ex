int __fastcall sub_4773C(int a1, int a2, char *a3)
{
  int v6; // r3
  const char *v7; // lr
  const char *v8; // r12
  char s[24]; // [sp+14h] [bp-18h] BYREF

  bin2hex((int)s, a1 + 1136, *(_DWORD *)(a1 + 1156) + 5);
  v6 = *(_DWORD *)(a2 + 2080);
  v7 = *(const char **)(a1 + 1152);
  v8 = *(const char **)(a2 + 12);
  *(_DWORD *)(a2 + 2080) = v6 + 1;
  snprintf(a3, 0x400u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v6, v8, v7, s);
  return 0;
}
