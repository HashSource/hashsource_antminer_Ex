int __fastcall sub_6FB84(int a1, int a2, char *a3)
{
  __int64 v4; // r0
  int v5; // r2
  char s[20]; // [sp+1Ch] [bp-18h] BYREF

  if ( *(_DWORD *)(a1 + 1132) )
  {
    LODWORD(v4) = sub_6E914(*(_DWORD *)(a1 + 1072), *(_DWORD *)(a1 + 1076));
    sprintf(s, "%016llx", v4);
    v5 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v5 + 1;
    sprintf(
      a3,
      "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"0x%s\"]}",
      v5,
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      s);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 3;
  }
}
