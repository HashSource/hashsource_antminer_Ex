int __fastcall sub_6E6A0(int a1, int a2, char *a3)
{
  int v4; // r3
  char v9[20]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD *v10; // [sp+34h] [bp-8h]

  v10 = *(_DWORD **)(a1 + 1132);
  if ( v10 )
  {
    bin2hex((int)v9, a1 + 1072, *v10 + 5);
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
