int __fastcall sub_5A220(int a1, int a2, char *a3)
{
  int v4; // r3
  char v9[32]; // [sp+24h] [bp-28h] BYREF
  unsigned int *v10; // [sp+44h] [bp-8h]

  v10 = *(unsigned int **)(a1 + 1132);
  if ( v10 )
  {
    bin2hex((int)v9, (int)(v10 + 1), *v10);
    v4 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v4 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\"]}",
      v4,
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      v9);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
