int __fastcall sub_3D830(int a1, int a2, char *a3)
{
  int v6; // r2
  int v7; // r12
  int v8; // lr
  int v9; // r3
  unsigned int v11; // [sp+1Ch] [bp-68h] BYREF
  _QWORD v12[4]; // [sp+20h] [bp-64h] BYREF
  char s[32]; // [sp+40h] [bp-44h] BYREF
  char v14[32]; // [sp+60h] [bp-24h] BYREF

  v6 = *(_DWORD *)(a1 + 1156);
  v12[0] = *(_QWORD *)(a1 + 1256);
  bin2hex((int)s, (int)v12, v6);
  v11 = bswap32(**(_DWORD **)(a1 + 1160));
  bin2hex((int)v14, (int)&v11, 4);
  v7 = *(_DWORD *)(a2 + 2080);
  v8 = *(_DWORD *)(a1 + 1152);
  v9 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 2080) = v7 + 1;
  snprintf(
    a3,
    0x400u,
    "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
    v9,
    v8,
    s,
    a1 + 1276,
    v14,
    v7);
  return 0;
}
