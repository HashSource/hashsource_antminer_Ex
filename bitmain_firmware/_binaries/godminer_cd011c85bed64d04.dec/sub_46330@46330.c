int __fastcall sub_46330(int a1, int a2, char *a3)
{
  _DWORD v7[2]; // [sp+1Ch] [bp-80h] BYREF
  char v8; // [sp+24h] [bp-78h]
  _DWORD v9[2]; // [sp+28h] [bp-74h] BYREF
  char v10; // [sp+30h] [bp-6Ch]
  _BYTE v11[32]; // [sp+34h] [bp-68h] BYREF
  char s[72]; // [sp+54h] [bp-48h] BYREF

  v7[0] = 0;
  v9[0] = 0;
  v7[1] = 0;
  v8 = 0;
  v9[1] = 0;
  v10 = 0;
  memset(s, 0, 0x41u);
  memset(v11, 0, sizeof(v11));
  bin2hex((int)v7, a1 + 1136, 4);
  bin2hex((int)v9, *(_DWORD *)(a1 + 1160), 4);
  bin2hex((int)s, (int)v11, 32);
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": \"%d\", \"method\": \"mining.submit\"}",
    *(const char **)(a2 + 12),
    *(const char **)(a1 + 1152),
    (const char *)v9,
    (const char *)(a1 + 1284),
    (const char *)v7,
    s,
    3);
  return 0;
}
