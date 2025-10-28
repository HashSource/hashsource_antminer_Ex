int __fastcall stratum_prepare_upstream_work_ae(_DWORD *a1, int a2, char *a3)
{
  int v6; // r4
  int v7; // r3
  size_t v8; // r0
  char *v9; // r7
  int v10; // r3
  const char *v11; // r12
  size_t v12; // r0
  const char *v14; // [sp+4h] [bp-24Ch]
  char src[32]; // [sp+10h] [bp-240h] BYREF
  char v16[32]; // [sp+30h] [bp-220h] BYREF
  char s[512]; // [sp+50h] [bp-200h] BYREF

  bin2hex((int)v16, a1[290], a1[289]);
  v6 = 0;
  memset(s, 0, sizeof(s));
  do
  {
    v7 = *(_DWORD *)(a1[291] + v6);
    v6 += 4;
    snprintf(src, 0x20u, "\"%08x\",", v7);
    v8 = strlen(s);
    v9 = (char *)stpcpy(&s[v8]);
  }
  while ( v6 != 164 );
  snprintf(src, 0x20u, "\"%08x\"", *(_DWORD *)(a1[291] + 164));
  strcpy(v9, src);
  v10 = *(_DWORD *)(a2 + 2088);
  v11 = *(const char **)(a2 + 12);
  v14 = (const char *)a1[288];
  *(_DWORD *)(a2 + 2088) = v10 + 1;
  snprintf(a3, 0x400u, "{\"method\":\"mining.submit\",\"id\":%d,\"params\":[\"%s\",\"%s\",\"%s\",[", v10, v11, v14, v16);
  v12 = strlen(a3);
  strcpy((char *)stpcpy(&a3[v12]), "]]}\r\n");
  return 0;
}
