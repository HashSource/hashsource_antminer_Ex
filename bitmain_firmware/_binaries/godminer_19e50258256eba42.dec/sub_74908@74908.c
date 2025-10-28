int __fastcall sub_74908(int a1, int a2, char *a3)
{
  const char *v4; // r0
  int v5; // r3
  int v6; // r2
  char v11[68]; // [sp+20h] [bp-A4h] BYREF
  char v12[68]; // [sp+64h] [bp-60h] BYREF
  char s[20]; // [sp+A8h] [bp-1Ch] BYREF
  int v14; // [sp+BCh] [bp-8h]

  if ( *(_DWORD *)(a1 + 1132) )
  {
    v14 = *(_DWORD *)(a1 + 1132);
    sprintf(s, "%016lx", *(_DWORD *)(a1 + 1072));
    bin2hex((int)v12, v14 + 64, 0x20u);
    bin2hex((int)v11, v14 + 32, 0x20u);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = *(const char **)(a2 + 24);
      v5 = *(_DWORD *)(a2 + 1920);
      *(_DWORD *)(a2 + 1920) = v5 + 1;
      sprintf(
        a3,
        "{\"worker\": \"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"rvn_submitWork\",                 \"params\":[\"0"
        "x%s\",\"0x%s\",\"0x%s\"]}",
        v4,
        v5,
        s,
        v12,
        v11);
    }
    else
    {
      v6 = *(_DWORD *)(a2 + 1920);
      *(_DWORD *)(a2 + 1920) = v6 + 1;
      sprintf(
        a3,
        "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"0x%s\",\"0x%s\",\"0x%s\"]}",
        v6,
        *(const char **)(a2 + 16),
        *(const char **)(a1 + 1124),
        s,
        v12,
        v11);
    }
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 3;
  }
}
