int __fastcall sub_3ECA4(int a1, int a2, char *a3)
{
  int v5; // r6
  const char *v6; // r11
  const char *v7; // r10
  int v8; // r12
  _DWORD v10[2]; // [sp+18h] [bp+0h] BYREF
  char v11; // [sp+20h] [bp+8h]
  _DWORD v12[6]; // [sp+24h] [bp+Ch] BYREF
  char v13; // [sp+3Ch] [bp+24h]

  v10[1] = 0;
  v10[0] = 0;
  v5 = a1 + 1280;
  v11 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  bin2hex((int)v10, a1 + 1136, 4);
  bin2hex((int)v12, *(_DWORD *)(v5 - 120), 12);
  v6 = *(const char **)(v5 - 128);
  v7 = *(const char **)(a2 + 12);
  v8 = rand();
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
    v7,
    v6,
    (const char *)v12,
    (const char *)(v5 + 4),
    (const char *)v10,
    v8 % 3 + 10);
  return 0;
}
