int __fastcall sub_48754(_DWORD *a1, int a2, char *a3)
{
  int v6; // r3
  const char *v7; // r12
  const char *v9; // [sp+4h] [bp-58h]
  char s[12]; // [sp+1Ch] [bp-40h] BYREF
  char v11[12]; // [sp+28h] [bp-34h] BYREF
  char v12[40]; // [sp+34h] [bp-28h] BYREF

  bin2hex((int)s, (int)(a1 + 284), 4);
  bin2hex((int)v12, a1[290], a1[289]);
  bin2hex((int)v11, (int)(a1 + 312), 4);
  v6 = *(_DWORD *)(a2 + 2088);
  v7 = *(const char **)(a2 + 12);
  v9 = (const char *)a1[288];
  *(_DWORD *)(a2 + 2088) = v6 + 1;
  snprintf(
    a3,
    0x400u,
    "{\"id\":%d,\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"]}",
    v6,
    v7,
    v9,
    v12,
    v11,
    s);
  return 0;
}
