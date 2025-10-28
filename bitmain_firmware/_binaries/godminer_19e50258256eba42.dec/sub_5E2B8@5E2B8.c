int __fastcall sub_5E2B8(int a1, int a2, char *a3)
{
  const char *v4; // r6
  const char *v5; // r5
  int v6; // r0
  char v11[28]; // [sp+2Ch] [bp-40h] BYREF
  _DWORD v12[2]; // [sp+48h] [bp-24h] BYREF
  char v13; // [sp+50h] [bp-1Ch]
  unsigned int *v14; // [sp+54h] [bp-18h]

  v14 = *(unsigned int **)(a1 + 1132);
  if ( v14 )
  {
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0;
    memset(v11, 0, 25);
    bin2hex((int)v12, a1 + 1072, 4u);
    bin2hex((int)v11, (int)(v14 + 1), *v14);
    v4 = *(const char **)(a2 + 16);
    v5 = *(const char **)(a1 + 1124);
    v6 = rand();
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      v4,
      v5,
      v11,
      (const char *)(a1 + 1100),
      (const char *)v12,
      v6 % 3 + 10);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
