int __fastcall sub_3C520(_DWORD *a1, int a2, char *a3)
{
  int v6; // r3
  const char *v7; // r12
  const char *v9; // [sp+4h] [bp-30h]
  char s[36]; // [sp+10h] [bp-24h] BYREF

  bin2hex((int)s, a1[290], a1[289]);
  v6 = *(_DWORD *)(a2 + 2088);
  v7 = *(const char **)(a2 + 12);
  v9 = (const char *)a1[288];
  *(_DWORD *)(a2 + 2088) = v6 + 1;
  snprintf(a3, 0x400u, "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}", v6, v7, v9, s);
  return 0;
}
