int __fastcall sub_3D918(int a1, int a2, char *a3)
{
  int v6; // r2
  const char *v7; // lr
  const char *v8; // r3
  int v10; // [sp+10h] [bp-74h]
  unsigned int v11; // [sp+1Ch] [bp-68h] BYREF
  _QWORD v12[4]; // [sp+20h] [bp-64h] BYREF
  char s[32]; // [sp+40h] [bp-44h] BYREF
  char v14[32]; // [sp+60h] [bp-24h] BYREF

  v6 = *(_DWORD *)(a1 + 1156);
  v12[0] = *(_QWORD *)(a1 + 1264);
  bin2hex((int)s, (int)v12, v6);
  v11 = bswap32(**(_DWORD **)(a1 + 1160));
  bin2hex((int)v14, (int)&v11, 4);
  v7 = *(const char **)(a1 + 1152);
  v8 = *(const char **)(a2 + 12);
  v10 = *(_DWORD *)(a2 + 2088);
  *(_DWORD *)(a2 + 2088) = v10 + 1;
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
    v8,
    v7,
    s,
    (const char *)(a1 + 1284),
    v14,
    v10);
  return 0;
}
