int __fastcall sub_6ACA4(int a1, int a2, char *a3)
{
  _BYTE v8[32]; // [sp+28h] [bp-84h] BYREF
  char s[68]; // [sp+48h] [bp-64h] BYREF
  _DWORD v10[2]; // [sp+8Ch] [bp-20h] BYREF
  char v11; // [sp+94h] [bp-18h]
  _DWORD v12[2]; // [sp+98h] [bp-14h] BYREF
  char v13; // [sp+A0h] [bp-Ch]
  int v14; // [sp+A4h] [bp-8h]

  v14 = *(_DWORD *)(a1 + 1132);
  if ( v14 )
  {
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0;
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0;
    memset(s, 0, 0x41u);
    memset(v8, 0, sizeof(v8));
    bin2hex((int)v12, a1 + 1072, 4u);
    bin2hex((int)v10, v14 + 4, 4u);
    bin2hex((int)s, (int)v8, 0x20u);
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}",
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      (const char *)v10,
      (const char *)(a1 + 1100),
      (const char *)v12,
      s,
      3);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
