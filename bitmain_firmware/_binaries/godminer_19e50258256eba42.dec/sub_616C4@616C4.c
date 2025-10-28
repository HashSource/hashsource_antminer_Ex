int __fastcall sub_616C4(int a1, int a2, char *a3)
{
  const char *v4; // r0
  int v5; // r3
  int v6; // r2
  char v8; // [sp+10h] [bp-C4h] BYREF
  char *v9; // [sp+14h] [bp-C0h]
  int v10; // [sp+18h] [bp-BCh]
  int v11; // [sp+1Ch] [bp-B8h]
  char v12[68]; // [sp+20h] [bp-B4h] BYREF
  char v13[68]; // [sp+64h] [bp-70h] BYREF
  char s[20]; // [sp+A8h] [bp-2Ch] BYREF
  int v15; // [sp+BCh] [bp-18h]
  void *dest; // [sp+C0h] [bp-14h]
  int v17; // [sp+C4h] [bp-10h]

  v11 = a1;
  v10 = a2;
  v9 = a3;
  v17 = 16 - 2 * *(_DWORD *)(a2 + 76);
  dest = &v8;
  if ( *(_DWORD *)(a1 + 1132) )
  {
    v15 = *(_DWORD *)(v11 + 1132);
    sprintf(s, "%016llx", *(_QWORD *)(v11 + 1072));
    memcpy(dest, &s[2 * *(_DWORD *)(v10 + 76)], 17 - 2 * *(_DWORD *)(v10 + 76));
    bin2hex((int)v13, v15 + 64, 0x20u);
    bin2hex((int)v12, v15 + 32, 0x20u);
    if ( *(_BYTE *)(v10 + 1656) )
    {
      v4 = *(const char **)(v10 + 24);
      v5 = *(_DWORD *)(v10 + 1920);
      *(_DWORD *)(v10 + 1920) = v5 + 1;
      sprintf(
        v9,
        "{\"worker\":\"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",\"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}",
        v4,
        v5,
        (const char *)dest,
        v13,
        v12);
    }
    else
    {
      v6 = *(_DWORD *)(v10 + 1920);
      *(_DWORD *)(v10 + 1920) = v6 + 1;
      sprintf(
        v9,
        "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"%s\"]}",
        v6,
        *(const char **)(v10 + 16),
        *(const char **)(v11 + 1124),
        (const char *)dest);
    }
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 3;
  }
}
