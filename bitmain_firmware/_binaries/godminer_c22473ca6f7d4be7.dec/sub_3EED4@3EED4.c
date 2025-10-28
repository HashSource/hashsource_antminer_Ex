int __fastcall sub_3EED4(int a1, int a2, char *a3)
{
  const char *v6; // r2
  int v7; // r3
  int v9; // r2
  char s[20]; // [sp+14h] [bp-9Ch] BYREF
  char v11[68]; // [sp+28h] [bp-88h] BYREF
  char v12[68]; // [sp+6Ch] [bp-44h] BYREF

  sprintf(s, "%016llx", *(_QWORD *)(a1 + 1136));
  bin2hex((int)v11, a1 + 1168, 32);
  bin2hex((int)v12, a1 + 1200, 32);
  v6 = *(const char **)(a2 + 20);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a2 + 2080);
    *(_DWORD *)(a2 + 2080) = v7 + 1;
    sprintf(
      a3,
      "{\"worker\": \"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",                 \"params\":[\"0x%"
      "s\",\"0x%s\",\"0x%s\"]}",
      v6,
      v7,
      s,
      v11,
      v12);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 2080);
    *(_DWORD *)(a2 + 2080) = v9 + 1;
    sprintf(
      a3,
      "{\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",                 \"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}",
      v9,
      s,
      v11,
      v12);
  }
  return 0;
}
