int __fastcall sub_72784(int a1, int a2, char *a3)
{
  int v4; // r3
  char v9[12]; // [sp+28h] [bp-44h] BYREF
  char v10[36]; // [sp+34h] [bp-38h] BYREF
  char v11[12]; // [sp+58h] [bp-14h] BYREF
  unsigned int *v12; // [sp+64h] [bp-8h]

  v12 = *(unsigned int **)(a1 + 1132);
  if ( v12 )
  {
    bin2hex((int)v11, a1 + 1072, 4u);
    bin2hex((int)v10, (int)(v12 + 1), *v12);
    bin2hex((int)v9, a1 + 1100, 4u);
    v4 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v4 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"]}",
      v4,
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      v10,
      v9,
      v11);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
